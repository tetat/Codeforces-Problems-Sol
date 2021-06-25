/// Problem Name: Grid game
/// Problem Link: https://codeforces.com/contest/1104/problem/C

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    string s;cin >> s;
    int one = 1, two = 1, len = s.size();
    for (int i = 0;i < len;i++){
        if (s[i]==49){
            printf("1 %d\n", one);one+=2;
            if (one > 3)one = 1;
        }
        else {
            printf("2 %d\n", two++);
            if (two > 4)two = 1;
        }
    }
    return 0;
}
