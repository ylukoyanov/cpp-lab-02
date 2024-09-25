#include <iostream>
#include <cmath>
using namespace std;

long long int fact(int x)
{
	long long int result = 1;

	if (x % 2 == 0)
	{
		for (int i = 2; i <= x; i += 2)
		{
			result *= i;
		}
	}

	else
	{
		for (int i = 1; i <= x; i += 2)
		{
			result *= i;
		}
	}

	return result;
}

double t(double x)
{
	double sum1, sum2;

	// sum1
	for (int k = 0; k <= 10; k++)
	{
		sum1 += (pow(x,2*k+1))/(fact(2*k+1));
	}

	// sum2
	for (int k = 0; k <= 10; k++)
	{
		sum2 += (pow(x,2*k))/(fact(2*k));
	}

	return sum1/sum2;
}

int main()
{
	double y;
	cin >> y;

	cout << (7*t(0.25) + 2*t(1 + y))/(6-t(y*y-1));
}