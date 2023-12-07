#include<iostream>
using namespace std;
int area(int &a); //area of square
float area(float &a, float &b); //area of rectangle
float area(float &a); //area of circle
int main()
{
	int choice, sq_length, sq_area;
	float rec_length, breath, rec_area, radius, cir_area;
	cout << "1.Area of square.\n2.Area of rectangle.\n3.Area of circle.\nEnter your choice = ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter length = ";
		cin >> sq_length;
		sq_area=area(sq_length);
		cout << "Area = " << sq_area << endl;
	}
	else if (choice == 2)
	{
		cout << "Enter Length = ";
		cin >> rec_length;
		cout << "Enter Breath = ";
		cin >> breath;
		rec_area=area(rec_length, breath);
	    cout<<"Area = " << rec_area << endl;
	}
	else if (choice == 3)
	{
		cout << "Enter Radius = ";
		cin >> radius;
		cir_area =area(radius);
		cout << "Area = " << cir_area << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
	}
	return 0;
}
int area(int& a)
{
	return a * a;
}
float area(float &a, float &b)
{
	return a * b;
}
float area(float& a)
{
	const float pi = 3.14;
	return pi * a * a;
}