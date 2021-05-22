/// Problem Name: File Name
/// Problem Link: https://codeforces.com/problemset/problem/978/B

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
  int ans = 0;
  while (i < n){
    int cnt = 0;
    while (s[i] == 'x' && i < n){
      i++;
      cnt++;
    }
    while (s[i] != 'x' && i < n){
      i++;
    }
    if (cnt-2 > 0)ans += cnt-2;
  }
  cout << ans << newline;
  return 0;
}
