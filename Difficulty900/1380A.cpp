/// Problem Name: Three Indices
/// Problem Link: https://codeforces.com/problemset/problem/1380/A

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
    vector <int> v(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
    }
    vector <int> a;
    for (int i = 1;i < n-1;i++){
      if (v[i-1] < v[i] && v[i] > v[i+1]){
        a.pb(i);
        a.pb(i+1);
        a.pb(i+1+1);
        break;
      }
    }
    if (a.size()){
      cout << "YES" << '\n';
      cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';
    }else cout << "NO" << '\n';
  }
  return 0;
}
