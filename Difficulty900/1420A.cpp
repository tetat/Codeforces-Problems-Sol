/// Problem Name: Cubes Sorting
/// Problem Link: https://codeforces.com/problemset/problem/1420/A

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define mp make_pair
typedef long long Long;

const int N = 1e5;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0),cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0;i < n;i++){
      cin >> a[i];
    }
    string ans = "NO";
    for (int i = 1;i < n;i++){
      if (a[i-1]-a[i] <= 0){
        ans = "YES";
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
