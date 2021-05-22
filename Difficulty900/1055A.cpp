/// Problem Name: Metro
/// Problem Link: https://codeforces.com/problemset/problem/1055/A

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

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, s, el;
  cin >> n >> s;
  vector <pair <II> > v(n);
  for (int i = 0;i < n;i++){
    cin >> el;
    v[i].first = el;
  }
  for (int i = 0;i < n;i++){
    cin >> el;
    v[i].second = el;
  }
  if (s == 1){
    cout << "yes" << '\n';
    return 0;
  }
  bool check = true;
  if (v[0].first == 0){
    cout << "no" << '\n';
    return 0;
  }
  for (int i = 0;i < n;i++){
    if (i+1 == s && v[i].first){
      cout << "yes" << '\n';
      return 0;
    }
    if (i+1 > s && v[i].first && v[i].second){
      n = i+1;
      break;
    }
  }
  if (v[n-1].first == 0 || v[n-1].second == 0){
    cout << "no" << '\n';
    return 0;
  }
  for (int i = n-1;i >= 0;i--){
    if (i+1 == s && v[i].second){
      cout << "yes" << '\n';
      return 0;
    }
  }
  cout << "no" << '\n';
  return 0;
}
