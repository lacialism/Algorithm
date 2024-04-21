#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>> w(n/3 + 1, vector<int>(n/5 + 1));
	for (int i = 0; i <= n / 5; i++)
	{
		if (n == (w[0][i] = 5 * i))
		{
			cout << i;
			return 0;
		}
	}

	int k = 0, cost;
	for (int j = 1; j <= (n / 3); j++)
	{
		for (int i = 0; i <= (n / 5 - k); i++)
		{
			cost = w[j - 1][i] + 3;
			if (cost == n)
			{
				cout << i + j;
				return 0;
			}
			else if (cost > n)
				k++;
			else
				w[j][i] = cost;
		}
	}

	cout << -1;
	return 0;
}