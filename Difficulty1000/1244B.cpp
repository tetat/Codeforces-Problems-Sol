/// Problem Name: Rooms and Staircases
/// Problem Link: https://codeforces.com/problemset/problem/1244/B

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

const int N = 2e5;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    string s;
    cin >> n >> s;
    int mx1 = n+n;
    int mx2 = n+n;
    int cnt = 0;
    for (int i = 0;i < n;i++){
      if (s[i] == '1'){
        mx1 -= i+i;
        cnt++;
        i = n;
      }
    }
    for (int i = n-1;i >= 0;i--){
      if (s[i] == '1'){
        i = n-(i+1);
        mx2 -= i+i;
        cnt++;
        i = -1;
      }
    }
    if (cnt==0){
      mx1 = n;
      mx2 = n;
    }
    cout << max(mx1, mx2) << '\n';
  }
  return 0;
}
