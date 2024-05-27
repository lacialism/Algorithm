#include <iostream>
using namespace std;
#include <vector>
#include <string>

#define MAX 1500000
bool notPrime[MAX + 1] = { 1, 1, 0 };

bool isRom(string n)
{
	for (int s = 0; s < n.size() / 2; s++)
		if (n[s] != n[n.size() - 1 - s])
			return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 2; i < (MAX+1) / 2; i++)
		if (!notPrime[i])
			for (int k = 2; k < (MAX+1) / i; k++)
				notPrime[i * k] = true;

	for (int i = n; i < (MAX+1); i++) {
		if (!notPrime[i])
			if (isRom(to_string(i)))
			{
				cout << i;
				return 0;
			}
	}
	return 0;
}