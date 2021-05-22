/// Problem Name: Oath of the Night's Watch
/// Problem Link: https://codeforces.com/problemset/problem/768/A

#include <iostream>

using namespace std;

int main()
{
    int n, i, t1, t2, s = 0;
    int a[100001];
    cin >> n;
    for (i = 0;i < n;i++){
        cin >> a[i];
    }
    t1 = a[0];
    t2 = t1;
    for (i = 0;i < n;i++){
        if (a[i] < t1)t1 = a[i];
        if (a[i] > t2)t2 = a[i];
    }
    for (i = 0;i < n;i++){
        if (a[i] == t1 || a[i] == t2)s++;
    }
    cout << n - s << endl;
    return 0;
}
