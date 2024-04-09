#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	arr = vector<int>(n);

	for (int j = 0; j < n; j++)
	{
		cin >> arr[j];
	}

	sort(arr.begin(), arr.end());

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << '\n';
	}
}