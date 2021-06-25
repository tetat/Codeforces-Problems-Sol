/// Problem Name: Equal Rectangles
/// Problem Link: https://codeforces.com/problemset/problem/1203/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
  int n, el;
  vector <int> st, ar;
  cin >> n;
  for (int i = 0;i < 4*n;i++){
    cin >> el;
    st.pb(el);
  }
  sort(st.begin(), st.end());
  int i = 0;
  int j = 4*n-1;
  string ans = "YES";
  for (int k = 0;k < n;k++){
    if (st[i]==st[i+1] && st[j]==st[j-1]){
      ar.pb(st[i]*st[j]);
    }else {ans = "NO";break;}
    i += 2;
    j -= 2;
  }
  if (ans=="YES"){
    sort(ar.begin(), ar.end());
    if (ar[0]!=ar[n-1])ans = "NO";
  }
  cout << ans << '\n';
  }
  return 0;
}
