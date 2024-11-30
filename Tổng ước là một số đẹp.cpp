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

int tong_uoc(int n)
{
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			sum += i;
			if (i != n/i)
			{
				sum += n / i;
			}
		}
	}
	int res = sum % 10;
	if (isprime(res))
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
		if (tong_uoc(i))
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
