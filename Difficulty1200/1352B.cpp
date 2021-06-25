/// Problem Name: Same Parity Summands
/// Problem Link: https://codeforces.com/problemset/problem/1352/B

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
    int n, k;
    cin >> n >> k;
    string ans = "YES";
    vector <int> v;
    if (n%k==0){
      for (int i = 0;i < k;i++){
        v.pb(n/k);
      }
    }else if ((n-(k-1))%2==1 && (n-(k-1)) > 0){
      for (int i = 1;i < k;i++){
        v.pb(1);
      }
      v.pb(n-(k-1));
    }else if ((n-((k-1)*2))%2==0 && (n-((k-1)*2)) > 0){
      for (int i = 1;i < k;i++){
        v.pb(2);
      }
      v.pb(n-((k-1)*2));
    }else ans = "NO";
    cout << ans << '\n';
    if (ans=="YES"){
      for (int i = 0;i < v.size();i++){
        cout << v[i] << ' ';
      }cout << '\n';
    }
  }
  return 0;
}
