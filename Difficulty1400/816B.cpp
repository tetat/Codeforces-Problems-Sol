/// Problem Name: Karen and Coffee
/// Problem Link: https://codeforces.com/problemset/problem/816/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 2*1e5;

int ar[N+1];
int a[N+1];

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, k, q;
  int l, r;
  cin >> n >> k >> q;
  for (int i = 0;i < n;i++){
    cin >> l >> r;
    ar[l]++;
    if (r+1 <= N)ar[r+1]--;
  }
  int tot = 0;
  for (int i = 1;i <= N;i++){
    ar[i] += ar[i-1];
    if (ar[i] >= k)tot++;
    a[i] = tot;
  }
  while (q--){
    cin >> l >> r;
    cout << a[r]-a[l-1] << '\n';
  }
  return 0;
}
