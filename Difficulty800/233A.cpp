/// Problem Name: Perfect Permutation
/// Problem Link: https://codeforces.com/problemset/problem/233/A

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

const int N = 10;

int main()
{
  faster()
  int t, ca = 0;
  int n, el;
  VE <int> v;
  cin >> n;
  if (n%2 == 1)cout << "-1" << newline;
  else {
    for (int i = n;i >= 1;i--){
      v.pb(i);
      //if (v[i-1] == i)swap(v[i-1], v[i-2]);
    }
    for (int i = 0;i < n;i++){
      if (v[i] == i+1)swap(v[i], v[i-1]);
    }
    for (int i = 0;i < n;i++){
      cout << v[i];
      if (i != n-1)cout << space;
    }cout << newline;
  }
  return 0;
}
