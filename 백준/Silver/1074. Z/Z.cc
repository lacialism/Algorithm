#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, r, c;
	cin >> N >> r >> c;

	int sum = 0;
	for (int n = N; n >= 1; n--) {
		if (r / (1 << n - 1))
			sum += (1 << n) * (1 << n - 1);
		if (c / (1 << n - 1))
			sum += (1 << n - 1) * (1 << n - 1);
		r %= (1 << n - 1);
		c %= (1 << n - 1);
	}
	cout << sum;

	return 0;
}