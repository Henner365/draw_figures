// draw_figures.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <iostream>
#include <string>

#include <windows.h>
#include "figur_contoller.h"
#include "firkant.h"


typedef int cin_var;

int main()
{
	cin_var cv = 0;
	char selection;
	
	
	if (1) {
		std::string txt;		
		txt = "igang\n";		
		std::string txt2 = txt.substr(1, 6);
		std::cout << "hej. Tast any key to proceed .." << txt2 << txt;		std::cin >> cv;
	}
    
	if (1) {
		/*figur * firk = new firkant;
		firk->tegn();
		delete firk;*/
		figur_controller onstack_controller;
		POINT a, b, c, d;
		a.x = 10; a.y = 20;
		b.x = 10; b.y = 150;
		c.x = 100; c.y = 20;
		d.x = 100; d.y = 150;



		onstack_controller.opret_cirkel();
		
	}

	std::cin >> cv                                                                                                                                                                                                                                                                                                                                  ;

	// 4-7-17 arbejder på at få tegneinstrukser til at fungere.set på 23-8-2018.Igen 02-05-2020.
			
		if (1 /*1*/) {
			do
			{
				std::cout << "  Draw figure                     Menu\n";
				std::cout << "  ====================================\n";
				std::cout << "  1.  Draw a circle					\n";
				std::cout << "  2.  Draw a square                   \n";
				std::cout << "  3.  Draw a triangle					\n";
				std::cout << "  4.  Enter start point x,y			\n";
				std::cout << "\n";
				std::cout << "  5.  Exit\n";
				std::cout << "  ====================================\n";
				std::cout << "  Enter your selection: ";
				std::cin >> selection;
				std::cout << std::endl;

				switch (selection)
				{
				case '1':
					std::cout << "Computer Programming In C++\n";
					std::cout << "\n";
					break;

				case '2':
					std::cout << "Java Programming\n";
					std::cout << "\n";
					break;
				case '3':
					std::cout << "Android Programming\n";
					std::cout << "\n";
					break;

				case '4':
					std::cout << "iOS Programming\n";
					std::cout << "\n";
					break;

				case '5':
					std::cout << "Goodbye.\n";
					break;

				default: std::cout << selection << "is not a valid menu item.\n";

					std::cout << std::endl;

				}

			} while (selection != '5');

		}


		if (0 /*1*/)
		{
			// Get window handle to console, and device context
			HWND console_handle = GetConsoleWindow();
			HDC device_context = GetDC(console_handle);

			//Here's a 3 pixels wide RED line [from initial 0,0] to 300,300
			HPEN pen = CreatePen(PS_SOLID, 3, RGB(255, 0, 0));
			SelectObject(device_context, pen);
			LineTo(device_context, 300, 300);
			

			SelectObject(device_context, GetStockObject(GRAY_BRUSH));
			SelectObject(device_context, GetStockObject(DC_PEN));
			SetDCPenColor(device_context, RGB(0, 0, 255));
			Rectangle(device_context, 120, 50, 200, 150);
			
			SetDCPenColor(device_context, RGB(0, 255, 0));
			Ellipse(device_context, 300, 200, 400, 300);





			DeleteObject(SelectObject(device_context, pen));
			ReleaseDC(console_handle, device_context);
			std::cin.ignore();
			
		}


		std::cin >> cv;
		return 0;
}

