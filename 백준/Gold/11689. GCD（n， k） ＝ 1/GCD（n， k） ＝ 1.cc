#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;
	cin >> n;
	long r = n;

	for (long p = 2; p <= sqrt(n); p++)
	{
		if (n % p == 0)
		{
			r -= r / p;
			while (n % p == 0)
				n /= p;
		}
	}
	if (n > 1)
		r -= r / n;	

	cout << r << endl;

	return 0;
}