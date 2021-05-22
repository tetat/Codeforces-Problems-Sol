/// Problem Name: Fingerprints
/// Problem Link: https://codeforces.com/problemset/problem/994/A

#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a1[n], a2[m];
    for (int i = 0;i < n;i++)
        cin >> a1[i];
    for (int i = 0;i < m;i++)
        cin >> a2[i];
    int res[11], len = 0;
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            if (a1[i] == a2[j]){
                res[len] = a1[i];len++;
            }
        }
    }
    for (int i = 0;i < len;i++){
        cout << res[i];
        if (i != n-1)cout << " ";
    }
    cout << endl;
    return 0;
}
