/// Problem Name: Lost Array
/// Problem Link: https://codeforces.com/problemset/problem/1043/B

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

const int N = 1e6;

int main()
{
  faster();
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  vector <int> d;
  d.pb(v[0]);
  for (int i = 1;i < n;i++){
    d.pb(v[i]-v[i-1]);
  }
  vector <int> a;
  for (int i = 1;i <= n;i++){
    bool ok = true;
    int sum = 0;
    for (int j = 0;j < n;j++){
      sum += d[j%i];
      if (sum != v[j]){
        ok = false;
        break;
      }
    }
    if (ok)a.pb(i);
  }
  int len = a.size();
  cout << len << '\n';
  for (int i = 0;i < len;i++){
    cout << a[i] << ' ';
  }cout << '\n';
  return 0;
}
