/// Problem Name: Superhero Transformation
/// Problem Link: https://codeforces.com/problemset/problem/1111/A

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

bool isvowel(char ch){
  return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  string s, t;
  cin >> s >> t;
  int s_v = 0;
  int s_c = 0;
  int t_v = 0;
  int t_c = 0;
  int len = s.size();
//  for (int i = 0;i < len;i++){
//    if (isvowel(s[i]))s_v++;
//    else s_c++;
//  }
//  len = t.size();
//  for (int i = 0;i < len;i++){
//    if (isvowel(t[i]))t_v++;
//    else t_c++;
//  }
//  if (s_v==t_v && s_c==t_c)cout << "yes" << '\n';
//  else cout << "no" << '\n';
  if (s.size() != t.size())cout << "no" << '\n';
  else {
    bool check = true;
    for (int i = 0;i < s.size();i++){
      if (isvowel(s[i]) != isvowel(t[i])){
        check = false;
        break;
      }
    }
    if (check)cout << "yes" << '\n';
    else cout << "no" << '\n';
  }
  return 0;
}
