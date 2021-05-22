/// Problem Name: Mahmoud and a Triangle
/// Problem Link: https://codeforces.com/problemset/problem/766/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int MAXN = 1000;

int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  cin >> n;
  VE <int> v;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  sort(all(v));
  bool ans = false;
  for (int i = 2;i < n;i++){
    if (v[i-1]+v[i-2] > v[i]){
      ans = true;
      break;
    }
  }
  if (ans)cout << "YES" << newline;
  else cout << "NO" << newline;
  return 0;
}
