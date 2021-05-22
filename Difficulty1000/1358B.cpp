/// Problem Name: Maria Breaks the Self-isolation
/// Problem Link: https://codeforces.com/problemset/problem/1358/B

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

int main()
{
  FastIO();
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> v(n);
    //vector <int> a(n);
    for (int i = 0;i < n;i++){
      cin >> v[i];
      //a[i] = v[i];
    }
    //sort(a.begin(), a.end());
    sort(v.begin(), v.end());
    int ans = 1;
    for (int i = n-1;i >= 0;i--){
      if ((i+1) >= v[i]){
        ans += i+1;
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
