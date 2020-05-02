#include "stdafx.h"
#include "figur_contoller.h"
#include "cirkel.h"



figur_controller::figur_controller() :antal_figurer(0)
{
	f = nullptr;
}


figur_controller::~figur_controller()
{
	
	delete f;
}

void figur_controller::opret_cirkel(POINT start_point, POINT et, POINT to, POINT tre)
{
	figur* f = new cirkel();


}

void figur_controller::opretfirkant(POINT LEFTUP_POINT,POINT LEFTDOWN_POINT, POINT RIGHTUP_POINT, POINT LOWLEFTPOINT)
{

}

void figur_controller::setPoint(int x, int y)
{

}