/// Problem Name: Two Cakes
/// Problem Link: https://codeforces.com/problemset/problem/1130/B

#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <utility>
#include <queue>
using namespace std;
typedef pair <int, int> pi;

int main()
{
    int n;scanf("%d", &n);
    int len = n+n;
    priority_queue <pi, vector<pi>, greater<pi> > pq;
    for (int i = 0;i < len;i++){
        int in;scanf("%d", &in);
        pq.push(make_pair(in, i));
    }
    int s = 0, d = 0;
    long long res = 0;
    bool check = true;
    while (!pq.empty()){
        pi el = pq.top();
        pq.pop();
        if (check){
            res += abs(s - el.second);
            s = el.second;
            check = false;
        }
        else {
            res += abs(d - el.second);
            d = el.second;
            check = true;
        }
    }
    printf("%I64d\n", res);
    return 0;
}
