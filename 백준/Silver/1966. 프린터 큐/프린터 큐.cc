#include <iostream>
using namespace std;
#include <vector>
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, m, c;
	vector<pair<int,bool>> f;
	cin >> t;
	for (int tc = 0; tc < t; tc++) {

		cin >> n >> m;
		f.resize(n);
		for (int i = 0; i < n; i++) {
			cin >> f[i].first;
			f[i].second = false;
		} f[m].second = true;

		int high, low, c = 1, idx = 0;
		while(true) {
			high = idx;	low = idx;
			for (int i = idx; i < idx + n; i++) {
				if (f[high].first < f[i % n].first)
					high = i % n;
				else if (f[low].first > f[i % n].first)
					low = i % n;
			}

			if (f[high].first == f[low].first) {
				for (int i = 0; (!f[(idx + i) % n].second); i++)
					c++;
				cout << c << "\n";
				break;
			}

			if (f[high].second) {
				cout << c << "\n";
				break;
			}

			f.erase(f.begin() + high);
			idx = high % --n;
			c++;
		}
	}

	return 0;
}