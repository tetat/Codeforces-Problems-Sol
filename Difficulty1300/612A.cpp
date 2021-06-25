/// Problem Name: The Text Splitting
/// Problem Link: https://codeforces.com/problemset/problem/612/A

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
  int n, p, q;
  cin >> n >> p >> q;
  string s;
  cin >> s;
  vector <int> v;
  bool ok = false;
  if (n%p==0){
    ok = true;
    for (int i = 0;i < n/p;i++){
      v.pb(p);
    }
  }
  if (ok==false && n%q==0){
    ok = true;
    for (int i = 0;i < n/q;i++){
      v.pb(q);
    }
  }
  if (ok==false){
    int m = n;
    vector <int> tm;
    while (m > 0){
      m -= p;
      tm.pb(p);
      if (m > 0 && m%q==0){
        for (int i = 0;i < m/q;i++){
          tm.pb(q);
        }
        ok = true;
        //cout << "p q" << '\n';
        v = tm;
        m = 0;
      }
    }
  }
  if (ok==false){
    int m = n;
    vector <int> tm;
    while (m > 0){
      m -= q;
      tm.pb(q);
      //cout << m << '\n';
      if (m > 0 && m%p==0){
        for (int i = 0;i < m/p;i++){
          tm.pb(p);
        }
        ok = true;
        v = tm;
        m = 0;
        //cout << "q p" << '\n';
      }
    }
  }
//  for (int i = 0;i < v.size();i++){
//    cout << v[i] << ' ';
//  }cout << '\n';
  if (ok){
    cout << v.size() << '\n';
    int len = 0;
    for (int i = 0, j = 0;i < v.size();i++){
      string ans;
      len += v[i];
      for ( ;j < len;j++){
        ans += s[j];
      }
      cout << ans << '\n';
    }
  }else cout << "-1" << '\n';
  return 0;
}
