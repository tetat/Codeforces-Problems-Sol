/// Problem Name: Help Vasilisa the Wise 2
/// Problem Link: https://codeforces.com/problemset/problem/143/A

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
  int r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
  vector <int> v;
  /// a+b = r1
  /// c+d = r2
  /// a+c = c1
  /// b+d = c2
  /// a+d = d1
  /// b+c = d2
  /// checking all possible answer
  for (int a = 1;a <= 9;a++){
    for (int b = 1;b <= 9;b++){
      if (a!=b){
        for (int c = 1;c <= 9;c++){
          if (a!=c && b!=c){
            for (int d = 1;d <= 9;d++){
              if (a!=d && b!=d && c!=d && a+b==r1 && c+d==r2 && a+c==c1 && b+d==c2 && a+d==d1 && b+c==d2){
                v.pb(a);
                v.pb(b);
                v.pb(c);
                v.pb(d);
                break;
              }
            }
            if (v.size())break;
          }
        }
        if (v.size())break;
      }
    }
    if (v.size())break;
  }
  if (v.size()){
    cout << v[0] << ' ' << v[1] << '\n';
    cout << v[2] << ' ' << v[3] << '\n';
  }else cout << "-1" << '\n';
  return 0;
}
