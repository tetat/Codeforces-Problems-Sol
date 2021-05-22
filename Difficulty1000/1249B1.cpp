/// Problem Name: Books Exchange (easy version)
/// Problem Link: https://codeforces.com/problemset/problem/1249/B1

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
struct data {
  int a;
  int b;
};
data v[N+10];
int st;

void dfs(int idx){
  //static int i = idx;
  if (v[idx].a == st){
    v[st].b++;
    return;
  }
  v[st].b++;
  //cout << "test" << '\n';
  dfs(v[idx].a);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int tc, ca = 0;
  cin >> tc;
  while (tc--){
    int n, el;
    cin >> n;
    for (int i = 1;i <= n;i++){
      cin >> el;
      v[i].a = el;
      v[i].b = 0;
    }
    for (st = 1;st <= n;st++){
      dfs(st);
    }
    for (int i = 1;i <= n;i++){
      cout << v[i].b;
      if (i != n)cout << " ";
    }cout << '\n';
    for (int i = 1;i <= n;i++){
      v[i].a = 0;
      v[i].b = 0;
    }
  }
  return 0;
}
