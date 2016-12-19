//
//  Source.cpp
//  Prism
//
//  Created by Olha Leskovska on 12/18/16.
//  Copyright © 2016 Olha Leskovska. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>
#include "Shape_2D.h"
#include "Triangle.h"
#include "Wrong_data.h"
#include "Square.h"
#include "Rectangle.h"
#include "Prism.h"

using namespace std;

int main()
{
	bool bl = true;
	while (bl)
	{
		bl = false;
		try
		{
			Prism prism;
			system("cls");
			prism.InputPrism();
			system("cls");

			prism.ShowPrismData();
			_getch();

		}
		catch (Wrong_data *w)
		{
			system("cls");
			cout << "Wrong input." << endl;
			cout << "Re-enter data" << endl;
			_getch();
			bl = true;
		}
	}
	return 0;
}