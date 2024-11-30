#include <iostream>
#include <cmath>
//Cho số tự nhiên N, bạn hãy xác định xem N có phải là một lũy thừa với cơ số 7 hay không ?

Ví dụ số 49 là lũy thừa cơ số 7 với số mũ 2.
using namespace std;

long long mu_bay(long long n)
{
	long long res = 1;
	while (res <= n)
	{
		if (res == n)
		{
			return 1;
		}
		if (res > n/7)
		{
			break;
		}
		res *= 7;
	}
	return 0;
}

int main()
{
	long long n;
	cin >> n;
	if (mu_bay(n))
	{
		cout << "28tech" << endl;
	}
	else
	{
		cout << "29tech" << endl;
	}
}
