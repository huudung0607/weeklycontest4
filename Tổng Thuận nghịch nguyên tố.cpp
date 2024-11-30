#include <iostream>
#include <cmath>
using namespace std;

long long isprime(long long n)
{
	if (n < 2)
	{
		return false;
	}
	for (long long i = 2; i <= sqrt(n); i++)
	{
		if (n % i ==0)
		{
			return false;
		}
	}
	return true;
}

long long latnguoc(long long n)
{
	if (n == 0)
	{
		return 0;
	}
	long long sum = 0;
	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}

long long check(long long n)
{
	long long sum = latnguoc(n) + n;
	if (isprime(sum))
	{
		return 1;
	}
	return 0;
}

int main()
{
	long long a, b;
	cin >> a >> b;
	if (a > b)
	{
		long long temp = a;
		a = b;
		b = temp;
	}
	bool flag = false;
	for (long long i = a; i <= b; i++)
	{
		if (check(i))
		{
			cout << i << " ";
			flag = true;
		}
	}
	if (!flag)
	{
		cout << "28tech";
	}
}
