/// Problem Name: Yet Another Dividing into Teams
/// Problem Link: https://codeforces.com/problemset/problem/1249/A

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

const int MAXN = 1;

int main()
{
  faster()
  int t, ca = 0;
  cin >> t;
  while (t--){
    int n, el;
    cin >> n;
    VE <int> v;
    for (int i = 0;i < n;i++){
      cin >> el;
      v.pb(el);
    }
    sort(all(v));
    int d = 0;
    for (int i = 1;i < n;i++){
      if (v[i]-v[i-1] == 1)d++;
    }
    if (d)cout << "2" << newline;
    else cout << "1" << newline;
  }
  return 0;
}
