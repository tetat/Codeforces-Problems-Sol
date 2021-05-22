/// Problem Name: One-dimensional Japanese Crossword
/// Problem Link: https://codeforces.com/problemset/problem/721/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II <int, int>
#define IS <int, string>
#define SI <string, int>
#define SS <string, string>
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);



int main()
{
  faster()
  int t, ca = 0;
  int n, i = 0;
  string s;
  cin >> n >> s;
  VE <int> v;
  while (i < n){
    int cnt = 0;
    while (s[i] == 'B' && i < n){
      i++;
      cnt++;
    }
    while (s[i] != 'B' && i < n){
      i++;
    }
    if (cnt)v.pb(cnt);
  }
  int len = v.size();
  cout << len << newline;
  for (int i = 0;i < len;i++){
    cout << v[i];
    if (i != len-1)cout << space;
  }cout << newline;
  return 0;
}
