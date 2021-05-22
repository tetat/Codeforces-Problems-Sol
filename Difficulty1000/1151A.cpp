/// Problem Name: Maxim and Biology
/// Problem Link: https://codeforces.com/problemset/problem/1151/A

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

const int N = 1e5;
/// ACTG
/// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
int step(char a, char c, char t, char g){
  int cnt = 0;
  int ff = a - 'A';
  int ss = 26 - ff;
  cnt += min(ff, ss);
  if (c <= 'C')cnt += ('C' - c);
  else {
    ff = c - 'C';
    ss = 26 - ff;
    cnt += min(ff, ss);
  }
  if ('T' <= t)cnt += (t - 'T');
  else {
    ff = 'T' - t;
    ss = 26 - ff;
    cnt += min(ff, ss);
  }
  if (g <= 'G')cnt += ('G' - g);
  else {
    ff = g - 'G';
    ss = 26 - ff;
    cnt += min(ff, ss);
  }
  return cnt;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int ans = INT_MAX;
  int i = 0;
  int j = 3;
  for ( ;j < n;i++, j++){
    ans = min(ans, step(s[i], s[i+1], s[i+2], s[i+3]));
  }
  cout << ans << '\n';
  return 0;
}
