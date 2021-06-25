/// Problem Name: K-Dominant Character
/// Problem Link: https://codeforces.com/problemset/problem/888/C

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
  string s;
  cin >> s;
  int n = s.size();
  vector <vector <int> > m(n, vector <int> (26, 0));
  for (int i = 0;i < n;i++){
    m[i][s[i]-97]++;
    if (i){
      for (int j = 0;j < 26;j++){
        m[i][j] += m[i-1][j];
      }
    }
  }
  int L = 1;
  int R = (n/2)+1;
  int ans = R;
  while (L <= R){
    int mid = L + (R-L)/2;
    bool ok = false;
    for (int i = 0;i < 26;i++){
      bool ok1 = true;
      int I = 0;
      int J = mid-1;
      while (J < n){
        if (I){
          if (m[J][i]-m[I-1][i]==0){
            ok1 = false;
            break;
          }
        }else {
          if (m[J][i]==0){
            ok1 = false;
            break;
          }
        }
        J++;
        I++;
      }
      if (ok1){
        ok = true;
        break;
      }
    }
    if (ok){
      ans = mid;
      R = mid-1;
    }else L = mid+1;
  }
  cout << ans << '\n';
  return 0;
}
