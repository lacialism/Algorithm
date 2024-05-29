#include <iostream>
using namespace std;
#include <list>

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, cmd, para;
	list<int> deck;

	cin >> t;
	for (int i = 0; i < t; i++) {

		cin >> cmd;
		switch (cmd) {
		case 1:
			cin >> para;
			deck.push_front(para);
			break;
		case 2:
			cin >> para;
			deck.push_back(para);
			break;
		case 3:
			if (deck.empty()) {
				cout << -1 << "\n";
				break;
			}
			cout << deck.front() << "\n";
			deck.pop_front();
			break;
		case 4:
			if (deck.empty()) {
				cout << -1 << "\n";
				break;
			}
			cout << deck.back() << "\n";
			deck.pop_back();
			break;
		case 5:
			cout << deck.size() << "\n";
			break;
		case 6:
			cout << deck.empty() << "\n";
			break;
		case 7:
			if (deck.empty()) {
				cout << -1 << "\n";
				break;
			}
			cout << deck.front() << "\n";
			break;
		case 8:
			if (deck.empty()) {
				cout << -1 << "\n";
				break;
			}
			cout << deck.back() << "\n";
			break;
		}

	}

	return 0;
}