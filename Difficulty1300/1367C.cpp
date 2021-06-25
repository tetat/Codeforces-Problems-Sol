/// Problem Name: Social Distance
/// Problem Link: https://codeforces.com/problemset/problem/1367/C

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
    string s;
    cin >> s;
    vector <int> mark(n, 0);
    int i = 0;
    while (i < n){
      if (s[i]==49 && mark[i]==0){
        int len = min(i+k, n-1);
        for (i++;i <= len;i++){
          mark[i] = 1;
        }
      }else i++;
    }
    i = n-1;
    while (i >= 0){
      if (s[i]==49 && mark[i]==0){
        int len = max(0, i-k);
        for ( ;i >= len;i--){
          mark[i] = 1;
        }
      }else i--;
    }
//    for (int j = 0;j < n;j++){
//      cout << mark[j] << ' ';
//    }cout << '\n';
    i = 0;
    int ans = 0;
    while (i < n){
      int zero = 0;
      while (i < n && mark[i]==0){
        zero++;
        i++;
      }
      while (i < n && mark[i])i++;
      ans += ceil(double(zero)/double(k+1));
    }
    cout << ans << '\n';
  }
  return 0;
}
