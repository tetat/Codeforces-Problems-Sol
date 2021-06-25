/// Problem Name: Brutality
/// Problem Link: https://codeforces.com/problemset/problem/1107/C

#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0;i < n;i++){
        scanf("%d", a+i);
    }
    string s;
    cin >> s;s+='A';
    priority_queue <int> pq;
    long long res = 0;
    for (int i = 0;i < n;i++){
        if (s[i]==s[i+1])pq.push(a[i]);
        else {
            int tmp = k;
            pq.push(a[i]);
            while (tmp-- && !pq.empty()){
                res += pq.top();
                pq.pop();
            }
            while (!pq.empty())pq.pop();
        }
    }
    printf("%I64d\n", res);
    return 0;
}
