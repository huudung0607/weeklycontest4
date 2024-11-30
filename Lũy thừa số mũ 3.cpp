#include <iostream>
#include <cmath>
//Cho một số nguyên N, bạn hãy kiểm tra xem N có thể viết dưới dạng P^3 hay không, với P là một số nguyên không âm.
using namespace std;

long long mu_ba(long long n)
{
	long long res = cbrt(n);
	if (res * res * res == n || (res + 1) * (res + 1)*(res + 1) == n)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		if (mu_ba(n))
		{
			cout << "28tech" << endl;
		}
		else
		{
			cout << "29tech" << endl;
		}
	}
}
