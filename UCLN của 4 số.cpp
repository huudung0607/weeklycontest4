#include <iostream>
using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << gcd(gcd(a, b), gcd(c, d)) << endl;
}
