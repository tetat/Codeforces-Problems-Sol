/// Problem Name: Joysticks
/// Problem Link: https://codeforces.com/problemset/problem/651/A

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
  int a, b;
  cin >> a >> b;
  if (a==1 && b==1){
    cout << "0" << newline;
    return 0;
  }
  int ans = 0;
  if (a < b)swap(a, b);
  bool ok = true;
  while (true){
    while (a > 2){
      a -= 2;
      b++;
      ans++;
    }
    if (a < b)swap(a, b);
    if (a <= 2 && b <= 2){
      ans++;
      break;
    }
  }
  cout << ans << newline;
  return 0;
}
