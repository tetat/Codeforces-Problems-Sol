/// Problem Name: Local Extrema
/// Problem Link: https://codeforces.com/problemset/problem/888/A

#include <iostream>

using namespace std;

int main()
{
    int n, i, a[1001];
    cin >> n;
    for (i = 0;i < n;i++)
        cin >> a[i];
    int l_e = 0;
    for (i = 1;i < n-1;i++){
        if (a[i] < a[i-1] && a[i] < a[i+1] || a[i] > a[i-1] && a[i] > a[i+1])
            l_e++;
    }
    cout << l_e << endl;
    return 0;
}
