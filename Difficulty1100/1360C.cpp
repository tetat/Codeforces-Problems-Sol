/// Problem Name: Similar Pairs
/// Problem Link: https://codeforces.com/problemset/problem/1360/C

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
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    vector <int> even;
    vector <int> odd;
    for (int i = 0;i < n;i++){
      cin >> el;
      if (el%2)odd.pb(el);
      else even.pb(el);
    }
    n = even.size();
    int m = odd.size();
    if (n%2==0){
      cout << "YES" << '\n';
      continue;
    }
    string ans = "NO";
    for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
        if (abs(even[i]-odd[j]) == 1){
          ans = "YES";
          break;
        }
      }
      if (ans=="YES")break;
    }
    cout << ans << '\n';
  }
  return 0;
}
