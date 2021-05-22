/// Problem Name: Digits Sequence Dividing
/// Problem Link: https://codeforces.com/problemset/problem/1107/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int q;scanf("%d", &q);
    while (q--){
        int n, t1 = 0, t2 = 0;scanf("%d", &n);
        string s;cin >> s;
        //string s1, s2;cin >> s2;s1 = s2;
        //s1.erase(s1.begin()+1, s1.end());
        //s2.erase(s2.begin()+0);//cout << s1 << " " << s2 << endl;
        //for (int i = 0;i < s1.size();i++)t1 += (s1[i]+48);
        //for (int i = 0;i < s2.size();i++)t2 += (s2[i]+48);
        if (n==2 && s[0]>=s[1])puts("NO");
        else {
            puts("YES");puts("2");
            cout << s[0] << " ";
            s.erase(s.begin()+0);
            cout << s << endl;
            //cout << s1 << " " << s2 << endl;
        }//else puts("NO");
    }
    return 0;
}
