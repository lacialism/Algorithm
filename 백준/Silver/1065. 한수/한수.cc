#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, c = 0;
	cin >> n;
	for (int i = 1; i < n + 1; i++)
	{
		bool tf = true;
		int cn = i, n0, d;
		
		n0 = cn % 10;
		cn /= 10;
		d = cn % 10 - n0;

		while (cn > 0)
		{
			if (n0 + d != cn % 10)
			{
				tf = false;
				break;
			}
			n0 = cn % 10;
			cn /= 10;
		}
		if (tf)
			c++;
	}
	cout << c;

	return 0;
}