#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string in;
    while(true) {
        
        cin >> in;
        if (in == "0")
            break;

        int i;
        for (i = 0; i < in.size() / 2; i++)
        {
            if (in[i] != in[in.size() - i - 1])
            {
                i = -1;
                break;
            }
        }
        if(i == -1)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }

    return 0;
}