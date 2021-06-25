/// Problem Name: Road Construction
/// Problem Link: https://codeforces.com/problemset/problem/330/B

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
  int n, m;
  cin >> n >> m;
//  if (n==1){
//    cout << 1 << '\n' << 1 << '\n';
//    return 0;
//  }
  vector <int> mark(n+1, 0);
  int a, b;
  for (int i = 0;i < m;i++){
    cin >> a >> b;
    mark[a]++;
    mark[b]++;
  }
  int root = 0;
  for (int i = 1;i <= n;i++){
    if (mark[i]==0){
      root = i;
      break;
    }
  }
  cout << n-1 << '\n';
  for (int i = 1;i <= n;i++){
    if (root != i){
      cout << root << ' ' << i << '\n';
    }
  }
  return 0;
}
