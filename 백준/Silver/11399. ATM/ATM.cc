#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> p(n);
	priority_queue<int, vector<int>, greater<int>> q;

	int in;
	for (int i = 0; i < n; i++) {
		cin >> in;
		q.push(in);
	}

	int sum = 0, wait = 0;
	for (int i = 0; i < n; i++) {
		sum += wait += q.top();
		q.pop();
	}
	cout << sum;

	return 0;
}