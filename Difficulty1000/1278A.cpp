/// Problem Name: Shuffle Hashing
/// Problem Link: https://codeforces.com/problemset/problem/1278/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 500;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int T, ca = 0;
  cin >> T;
  while (T--){
    string s, h;
    cin >> s >> h;
    int len_s = s.size();
    int len_h = h.size();
    if (len_s > len_h)cout << "NO" << '\n';
    else {
      int L = 0;
      int R = len_s-1;
      vector <int> s_cnt(26, 0);
      for (int i = 0;i < len_s;i++){
        s_cnt[s[i]-97]++;
      }
      bool ans = false;
      for ( ;R < len_h;R++, L++){
        vector <int> h_cnt(26, 0);
        for (int i = L;i <= R;i++){
          h_cnt[h[i]-97]++;
        }
        bool ok = true;
        for (int i = 0;i < 26;i++){
          if (s_cnt[i] != h_cnt[i]){
            ok = false;
            break;
          }
        }
        if (ok){
          ans = true;
          break;
        }
      }
      if (ans)cout << "YES" << '\n';
      else cout << "NO" << '\n';
    }
  }
  return 0;
}
