/// Problem Name: Diverse Team
/// Problem Link: https://codeforces.com/problemset/problem/988/A

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
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 100;
int ar[N+1];

int main()
{
  faster()
  int t, ca = 0;
  int n, k, el;
  VE <int> v;
  cin >> n >> k;
  for (int i = 0;i < n;i++){
    cin >> el;
    ar[el]++;
    v.pb(el);
  }
  int cnt = 0;
  VE <int> team;
  for (int i = 1;i <= N;i++){
    if (ar[i])team.pb(i);
  }
  if (team.size() >= k){
    cout << "YES" << newline;
    for (int i = 0;i < k;i++){
      for (int j = 0;j < n;j++){
        if (v[j] == team[i]){
          cout << j+1;
          if (i != k-1)cout << space;
          break;
        }
      }
    }cout << newline;
  }
  else cout << "NO" << newline;
  return 0;
}
