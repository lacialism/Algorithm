#include <iostream>
using namespace std;

#define MAX 1000

int main()
{
	bool a[MAX + 1] = { 0 };
	int n, ni, count;

	for (int i = 2; i <= MAX; i++) { a[i] = true; }

	for (int k = 2; k <= MAX / 2; k++)
		if (a[k])
			for (int j = 2; k * j <= 1000; j++)
				a[k * j] = false;

	cin >> n;
	count = 0;
	for (int i = 0; i < n; i++) {
		cin >> ni;
		if (a[ni])
			count++;
	}
	cout << count;

	return 0;
}