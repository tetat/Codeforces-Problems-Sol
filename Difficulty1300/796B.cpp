/// Problem Name: Find The Bone
/// Problem Link: https://codeforces.com/problemset/problem/796/B

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, m, k, el;
  cin >> n >> m >> k;
  vector <int> hole(n+1, 0);
  for (int i = 0;i < m;i++){
    cin >> el;
    hole[el]++;
  }
  int now = -1;
  int cur = 1;
  if (hole[cur])now = cur;
  for (int i = 0;i < k;i++){
    int u, v;
    cin >> u >> v;
    if (u == cur){
      cur = v;
      if (now == -1 && hole[cur]){
        now = cur;
      }
    }
    else if (v == cur){
      cur = u;
      if (now == -1 && hole[cur]){
        now = cur;
      }
    }
  }
  //cout << now << '\n';
  if (now == -1)now = cur;
  cout << now << '\n';
  return 0;
}
