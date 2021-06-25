/// Problem Name: String Transformation
/// Problem Link: https://codeforces.com/problemset/problem/946/C

#include <iostream>

using namespace std;

int sub_s(char s[])
{
    int i = 0, test = 97;
    while (s[i] && test <= 122){
        if (s[i] <= test)
            s[i] = test++;
        i++;
    }
    return test - 123;
}
int main()
{
    char s[100001];
    cin >> s;
    if (sub_s(s) == 0)
        cout << s << endl;
    else
        cout << -1 << endl;
    return 0;
}
