#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

typedef pair<int, int> meeting;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector< pair<int, int> > data(n);

    for(int i = 0; i < n; i++)
    {
        cin >> data[i].second;
        cin >> data[i].first;
    }

    sort(data.begin(), data.end());

    int count = 0;
    int end = -1;
    for(int i = 0; i < n; i++)
    {
        if(data[i].second >= end)
        {
            end = data[i].first;
            count++;
        }
    }

    cout << count;

    return 0;
}