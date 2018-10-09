// Jacob Leuquire
// COSC 2030 Lab 3
// October 1, 2018


#include<iostream>

using namespace std;

long sigma = 0;
long n = 0;
double factorial = 1;
double ratioSum = 0;

long sum(long)
{
	cout << "Enter positive integer n to find the Sum:" << endl;
	cin >> n;
	for (long i = 1; i < n+1; i++)
	{
		sigma = sigma + i;
	}
	cout << "The Sum is: " << sigma << endl << endl;
	system("pause");
	return sigma;
}

double product(long)
{
	cout << "Enter positive integer n to find the Product (n!):" << endl;
	cin >> n;
	for (long i = 1; i < n + 1; i++)
	{
		factorial = factorial * i;
	}
	cout << "The Product is: " << factorial << endl << endl;
	system("pause");
	return factorial;
}

double ratio(float)
{
	cout << "Enter positive integer n to find the Sum of Ratios:" << endl;
	cin >> n;
	for (float i = 0; i < n; i++)
	{
		ratioSum += 1/(float)n;
	}
	ratioSum -= 1;
	cout << "The Sum of Ratios is: " << ratioSum << endl << endl;
	system("pause");
	return ratioSum;
}


int main()
{
	sum(n);
	product(n);
	ratio(n);

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	system("pause");
	return 0;
}