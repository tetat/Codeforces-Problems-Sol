/// Problem Name: Books Exchange (hard version)
/// Problem Link: https://codeforces.com/problemset/problem/1249/B2

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void faster(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 2*1e5;

int ar[N+1];
int cnt;

void dfs(int cur, int id, int d[]){
  if (cur==id){
    d[id] = cnt;
    return;
  }
  cnt++;
  dfs(cur, ar[id], d);
  d[id] = cnt;
}

int main()
{
  faster();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    for (int i = 0;i < n;i++){
      cin >> ar[i];
      ar[i]--;
    }
    int d[n] = {0};
    for (int i = 0;i < n;i++){
      if (d[i]==0){
        cnt = 1;
        dfs(i, ar[i], d);
      }
    }
    for (int i = 0;i < n;i++){
      cout << d[i];
      if (i != n-1)cout << ' ';
    }cout << '\n';
  }
  return 0;
}
