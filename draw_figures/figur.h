#pragma once
// delcaration af pure virtuel abstract 
// pure virtual no instantiation possible

#include <windows.h>

#ifndef _figur__h
#define _figur__h

// pure virtual
// inheritance encapsulation polymorphism


class figur
{
protected:
	POINT *insert_point;

public:
	figur();
	void virtual tegn() = 0;
	void setStartpoint(int x, int y);
	virtual ~figur();
};

#endif // !_figur__h