#include <iostream>
using namespace std;
#include <vector>

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n, m, h;
	cin >> n >> m;
	vector<int> t(n);
	long high = 0, low = 1;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
		high += t[i];
	}

	while (low <= high) {
		long mid = (low + high) / 2;
		long cummulated = 0;

		for (int i = 0; i < n; i++)
			if (t[i] > mid)
				cummulated += t[i] - mid;

		if (cummulated >= m)
			low = mid + 1;
		else
			high = mid - 1;
	}

	cout << high;

	return 0;
}