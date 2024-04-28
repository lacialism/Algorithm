#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		stack<char> s;
		string str;
		bool tf = false;
		cin >> str;

		for (int k = 0; k < str.size(); k++)
		{
			if (str[k] == '(') {
				s.push('(');
			}
			else if (str[k] == ')') {
				if(s.empty() || s.top()  != '(') {
					tf = true;
					cout << "NO\n";
					break;
				}
				s.pop();
			}
		}
		if (tf)
			continue;
		if (s.empty())
			cout << "YES\n";
		else
			cout << "NO\n";
	}	
	
	return 0;
}