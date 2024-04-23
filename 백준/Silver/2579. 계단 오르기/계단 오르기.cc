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

	vector<int> s(n+1);
	vector<int[2]> c(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> s[i];
	c[0][0] = 0;
	c[0][1] = 0;
	c[1][0] = s[1];
	c[1][1] = 0;

	for (int i = 2; i <= n; i++)
	{
		c[i][0] = max(c[i - 2][0], c[i - 2][1]) + s[i];
		c[i][1] = c[i - 1][0] + s[i];
	}
	if (c[n][0] > c[n][1])
		cout << c[n][0];
	else 
		cout << c[n][1];

	return 0;
}