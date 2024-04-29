#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int max, n;
	cin >> max;
	vector< pair<int,int> > d(max);
	cin >> n;
	queue<int> a;

	int in, idx = 0;
	cin >> in;
	d[0].first = in;
	d[0].second = 1;
	for (int i = 1; i < max; i++) {
		cin >> in;
		if (in >= d[idx].first)
			d[idx].second++;

		else {
			idx++;
			d[idx].first = in;
			d[idx].second++;
	}	}

	for (int i = 0; i < n; i++) {
		int in;
		cin >> in;
		a.push(in);
	}
	
	for (int i = 0; i < n; i++)
	{
		int low = 0, high = idx, tar = a.front(), mid;
		while (low <= high) {
			mid = (low + high) / 2;

			if (d[mid].first < tar) {
				high = mid - 1;
				continue;
			}

			if (mid + 1 <= idx && d[mid + 1].first >= tar) {
				low = mid + 1;
				continue;
			}

			if (--d[mid].second == 0)
				idx = mid - 1;
			else
				idx = mid;
			a.pop();
			break;
	}	}

	if (!a.empty()) {
		cout << "0";
		return 0;
	}

	int sum = 1;
	for (int i = 0; i <= idx; i++)
		sum += d[i].second;

	cout << sum;
	
	return 0;
}