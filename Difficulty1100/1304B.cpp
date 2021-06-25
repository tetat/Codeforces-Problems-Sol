/// Problem Name: Longest Palindrome
/// Problem Link: https://codeforces.com/problemset/problem/1304/B

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

const int N = 1e3;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m;
  string in;
  cin >> n >> m;
  vector <string> s;
  vector <string> pl;
  vector <string> pr;
  for (int i = 0;i < n;i++){
    cin >> in;
    s.push_back(in);
  }
  string c = "48";
  string mi;
  for (int i = 0;i < n;i++){
    if (s[i] != "-1"){
      string t = s[i];
      bool check = false;
      reverse(all(t));
      for (int j = i+1;j < n;j++){
        if (t == s[j]){
          pl.push_back(s[i]);
          pr.push_back(s[j]);
          check = true;
          s[j] = "-1";
          //s[j] = c;
          //c[c.size()-1]++;
          break;
        }
      }
      if (check == false && s[i] != "-1"){
        if (t == s[i]){
          mi = s[i];
        }
      }
    }
  }
  //cout << "test\n";
  int len = pl.size();
  len = ((len+len)*m)+mi.size();
  cout << len << '\n';
  len = pl.size();
  for (int i = 0;i < len;i++)cout << pl[i];
  if (mi.size())cout << mi;
  for (int i = len-1;i >= 0;i--)cout << pr[i];
  if (len)cout << '\n';
  return 0;
}
