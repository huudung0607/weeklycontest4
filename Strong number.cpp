#include <iostream>
#include <cmath>
//Một số được gọi là số strong nếu tổng giai thừa các chữ số của nó bằng chính nó.

Ví dụ số 145 có 1! + 4! + 5! = 1 + 24 + 120 = 145 nên số 145 được gọi là số strong.

Bạn hãy liệt kê các số strong trong đoạn giữa 2 số nguyên a, b.


using namespace std;

long long giaithua(int n)
{
	long long giaithua = 1;
	for (int i = 1; i <= n; i++) {
		giaithua *= i;
	}
	return giaithua;
}

int strong(int n)
{
	if (n == 0)
	{
		return 0;
	}
	int sum = 0;
	int temp = n;
	while (n)
	{
		int res = n % 10;
		sum += giaithua(res);
		n /= 10;
	}
	return sum == temp;
}

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (strong(i))
		{
			cout << i << " ";
		}
	}
}
