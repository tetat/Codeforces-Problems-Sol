/// Problem Name: Little Elephant and Numbers
/// Problem Link: https://codeforces.com/problemset/problem/221/B

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
  int n;
  cin >> n;
  vector <int> v;
  for (int i = 1;i*i <= n;i++){
    if (n%i==0){
      if (i*i==n)v.pb(i);
      else {v.pb(i);v.pb(n/i);}
    }
  }
  vector <int> n_d(10, 0);
  while (n){
    n_d[n%10]++;
    n /= 10;
  }
//  for (int i = 0;i < v.size();i++){
//    cout << v[i] << ' ';
//  }cout << '\n';
  int ans = 0;
  for (int i = 0;i < v.size();i++){
    vector <int> d_d(10, 0);
    while (v[i]){
      d_d[v[i]%10]++;
      v[i] /= 10;
    }
    int ad = 0;
    for (int i = 0;i < 10;i++){
      if (n_d[i] && d_d[i])ad = 1;
    }
    ans += ad;
  }
  cout << ans << '\n';
  return 0;
}
