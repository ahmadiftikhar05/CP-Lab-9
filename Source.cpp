#include<iostream>
using namespace std;
int sum(int a, int b);
float sum(float a, float b);
int main()
{
	cout << sum(5, 6) << endl;
	cout << sum(5.65f, 5.95f) << endl; 
	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
float sum(float a, float b)
{
	return a + b;
}
