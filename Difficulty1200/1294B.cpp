/// Problem Name: Collecting Packages
/// Problem Link: https://codeforces.com/problemset/problem/1294/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 100000;

bool cmp_by_second(pair <II> &a, pair <II> &b){
  return a.second < b.second;
}

int main()
{
  faster()
  int t, ca = 0;
  cin >> t;
  while (t--){
    int n, x, y;
    cin >> n;
    VE <pair <II> > v;
    for (int i = 0;i < n;i++){
      cin >> x >> y;
      v.pb(mp(x, y));
    }
    sort(all(v));
    int L = 0;
    int R = 0;
    while (R < n){
      while (v[L].first == v[R].first && R < n)R++;
      sort(v.begin()+L, v.begin()+R, cmp_by_second);
      L = R;
    }
    string path;
    x = 0;
    y = 0;
    for (int i = 0;i < n;i++){
      for ( ;x < v[i].first;x++){
        path += 'R';
      }
      if (y > v[i].second){
        path = "NO";
        break;
      }
      for ( ;y < v[i].second;y++){
        path += 'U';
      }
    }
    if (path == "NO")cout << path << newline;
    else {
      cout << "YES" << newline;
      cout << path << newline;
    }
  }
  return 0;
}
