#pragma once

#include "figur.h"
#include "cirkel.h"
#include "trekant.h"
#include "firkant.h"

#define NULL 0;


#ifndef _figur_controller__h
#define _figur_controller__h


class figur_controller
{
private:
	int antal_figurer;
	figur* f;
public:
	figur_controller();
	void setPoint(int x, int y);
	void opret_cirkel(POINT start_point, POINT et ,POINT to ,POINT tre);
	void opretfirkant(POINT LEFTUP_POINT, POINT LEFTDOWN_POINT, POINT RIGHTUP_POINT, POINT LOWLEFTPOINT);

	virtual ~figur_controller();
};
#endif _figur_controller__h


