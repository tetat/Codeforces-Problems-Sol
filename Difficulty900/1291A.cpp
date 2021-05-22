/// Problem Name: Even But Not Even
/// Problem Link: https://codeforces.com/problemset/problem/1291/A

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
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n;
    string s;
    cin >> n >> s;
    string ebne;
    for (int i = 0;i < n;i++){
      if ((s[i]-48) % 2)ebne += s[i];
      if (ebne.size() == 2)break;
    }
    if (ebne.size() < 2)ebne = "-1";
    cout << ebne << '\n';
  }
  return 0;
}
