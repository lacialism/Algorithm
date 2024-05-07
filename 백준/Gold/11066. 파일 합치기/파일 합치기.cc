#include <iostream>
#include <vector>
using namespace std;

#define MAXIMA 2147483647

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	vector< vector<pair<int, int>> > c;

	cin >> t;
	for (int testN = 0; testN < t; testN++)
	{
		cin >> n;
		c = vector< vector<pair<int, int>> >(n, vector< pair<int, int> >(n));

		for (int i = 0; i < n; i++) {
			c[i][i].first = 0;
			cin >> c[i][i].second;
		}

		int j, temp, minima;
		for (int d = 0; d < n; d++) {
			for (int i = 0; i < n - d; i++) {
				j = d + i;
				minima = MAXIMA;
				for (int k = i; k < j; k++) {
					temp = c[i][k].first + c[k + 1][j].first + c[i][k].second + c[k + 1][j].second;
					if (temp < minima) {
						minima = temp;
						c[i][j].first = temp;
						c[i][j].second = c[i][k].second + c[k + 1][j].second;
					}
				}
			}
		}
		cout << c[0][n - 1].first << "\n";
	}

	return 0;
}