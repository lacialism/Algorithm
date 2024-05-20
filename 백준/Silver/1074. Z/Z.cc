#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, r, c;
	int p[16] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768};
	cin >> N >> r >> c;

	r; c;
	int sum = 0;
	for (int n = N; n >= 1; n--) {
		if (r / p[n - 1])
			sum += p[n] * p[n - 1];
		if (c / p[n - 1])
			sum += p[n - 1] * p[n - 1];
		r %= p[n - 1];
		c %= p[n - 1];
	}
	cout << sum;

	return 0;
}