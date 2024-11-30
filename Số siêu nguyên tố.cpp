#include <iostream>
#include <cmath>
using namespace std;
int prime(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int tachso(int n)
{
	if (n == 0)
	{
		return 0;
	}
	while (n)
	{
		if (!prime(n))
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
}

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	bool flag = false;
	for (int i = a; i <= b; i++)
	{
		if (tachso(i))
		{
			cout << i << " ";
			flag = true;
		}
	}
	if (!flag)
	{
		cout << "28tech" << endl;
	}
}
