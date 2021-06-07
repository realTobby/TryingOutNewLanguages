#include "iostream"
using namespace std;

int addition(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{
    int x, y;
	int sum;
	cout << "First number: ";
	cin >> x;
	cout << "Second number: ";
	cin >> y;
	
	char o;
	cout << "Operator? <A>ddition, <S>ubstract, <M>ultiply, <D>ivide : ";
	cin >> o;
	
	switch(o)
	{
		case 'a':
			sum = addition(x, y);
		break;
		case 's':
			sum = substract(x, y);
		break;
		case 'm':
			sum = multiply(x, y);
		break;
		case 'd':
			sum = divide(x, y);
		break;
	}
	
	cout << "Result is: " << sum;
    return 0;
}

int addition(int a, int b)
{
	return a + b;
}

int substract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}


