/// Problem Name: Lazyland
/// Problem Link: https://codeforces.com/problemset/problem/1089/L

#include <iostream>
#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
#define lol long long
int a[100002];
int main()
{
    int n, k, num;
    scanf("%d %d", &n, &k);
    vector <pair <int, int> > v(n);
    //int n1[n+1], n2[n+1];
    for (int i = 0;i < n;i++){
        scanf("%d", &num);
        a[num]++;
        v[i].second = num;
    }
    for (int i = 0;i < n;i++){
        scanf("%d", &num);
        v[i].first = num;
    }

    int cnt = 0;
    for (int i = 1;i <= k;i++)if (!a[i])cnt++;
    if (!cnt)return puts("0"), 0;

    //for (int i = 0;i < n;i++)
        //v.push_back(make_pair(n2[i], n1[i]));

    sort(v.begin(), v.end());

    lol res = 0;
    for (int i = 0;i < n;i++){
        if (a[v[i].second] > 1){
            res += v[i].first;
            a[v[i].second]--;
            cnt--;
        }
        if (!cnt)break;
    }

    printf("%I64d\n", res);
    return 0;
}
