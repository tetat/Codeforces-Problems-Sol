/// Problem Name: Relatively Prime Pairs
/// Problem Link: https://codeforces.com/problemset/problem/1051/B

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long int
#define space " "
int main()
{
    lol l, r;
    cin >> l >> r;
    lol t = ((r-l)+1)/2;
    puts("YES");
    while (t--){
        cout << r << space << r-1 << endl;
        r-= 2;
    }
    return 0;
}
