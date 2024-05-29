#include <iostream>
using namespace std;
#include <string>
#include <set>

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, c;
	cin >> n >> m;
	string sin, min;
	set<string> s;

	for (int i = 0; i < n; i++) {
		cin >> sin;
		s.insert(sin);
	}

	c = 0;
	for (int i = 0; i < m; i++) {
		cin >> min;

		if (s.find(min) != s.end())
			c++;
	}
	cout << c << '\n';

	return 0;
}