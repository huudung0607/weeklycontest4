#include <iostream>
#include <cmath>
using namespace std;
//Một số được coi là số đẹp nếu nó là số nguyên tố và có tổng chữ số của nó là một số thuận nghịch, bạn hãy liệt kê những số đẹp như vậy trong đoạn [a, b].

Ví dụ số 29 là số đẹp vì nó là số nguyên tố, đồng thời tổng chữ số của nó là 11 là một số thuận nghịch.


int thuannghich(int n)
{
	if (n == 0)
	{
		return 0;
	}
	int sum = 0;
	int temp = n;
	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if (sum == temp)
	{
		return 1;
	}
	return 0;
}

int tong(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	if (thuannghich(sum))
	{
		return 1;
	}
	return 0;
}

int prime(int n)
{
	if ( n < 2)
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

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (prime(i) && tong(i))
		{
			cout << i << " ";
		}
	}
}
