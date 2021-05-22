/// Problem Name: Three Pairwise Maximums
/// Problem Link: https://codeforces.com/problemset/problem/1385/A

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

const int N = 1e5;

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int x, y, z;
    cin >> x >> y >> z;
    map <int, int> m;
    m[x]++;
    m[y]++;
    m[z]++;
    vector <int> v;
    if (m.size()==1){
      v.pb(x);
      v.pb(y);
      v.pb(z);
    }else if (m.size()==2){
      int a = min(x, min(y, z));
      int b = a;
      int c = max(x, max(y, z));
      /// a b c
      /// a c b
      /// b a c
      /// b c a
      /// c a b
      /// c b a
      bool in = false;
      if (max(a, b)==x && max(a, c)==y && max(b, c)==z)in = true;
      else if (max(a, c)==x && max(a, b)==y && max(c, b)==z)in = true;
      else if (max(b, a)==x && max(b, c)==y && max(a, c)==z)in = true;
      else if (max(b, c)==x && max(b, a)==y && max(c, a)==z)in = true;
      else if (max(c, a)==x && max(c, b)==y && max(a, b)==z)in = true;
      else if (max(c, b)==x && max(c, a)==y && max(b, a)==z)in = true;
      if (in){
        v.pb(a);
        v.pb(b);
        v.pb(c);
      }
    }
    if (v.size()){
      cout << "YES" << '\n';
      cout << v[0] << ' ' << v[1] << ' ' << v[2] << '\n';
    }else cout << "NO" << '\n';
  }
  return 0;
}
