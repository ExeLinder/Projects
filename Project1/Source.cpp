#include<iostream>
using namespace std;

int func1(int x)
{
	int n = x;
	for (size_t i = 1; i < n-1; i++)
	{
		x *= (n - i);
	}
	return x;
}
int func2(int x)
{
	return x;
}

int func3(int x)
{
	return x;
}

struct MyStruct
{
	int x;
	void Method(){} 
};
int main() 
{
	int x = 0;

	cout << "Hello";
	cout << "Hello"; 
	cout << "Hello";
	cout << "Hello World";
	cout << "Hello";
	cout << "World";

	cout << "HelloWorld";
	cout << "\nEnter x (from 1 to 99): x=";
	cin >> x;
	if (x>0 && x<100)
	{
		printf_s("%d!=%d\n", x, func1(x));
	}
	else
	{
		cout << "You are wrong." << endl;
	}



}