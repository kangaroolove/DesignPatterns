#pragma once
class MenuIterator
{
public:
	MenuIterator();
	virtual bool hasNext() = 0;
	virtual void* next() = 0;
};

