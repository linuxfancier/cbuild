#ifndef __SCANNER_H__
#define __SCANNER_H__

#include <cstdio>
#include "Buffer.h"

class Scanner
{
public:
	static Scanner GetInstance()
	{
		static Scanner instance;
		return instance;
	}
	
	char Scan(FILE* file);
	
private:
	Scanner() {}
	
private:
	Buffer buffer;
};

#endif // __SCANNER_H__
