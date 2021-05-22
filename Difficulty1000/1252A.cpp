/// Problem Name: Copying Homework
/// Problem Link: https://codeforces.com/problemset/problem/1252/A

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

const int N = 500;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int TC, ca = 0;
  int n, el;
  vector <int> v;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    v.pb(el);
  }
  reverse(all(v));
  if (n%2){
    int m = n/2;
    swap(v[m], v[m-1]);
  }
  for (int i = 0;i < n;i++){
    cout << v[i];
    if (i != n-1)cout << " ";
  }cout << '\n';
  return 0;
}
