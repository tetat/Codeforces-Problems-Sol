/// Problem Name: Shashlik Cooking
/// Problem Link: https://codeforces.com/problemset/problem/1040/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  int n, k;
  cin >> n >> k;
  int st = k+1;
  int m = n%(k+k+1);
  if (m && m < k+1){
    st -= (k+1)-m;
  }
  vector <int> v;
  while (st <= n){
    v.pb(st);
    st += (k+k+1);
  }
  int len = v.size();
  cout << len << '\n';
  for (int i = 0;i < len;i++){
    cout << v[i] << ' ';
  }cout << '\n';
  return 0;
}
