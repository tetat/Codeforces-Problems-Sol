/// Problem Name: Long Number
/// Problem Link: https://codeforces.com/problemset/problem/1157/B

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int a[11];
    for (int i = 0;i < 9;i++){
        cin >> a[i];
    }
    bool get_lost = false;
    for (int i = 0;i < n;i++){
        if ((s[i]-48) < a[(s[i]-48)-1]){
            while ((s[i]-48) <= a[(s[i]-48)-1]){
                s[i] = a[(s[i]-48)-1] + 48;
                i++;
            }
            get_lost = true;
        }
        if (get_lost)break;
    }
    cout << s << endl;
    return 0;
}
