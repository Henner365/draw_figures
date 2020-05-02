#pragma once

#include "figur.h"

#ifndef _firkant__h
#define _firkant__h

class firkant : public figur
{
protected:
	float areal;
	POINT *firpoint;
public:
	firkant();
	void virtual tegn();
	
	virtual ~firkant();// kalder basis klassens desctuctor pga. virtual.
};
#endif _firkant__

