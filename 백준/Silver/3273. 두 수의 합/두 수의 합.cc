#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> x;
	sort(a.begin(), a.end());

	int p1 = 0, p2 = n - 1, c = 0;

	while (p1 < p2) {
		int sum = a[p1] + a[p2];
		if (sum == x) {
			c++;
			p1++;
			p2 = n - 1;
		}
		else if (sum > x)
			p2--;
		else
			p1++;
	}

	cout << c;

	return 0;
}