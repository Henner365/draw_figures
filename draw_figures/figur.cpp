#include "stdafx.h"
#include "figur.h"
#include <iostream>


figur::figur()
{
	insert_point = new POINT;
	insert_point->x = 0;
	insert_point->y = 0;

}


figur::~figur()
{
	std::cout << "figur destructor er kaldt";
	delete insert_point;

}
void figur::setStartpoint(int x, int y) {

		
};
