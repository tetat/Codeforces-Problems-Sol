/// Problem Name: Company Merging
/// Problem Link: https://codeforces.com/problemset/problem/1090/A

#include <iostream>
#include <cstdio>
using namespace std;
#define lol long long

int main()
{
    int n, m, mm1 = 0;
    lol res = 0;
    scanf("%d %d", &n, &m);
    int fm = m;
    while (m--){
        int num;scanf("%d", &num);
        if (mm1 < num)mm1 = num;
    }
    while (--n){
        scanf("%d", &m);
        int mm2 = 0;
        for (int i = 0;i < m;i++){
            int num;scanf("%d", &num);
            if (num > mm2)mm2 = num;
        }
        if (mm1 > mm2)res += ((lol)(mm1-mm2)*(lol)m);
        else res += ((lol)(mm2-mm1)*(lol)fm);

        if (mm1 < mm2)mm1 = mm2;
        fm += m;
    }
    printf("%I64d\n", res);
    return 0;
}
