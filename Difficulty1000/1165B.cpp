/// Problem Name: Polycarp Training
/// Problem Link: https://codeforces.com/problemset/problem/1165/B

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
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  int n, el;
  cin >> n;
  vector <int> v;
  queue <int> q;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(all(v));
  int ans = 0;
  int k = 1;
  for (int i = 0;i < n;i++){
    //q.push(v[i]);
    if (v[i] >= k){
      ans++;
      k++;
    }
  }
//  while (!q.empty()){
//    int tmp = q.front();
//    q.pop();
//    if (k <= tmp){
//      ans++;
//      tmp -= k;
//      if (tmp >= k)q.push(tmp);
//      k++;
//    }
//  }
  cout << ans << '\n';
  return 0;
}
