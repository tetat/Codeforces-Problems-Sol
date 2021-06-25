/// Problem Name: Knights of a Polygonal Table
/// Problem Link: https://codeforces.com/problemset/problem/994/B

#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct arena {
    int power;
    int coin;
    int po;
    long long res;
};

bool cmppo(arena a, arena b)
{
    return a.po < b.po;
}

bool cmp(arena a, arena b)
{
    return a.power < b.power;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    arena v[n+1];
    for (int i = 0;i < n;i++){
        int in;scanf("%d", &in);
        v[i].power = in;
        v[i].po = i;
        v[i].res = 0;
    }
    for (int i = 0;i < n;i++){
        scanf("%d", &v[i].coin);
    }
    sort(v, v+n, cmp);
    priority_queue <int> Q;
    for (int i = 0;i < n;i++){
        int limit = k;
        vector <int> tmp;
        while (!Q.empty() && limit--){
            int in = Q.top();Q.pop();
            v[i].res += in;
            tmp.push_back(in);
        }
        int len = tmp.size();
        for (int j = 0;j < len;j++){
            Q.push(tmp[j]);
        }
        v[i].res += v[i].coin;
        Q.push(v[i].coin);
    }
    sort(v, v+n, cmppo);
    for (int i = 0;i < n;i++){
        printf("%I64d ", v[i].res);
    }
    return puts(""), 0;
}
