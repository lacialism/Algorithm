#include <iostream>
#include <vector>
using namespace std;
// Brute Force
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;
	vector<int> card(n);

	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}

	int s1, s2, s3;
	int csum1, csum2, cmax = 0;
	for (s1 = 0; s1 < n - 2; s1++)
	{
		for (s2 = s1 + 1; s2 < n - 1; s2++)
		{
			csum1 = card[s1] + card[s2];
			for (s3 = s2 + 1; s3 < n; s3++)
			{
				csum2 = csum1 + card[s3];
				if (csum2 > m)
					continue;
				if (csum2 < cmax)
					continue;
				cmax = csum2;
	}	}	}
	cout << cmax;



	return 0;
}