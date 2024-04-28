#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, arr[1000];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int j = 0; j < n-1; j++)
	{
		for (int k = j+1; k < n; k++){
			if (arr[j] > arr[k])
			{
				int temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}

	for (int j = 0; j < n; j++)
		cout << arr[j] << "\n";





	return 0;
}