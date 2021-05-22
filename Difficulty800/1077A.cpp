/// Problem Name: Frog Jumping
/// Problem Link: https://codeforces.com/problemset/problem/1077/A

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long int

int main()
{
    int t;scanf("%d", &t);
    while (t--){
        lol a, b, k;
        cin >> a >> b >> k;
        if (k==1){cout << a << endl;continue;}
        lol l, r;
        if (!(k%2))l = r = k/2;
        else {
            l = k/2+1;
            r = k/2;
        }
        lol res = (a*l)-(b*r);
        cout << res << endl;
    }
    return 0;
}
