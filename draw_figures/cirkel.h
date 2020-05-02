#pragma once

#include "figur.h"

#ifndef _cirkel__h
#define _cirkel__h

class cirkel : public figur
{
protected:
	float areal;
	float radius;
	POINT *cirpoint;

public:
	cirkel();
	void virtual tegn();
	virtual ~cirkel();
};
#endif _cirkel__h

