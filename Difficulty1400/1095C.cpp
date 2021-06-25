/// Problem Name: Powers Of Two
/// Problem Link: https://codeforces.com/problemset/problem/1095/C

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

int lim = 1e9;

vector <int> p;

void make(){
  int in = 1;
  while (in <= lim){
    p.pb(in);
    in += in;
  }
  reverse(p.begin(), p.end());
}

int main()
{
  FastIO();
  int tc, ca = 0;
  make();
  int n, k;
  cin >> n >> k;
  vector <int> v;
  int i = 0;
  int len = p.size();
  while (v.size() <= k && n){
    while (i < len && p[i] > n)i++;
    v.pb(p[i]);
    n -= p[i];
  }
  if (v.size()==0 || v.size() > k)cout << "NO" << '\n';
  else {
    sort(v.begin(), v.end(), greater<int>());
    i = 0;
    len = v.size();
    while (i < len && len < k){
      if (v[i] > 1){
        v[i] /= 2;
        v.pb(v[i]);
        len++;
      }else i++;
    }
    if (v.size() != k)cout << "NO" << '\n';
    else {
      cout << "YES" << '\n';
      for (int i = 0;i < k;i++){
        cout << v[i] << ' ';
      }cout << '\n';
    }
  }
  return 0;
}
