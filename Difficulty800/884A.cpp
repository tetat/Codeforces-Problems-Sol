/// Problem Name: Book Reading
/// Problem Link: https://codeforces.com/problemset/problem/884/A

#include <iostream>

using namespace std;

int main()
{
    int n, t, a[101];
    int temp, i;
    cin >> n >> t;
    for (i = 0;i < n;i++)
        cin >> a[i];
    for (i = 0;i < n;i++){
        temp = 86400 - a[i];
        t -= temp;
        if (t <= 0)break;
    }
    cout << i+1 << endl;
    return 0;
}
