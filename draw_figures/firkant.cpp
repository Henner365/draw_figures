#include "stdafx.h"
#include "firkant.h"

#include <iostream>

firkant::firkant() 
{
	areal = 0.0;
	firpoint = new POINT[4];

}


firkant::~firkant()
{
	delete[] firpoint;
}

void  firkant::tegn() {
	std::cout << "\ttegne tegne firkant\n";
	
}

