#include<iostream>
using namespace std;
void swap(int &a, int &b);
int main()
{
	int num1, num2;
	cout << "Enter value of a = ";
	cin >> num1;
	cout << "Enter value of  = ";
	cin >> num2;
	swap(num1, num2);
	cout << "a = " << num1 << endl;
	cout << "b = " << num2 << endl;
	return 0;
}
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}