/// Problem Name: Strings Equalization
/// Problem Link: https://codeforces.com/problemset/problem/1223/B

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
#define stp setprecision
#define set_pnt(pnt) cout<<fixed<<stp(pnt);
const double pi = acos(-1.0);

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    string s, t;
    cin >> s >> t;
    int n = s.size();
    vector <int> ms(26, 0);
    vector <int> mt(26, 0);
    for (int i = 0;i < n;i++){
      ms[s[i]-97]++;
      mt[t[i]-97]++;
    }
    bool ans = false;
    for (int i = 0;i < 26;i++){
      if (ms[i] && mt[i]){
        ans = true;
        break;
      }
    }
    if (ans)cout << "yes" << '\n';
    else cout << "no" << '\n';
  }
  return 0;
}
