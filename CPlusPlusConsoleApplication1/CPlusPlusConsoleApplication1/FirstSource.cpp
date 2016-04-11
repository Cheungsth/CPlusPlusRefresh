//#include "stdafx.h"
#include <iostream>

using namespace std;

#include <iomanip>
using std::setw;

int add(int x, int y);


int arraytest()
{
	int n[10];	// n is an array of 10 integers

				// initialize elements of array n to 0
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100; // set element at location i to i + 100
	}
	cout << "Element" << setw(13) << "Value" << endl;

	// output each array element's value
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << setw(13) << n[j] << endl;
	}

	return 0;
}

int main()
{
	cout << "Hello World!";
	cout << "\n";
	cout << "\n";
	

	//int z;
	//z = addition(5, 3);
	//cout << "The result is " << z;
	


	cout << "The sum of 3 and 4 is " << add(3, 4) << endl;

	arraytest();

	int age;
	cin >> age;
	cout << "\n";
	cout << age;
	cout << "\n";
	cout << "Program ends.";
	
}






int mathoperations(int j)
{
	// number definition:
	short s = 10;
	int i = -1000;
	long l = 1000000;
	float f = 230.475313132;
	double d = 200.374;

	// mathematical operations:
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i) :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow (d, 2) :" << pow(d, 2) << endl;

	return i;
	
}