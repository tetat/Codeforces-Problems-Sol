/// Problem Name: Mahmoud and Ehab and the even-odd game
/// Problem Link: https://codeforces.com/problemset/problem/959/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Mahmoud\n");
    else
        printf("Ehab\n");
    return 0;
}
