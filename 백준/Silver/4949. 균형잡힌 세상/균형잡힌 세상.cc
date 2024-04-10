#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> s;
	string str;

	do
	{
	NEXT:
		while (!s.empty())
			s.pop();
		getline(cin, str, '.');
		cin.ignore();
		if (str == "")
			return 0;
			

		while ( !str.empty() )
		{
			char a = str.front();
			switch (a)
			{
			case '[':
			case '(':
				s.push(a);
				break;


			case ']':
				if ( s.empty() || (s.top() != '[') )
				{
					cout << "no\n";
					goto NEXT;
				}
				s.pop();
				break;

			case ')':
				if ( s.empty() || (s.top() != '(') )
				{
					cout << "no\n";
					goto NEXT;
				}
				s.pop();
				break;


			default:
				break;
			}
			str.erase(str.begin());
		}

		if(s.empty())
			cout << "yes\n";
		else
			cout << "no\n";

	} while (true);

	return 0;
}