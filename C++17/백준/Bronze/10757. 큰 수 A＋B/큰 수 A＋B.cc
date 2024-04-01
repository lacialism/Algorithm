#include <iostream>
using namespace std;

#define STDDIGIT 19

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string strIn[2];
    cin >> strIn[0] >> strIn[1];

    bool up = false;
    string res = "";
    while(!strIn[0].empty() || !strIn[1].empty()) {

        int subaddition = 0;    // = (int)(strIn[0].back() - '0') + (int)(strIn[1].back() - '0');

        for(int i = 0; i < 2; i++) {
            if(!strIn[i].empty()) {
                subaddition += strIn[i].back() - '0';
                strIn[i].pop_back();
        }   }

        if(up) {
            subaddition++;
            up=false;
        }

        if (subaddition >= 10) {
            subaddition %= 10;
            up = true;
        }

        res = to_string(subaddition) + res;
    }

    if(up)
        cout << "1";
    cout << res;

    return 0;
}