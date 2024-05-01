#include <iostream>
using namespace std;
#include <vector>

void mergeSort(vector<int>& c, int low, int high);
void merge(vector<int>& c, int low, int high);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, in;
	vector<int> c;

	cin >> n;
	c = vector<int>(n);
	for (int i = 0; i < n; i++)
		cin >> c[i];
	mergeSort(c, 0, n - 1);

	cin >> m;
	for (int i = 0; i < m; i++) {
		int low, high, mid;
		low = 0;
		high = n - 1;

		cin >> in;
		while (low <= high) {
			mid = (low + high) / 2;
			if (c[mid] == in) {
				cout << "1 ";
				break;
			}
			else if (c[mid] > in)
				high = mid - 1;
			else
				low = mid + 1;
		}
		if (low > high)
			cout << "0 ";
	}

	return 0;
}

void mergeSort(vector<int>& c, int low, int high)
{
	if (low + 1 < high) {
		int mid = (low + high) / 2;
		mergeSort(c, low, mid);
		mergeSort(c, mid + 1, high);
		merge(c, low, high);
	}
	else if (low + 1 == high) {
		if (c[low] > c[high]) {
			int temp = c[low];
			c[low] = c[high];
			c[high] = temp;
	}	}
}

void merge(vector<int>& c, int low, int high)
{
	vector<int> w(high - low + 1);
	int mid = (low + high) / 2;
	int p1 = low, p2 = mid+1;

	int p = 0;
	while (p1 <= mid && p2 <= high) {
		if (c[p1] < c[p2])
			w[p++] = c[p1++];
		else
			w[p++] = c[p2++];
	}

	while (p1 <= mid)
		w[p++] = c[p1++];
	while (p2 <= high)
		w[p++] = c[p2++];

	for (p = low; p <= high; p++)
		c[p] = w[p-low];
}