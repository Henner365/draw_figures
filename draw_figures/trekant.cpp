#include "stdafx.h"
#include "trekant.h"

#include <iostream>

trekant::trekant()
{
	three_point = new POINT[3];
}


trekant::~trekant()
{
	delete[] three_point;
}

void  trekant::tegn() {
	std::cout << "\ttegne trekant\n";

}