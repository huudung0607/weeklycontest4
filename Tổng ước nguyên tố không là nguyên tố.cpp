#include <iostream>
#include <cmath>
using namespace std;
//28Tech rất thích thú với ước nguyên tố của 1 số tự nhiên, bây giờ anh ấy muốn bạn kiểm tra xem một số có thỏa mãn điều kiện : Tổng các ước nguyên tố khác nhau của 1 số không phải là số nguyên tố?

Ví dụ số 60 có 3 ước nguyên tố là 2, 3, 5, tổng 3 ước này là 10 không phải là 1 số nguyên tố.

Bạn hãy liệt kê các số thỏa mãn điều kiện trên trong đoạn 2 số a, b. Nếu không tồn tại số nào thỏa mãn thì hãy in ra 28tech.
bool isPrime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int phantich(int n)
{
	int sum = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n /= i;	
			}
			sum += i;
		}
	}
	if (n > 1)
	{
		sum += n;
	}
	if (isPrime(sum))
	{
		return 0;
	}
	return 1;
}
int main()
{
	int a, b;
	cin >> a >> b;
	bool flag = false;
	for (int i = a; i <= b; i++)
	{
		if (phantich(i))
		{
			cout << i << " ";
			flag = true;
		}
	}
	if (flag == false)
	{
		cout << "28tech";
	}
}
