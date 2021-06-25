/// Problem Name: Vasya And Password
/// Problem Link: https://codeforces.com/problemset/problem/1051/A

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--){
        string s;int uc, lc, di;
        uc = lc = di = 0;
        cin >> s;
        int len = s.length();
        for (int i = 0;i < len;i++){
            if (s[i] >= 65 && s[i] <= 90)uc++;
            else if (s[i] >= 97 && s[i] <= 122)lc++;
            else di++;
        }
        if (!uc){
            if (lc > di){
                for (int i = 0;i < len;i++){
                    if (s[i] >= 97 && s[i] <= 122){
                        s[i] = 65;break;
                    }
                }
            }
            else {
                for (int i = 0;i < len;i++){
                    if (s[i] >= 48 && s[i] <= 57){
                        s[i] = 65;break;
                    }
                }
            }
        }
        if (!lc){
            if (uc > di){
                for (int i = 0;i < len;i++){
                    if (s[i] >= 65 && s[i] <= 90){
                        s[i] = 97;break;
                    }
                }
            }
            else {
                for (int i = 0;i < len;i++){
                    if (s[i] >= 48 && s[i] <= 57){
                        s[i] = 97;break;
                    }
                }
            }
        }
        if (!di){
            if (lc > uc){
                for (int i = 0;i < len;i++){
                    if (s[i] >= 97 && s[i] <= 122){
                        s[i] = 48;break;
                    }
                }
            }
            else {
                for (int i = 0;i < len;i++){
                    if (s[i] >= 65 && s[i] <= 90){
                        s[i] = 48;break;
                    }
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
