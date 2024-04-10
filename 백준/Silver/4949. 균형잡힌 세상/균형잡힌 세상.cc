#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;

	do
	{
	NEXT:
		stack<char> s;

		getline(cin, str, '.');
		cin.ignore();

		if (str == "")
			return 0;
			
		for (char a : str)
		{
			if (a == '[' || a == '(')
				s.push(a);
			else if (a == ']')
			{
				if (s.empty() || (s.top() != '['))
				{
					cout << "no\n";
					goto NEXT;
				}
				s.pop();
			}
			else if (a == ')')
			{
				if (s.empty() || (s.top() != '('))
				{
					cout << "no\n";
					goto NEXT;
				}
				s.pop();
			}
		}

		if(s.empty())
			cout << "yes\n";
		else
			cout << "no\n";

	} while (true);

	return 0;
}