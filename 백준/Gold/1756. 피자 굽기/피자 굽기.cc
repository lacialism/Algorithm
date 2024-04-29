#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int dn, n;
	cin >> dn;
	vector<int> d(dn);
	cin >> n;
	queue<int> a;

	for (int i = 0; i < dn; i++) {
		cin >> d[i];
		if (i > 0 && d[i - 1] < d[i])
			d[i] = d[i - 1];
	}
	for (int i = 0; i < n; i++) {
		int in;
		cin >> in;
		a.push(in);
	}
	while (!a.empty())
	{
		int k = dn - 1, t = a.front();
		while (k >= 0) {
			if (t <= d[k])
				break;
			k--;
		}
		if (k < 0) {
			cout << "0";
			return 0;
		}
		dn = k;
		a.pop();
	}
	cout << dn + 1;

	return 0;
}