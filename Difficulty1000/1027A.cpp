/// Problem Name: Palindromic Twist
/// Problem Link: https://codeforces.com/problemset/problem/1027/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e5;

int ab(int n){
  return n<0?-n:n;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    string s;
    cin >> n >> s;
    bool check = true;
    for (int i = 0, j = n-1;i < n/2;i++, j--){
      int f = s[i]-97;
      int b = s[j]-97;
      if (ab(f-b)!=0 && ab(f-b)!=2){
        check = false;
        break;
      }
    }
    if (check)cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
