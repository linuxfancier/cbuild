#ifndef __BUFFER_H__
#define __BUFFER_H__

class Buffer
{
public:
	Buffer(const char* buf = 0);
	Buffer(const Buffer&);
	~Buffer();
	Buffer& operator=(const Buffer&);
	Buffer& operator++();
	Buffer& operator++(int);
	Buffer& operator--();
	Buffer& operator--(int);
	char* GetBuffer() const { return buffer; }
	char GetCurChar() const { return buffer[position]; }
	int GetCapacity() const { return capacity; }
	int GetPosition() const { return position; }
	bool IsFull() const { return position == capacity - 1; }
	
private:
	char* buffer;
	int capacity;
	int position;	
};

#endif // __BUFFER_H__
