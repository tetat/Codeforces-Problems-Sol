/// Problem Name: Valera and Antique Items
/// Problem Link: https://codeforces.com/problemset/problem/441/A

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

int main()
{
  faster()
  int t, ca = 0;
  int n, v, el;
  cin >> n >> v;
//  set <int> S;
//  set <int>::iterator it;
  VE <int> a;
  for (int i = 0;i < n;i++){
    int mn = 1000001;
    int k;
    cin >> k;
    for (int j = 0;j < k;j++){
      cin >> el;
      if (el < mn)mn = el;
    }
    if (mn < v)a.pb(i+1);
  }
  int len = a.size();
  cout << len << newline;
//  for (it = S.begin();it != S.end();it++){
//    cout << *it << space;
//  }cout << newline;
  //sort(all(a));
  for (int i = 0;i < len;i++){
    cout << a[i] << space;
  }cout << newline;
  return 0;
}
