/// Problem Name: Exam in BerSU (easy version)
/// Problem Link: https://codeforces.com/problemset/problem/1185/C1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n+1], sum[n+1];
    int s = 0, j = -1;
    for (int i = 0;i < n;i++){
        scanf("%d", &a[i]);
        s += a[i];
        sum[i] = s;
        if (s <= m)j++;
    }
    priority_queue <int> q;
    vector <int> r;
    for (int i = 0;i <= j;i++){
        r.push_back(0);
        q.push(a[i]);
    }
    j++;
    for ( ;j < n;j++){
        vector <int> v;
        int tmp = sum[j];
        int in = 0;
        while (m < tmp && !q.empty()){
            int cut = q.top();
            v.push_back(cut);
            q.pop();
            in++;
            tmp -= cut;
        }
        r.push_back(in);
        for (int i = 0;i < in;i++){
            q.push(v[i]);
        }
        q.push(a[j]);
    }
    for (int i = 0;i < n;i++){
        printf("%d", r[i]);
        if (i < n-1)printf(" ");
    }
    return 0;
}
