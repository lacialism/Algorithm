#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n;
	vector<int> src(n);
	for (int i = 0; i < n; i++)
		cin >> src[i];

	cin >> m;
	vector<int> tar(m);
	for (int i = 0; i < m; i++)
		cin >> tar[i];

	sort(src.begin(), src.end());

	for (int i = 0; i < m; i++)
	{
		int low = 0, high = n;
		int mid;
		while (low < high)
		{
			mid = (low + high) / 2;
			if (src[mid] > tar[i])
				high = mid;
			else if (src[mid] < tar[i])
				low = mid + 1;
			else
				break;
		}
		cout << (src[mid] == tar[i]) << "\n";
	}



	return 0;
}