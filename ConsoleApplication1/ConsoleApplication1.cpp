// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

class Circle {

private:

public:
	double Radius;
	
	Circle() //constructor
	{
		Radius = 1;
	}

	Circle(double newRadius)
	{
		Radius = newRadius;
	}

	double GetArea()
	{
		return (3.14 * Radius * Radius);
	}

};

class Triangle 
{
	// display with "*"
public:
	float length;

	Triangle()
	{
		length = 1; //base
	}

	Triangle(float _length)
	{
		length = _length;
	}

	void Draw()
	{
		for (int i = 0; i < length - 1; i++)
		{
			if (i == 0)
			{
				cout << "*\n";
			}
			else
			{
				int spacing = i - 1;
				cout << "*";
				while (spacing != 0)
				{
					cout << "*";
					spacing--;
				}
				cout << "*\n";
			}
		}
		for (int i = 0; i < length; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}
};

int main()
{
	Triangle myTriangle(7);

	myTriangle.Draw();

	cout << "\n";

    return 0;
}

