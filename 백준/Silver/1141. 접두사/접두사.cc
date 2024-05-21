#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool compare_by_str_len(string s1, string s2) {
	return s1.size() > s2.size();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string str[50];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> str[i];

	sort(str, str + n, compare_by_str_len);

	int size = 1, idx[50];
	idx[0] = 0;
	for (int i = 1; i < n; i++) {
		for (int k = size - 1; k >= 0; k--) {
			if (str[idx[k]].find(str[i]) == 0) {
				break;
			}
			else if (k == 0)
				idx[size++] = i;
		}
	}

	cout << size;



	return 0;
}