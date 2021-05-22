/// Problem Name: Subset Mex
/// Problem Link: https://codeforces.com/problemset/problem/1406/A

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
    vector <int> a(102, 0);
    for (int i = 0;i < n;i++){
      int el;cin >> el;
      a[el]++;
    }
    int ans = 0;
    int cnt = 0;
    for (int i = 0;i < 102 && cnt < 2;i++){
      if (a[i]==0){
        if (cnt==0){
          ans += i+i;
          cnt += 2;
        }else if (cnt==1){
          ans += i;
          cnt++;
        }
      }else if (a[i]==1 && cnt==0){
        ans += i;
        cnt++;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
