#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, in;
	vector<int> c;

	cin >> n;
	c = vector<int>(n);
	for (int i = 0; i < n; i++)
		cin >> c[i];
	sort(c.begin(), c.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		int low, high, mid;
		low = 0;
		high = n - 1;

		cin >> in;
		while (low <= high) {
			mid = (low + high) / 2;
			if (c[mid] == in) {
				cout << "1 ";
				break;
			}
			else if (c[mid] > in)
				high = mid - 1;
			else
				low = mid + 1;
		}
		if (low > high)
			cout << "0 ";
	}

	return 0;
}