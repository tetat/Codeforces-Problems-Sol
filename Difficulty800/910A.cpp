/// Problem Name: The Way to Home
/// Problem Link: https://codeforces.com/problemset/problem/910/A

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, d;
    string s;
    cin >> n >> d >> s;
    int jump = 0, i = 0;
    while (1){
        bool tf = true;int j = i+d;
        if (j>=n-1)return cout << ++jump << endl, 0;
        while (j>i){
            if (s[j]=='1'){
                jump++;i=j;
                tf = false;break;
            }j--;
        }
        if (tf)return puts("-1"), 0;
    }
}
