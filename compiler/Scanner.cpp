#include "Scanner.h"

char
Scanner::Scan(FILE* file)
{
	if (!file)
		return '\0';
	
	if (buffer.IsFull())
	{
		char buf[128];
		int len = fread(buf, sizeof(char), 1, file);
		if (len == 0)
		{
			buf[0] = '\0';
		}
		buffer = Buffer(buf);
	}
	
	char ch = buffer.GetCurChar();
	buffer++;
	
	if (ch == '\0')
	{
		fclose(file);
		file = NULL;
	}
	
	return ch;
}
