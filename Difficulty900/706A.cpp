/// Problem Name: Beru-taxi
/// Problem Link: https://codeforces.com/problemset/problem/706/A

#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int t;
    double x, y, a, b, v, mi = 1001, test;
    scanf("%lf %lf %d", &x, &y, &t);
    while (t--){
        scanf("%lf %lf %lf", &a, &b, &v);
        test = sqrt((x-a)*(x-a) + (y-b)*(y-b)) / v;
        if (mi > test)
            mi = test;
    }
    printf("%.20lf\n", mi);
    return 0;
}
