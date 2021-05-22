/// Problem Name: Partition
/// Problem Link: https://codeforces.com/problemset/problem/946/A

#include <iostream>

using namespace std;

int main()
{
    int n, ara[101], b = 0, c = 0;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> ara[i];
        if (ara[i] < 0)
            c += ara[i];
        else
            b += ara[i];
    }
    cout << b - c << endl;
    return 0;
}
