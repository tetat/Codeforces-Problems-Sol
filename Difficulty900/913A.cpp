/// Problem Name: Modular Exponentiation
/// Problem Link: https://codeforces.com/problemset/problem/913/A

#include <cstdio>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", (n >= 27) ? m : m % (1 << n));
    return 0;
}
