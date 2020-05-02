#pragma once

#include "figur.h"

#ifndef _trekant__h
#define _trekant__h

class trekant:public figur
{
protected:
	float areal;
	POINT *three_point;
public:
	trekant();
	void virtual  tegn();
	virtual ~trekant();
};

#endif _trekant__h
