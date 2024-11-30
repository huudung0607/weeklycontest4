#include <iostream>
#include <cmath>
using namespace std;
long long pow_num(int a, int b) {
	long long res = 1;
	for (int i = 1; i <= b; i++) {
		res *= a;
	}
	return res;
}
long long tachso(long long n)
{
	long long count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return count;
}
long long astrong(long long n)
{
	long long temp = n;
	long long sum = 0;
	long long kq = tachso(n);
	while (n)
	{
		long long res = n % 10;
		sum += pow_num(res, kq);
		n /= 10;
	}
	if (sum == temp)
	{
		return 1;
	}
	return 0;
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
	for (int i = a; i <= b; i++)
	{
		if (astrong(i))
		{
			cout << i << " ";
		}
	}
}
