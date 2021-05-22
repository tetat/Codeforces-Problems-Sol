/// Problem Name: Supermarket
/// Problem Link: https://codeforces.com/problemset/problem/919/A

#include <iostream>
#include <cstdio>

using namespace std;

double mi = 101;
int main()
{
    int n, m, a, b;
    cin >> n >> m;
    while (n--){
        cin >> a >> b;
        if (mi > (double)a/(double)b)mi=(double)a/(double)b;
    }
    printf("%.8lf\n", mi*double(m));
    return 0;
}
