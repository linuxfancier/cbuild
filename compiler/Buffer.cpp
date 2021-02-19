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
	capacity = rhs.capacity;
	position = rhs.position;
	buffer = new char[capacity];
	strncpy(buffer, rhs.buffer, capacity - 1);
	buffer[capacity - 1] = '\0';
}
	
Buffer::~Buffer()
{
	delete[] buffer;
}

Buffer& 
Buffer::operator=(const Buffer& rhs)
{
	if (this == &rhs)
		return *this;
	
	capacity = rhs.capacity;
	position = rhs.position;
	delete[] buffer;
	buffer = new char[capacity];
	strncpy(buffer, rhs.buffer, capacity - 1);
	buffer[capacity - 1] = '\0';
	
	return *this;
}

Buffer& 
Buffer::operator++()
{
	if (position < capacity - 1)
	{
		position ++;
	}
	
	return *this;
}

Buffer 
Buffer::operator++(int)
{
	Buffer temp = *this;
	if (position < capacity - 1)
	{
		position ++;
	}
	
	return temp;
}

Buffer& 
Buffer::operator--()
{
	if (position > 0)
	{
		position --;
	}
	
	return *this;
}

Buffer
Buffer::operator--(int)
{
	Buffer temp = *this;
	if (position > 0)
	{
		position --;
	}
	
	return temp;
}
