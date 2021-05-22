/// Problem Name: Remove Duplicates
/// Problem Link: https://codeforces.com/problemset/problem/978/A

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

const int N = 1000;
int ar[N+1];

int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    ar[el] = i+1;
  }
  VE <pair <II> > v;
  for (int i = 1;i <= N;i++){
    if (ar[i])v.pb(mp(ar[i], i));
  }
  sort(all(v));
  int len = v.size();
  cout << len << newline;
  for (int i = 0;i < len;i++){
    cout << v[i].second;
    if (i != len-1)cout << space;
  }cout << newline;
  return 0;
}
