#include <cstring>
#include "Buffer.h"

Buffer::Buffer(const char* buf)
	: position(0)
{
	if(!buf)
	{
		capacity = 1;
		buffer = new char[capacity];
		buffer[capacity - 1] = '\0';
	}
	else
	{
		capacity = strlen(buf) + 1;
		buffer = new char[capacity];
		strncpy(buffer, buf, capacity - 1);
		buffer[capacity - 1] = '\0';
	}
}

Buffer::Buffer(const Buffer& rhs)
{
	
}
	
Buffer::~Buffer()
{
	
}

Buffer& 
Buffer::operator=(const Buffer& rhs)
{
	
}

Buffer& 
Buffer::operator++()
{
	
}

Buffer& 
Buffer::operator++(int)
{
	
}

Buffer& 
Buffer::operator--()
{
	
}

Buffer&
Buffer::operator--(int)
{
	
}
