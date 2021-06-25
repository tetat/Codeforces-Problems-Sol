/// Problem Name: GCD Compression
/// Problem Link: https://codeforces.com/problemset/problem/1370/B

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
    int n;
    cin >> n;
    vector <int> v(n+n);
    for (int i = 0;i < n+n;i++){
      cin >> v[i];
    }
    vector <pair <int, int> > p;
    for (int i = 0;i < n+n;i++){
      if (v[i] != -1){
        for (int j = 0;j < n+n;j++){
          if (i != j && v[j] != -1){
            if ((v[i]+v[j])%2==0){
              p.pb(mp(i+1, j+1));
              v[i] = -1;
              v[j] = -1;
              break;
            }
          }
        }
      }
      if (p.size() == n-1)break;
    }
    for (int i = 0;i < p.size();i++){
      cout << p[i].first << ' ' << p[i].second << '\n';
    }
  }
  return 0;
}
