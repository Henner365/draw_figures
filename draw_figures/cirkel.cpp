#include "stdafx.h"
#include "cirkel.h"

#include <iostream>

cirkel::cirkel() 
{
	areal = 0.0;
	cirpoint = NULL;
	radius = 0.0;
	//figur::insert_point = new POINT;
	//insert_point->x
}


cirkel::~cirkel()
{
	std::cout << "cirkels destructor kaldt\n";
}

void  cirkel::tegn() {
	std::cout << "\ttegne cirkel\n";

}