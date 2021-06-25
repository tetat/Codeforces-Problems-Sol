/// Problem Name: Just Eat It!
/// Problem Link: https://codeforces.com/problemset/problem/1285/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
#define PQ priority_queue
#define VE vector
#define lol long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II <int, int>
#define IS <int, string>
#define SI <string, int>
#define SS <string, string>
#define test cout << "DEBUG\n"
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);



int main()
{
  faster()
  int t, ca = 0;
  cin >> t;
  while (t--){
    lol n, el;
    cin >> n;
    VE <lol> v(n+10, 0);
    lol sum = 0;
    for (int i = 1;i <= n;i++){
      cin >> v[i];
      sum += v[i];
      v[i] += v[i-1];
    }
    bool ok = true;
    for (int i = 1;i <= n;i++){
      lol L = v[i-1];
      lol R = v[n] - v[i];
      if (L >= sum || R >= sum){
        ok = false;
        break;
      }
    }
    if (ok)cout << "YES" << newline;
    else cout << "NO" << newline;
  }
  return 0;
}
