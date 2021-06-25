/// Problem Name: Kind Anton
/// Problem Link: https://codeforces.com/problemset/problem/1333/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> a;
    vector <int> b;
    int mone = 0;
    int zero = 0;
    int pone = 0;
    for (int i = 0;i < n;i++){
      cin >> el;
      a.pb(el);
    }
    for (int i = 0;i < n;i++){
      cin >> el;
      b.pb(el);
    }
    string ans = "yes";
    for (int i = 0;i < n;i++){
      if (a[i] < b[i]){
        if (pone==0){
          ans = "no";
          break;
        }
      }
      else if (a[i] > b[i]){
        if (mone==0){
          ans = "no";
          break;
        }
      }
      if (a[i]==-1)mone++;
      if (a[i]==0)zero++;
      if (a[i]==1)pone++;
    }
    cout << ans << '\n';
  }
  return 0;
}
