/// Problem Name: Servers
/// Problem Link: https://codeforces.com/problemset/problem/747/C

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

const int len = N+1000;
vector <int> sc[len+1];
vector <int> mark(101, 0);

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, q, el;
  cin >> n >> q;
  priority_queue <int, vector <int>, greater<int> > pq;
  while (q--){
    int t, k, d;
    cin >> t >> k >> d;
    if (!pq.empty()){
      while (!pq.empty() && int(pq.top()) <= t){
        for (int i = 0;i < sc[pq.top()].size();i++){
          mark[sc[pq.top()][i]] = 0;
        }
        pq.pop();
      }
    }
//    for (int i = 1;i <= n;i++){
//      cout << mark[i] << ' ';
//    }cout << '\n';
    int sum = 0;
    vector <int> tm;
    for (int i = 1, j = 0;i <= n && j < k;i++){
      if (mark[i]==0){
        sum += i;
        tm.pb(i);
        j++;
      }
    }
    if (tm.size()==k){
      cout << sum << '\n';
      for (int i = 0;i < tm.size();i++){
        sc[t+d].pb(tm[i]);
      }
      for (int i = 0;i < tm.size();i++){
        mark[tm[i]] = 1;
      }
      pq.push(t+d);
    }else cout << "-1" << '\n';
  }
  return 0;
}
