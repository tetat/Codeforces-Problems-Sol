/// Problem Name: Mishka and Contest
/// Problem Link: https://codeforces.com/problemset/problem/999/A

#include <iostream>

using namespace std;

int n, k, test, res, a[101];
int main()
{
    cin >> n >> k;
    for (int i = 0;i < n;i++)
        cin >> a[i], (test == 0 && a[i] <= k)? res++:test = 1;
    if (res < n){
        n--;
        while (a[n] <= k)
                res++, n--;
    }
    return cout << res << endl, 0;
}
