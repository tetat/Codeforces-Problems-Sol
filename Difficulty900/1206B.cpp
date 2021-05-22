/// Problem Name: Make Product Equal One
/// Problem Link: https://codeforces.com/problemset/problem/1206/B

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
  int n, el;
  LL ans = 0;
  int zero = 0;
  int none = 0;
  int pone = 0;
  cin >> n;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el < 0){
      ans += -1 - el;
      none++;
    }
    else if (el > 0){
      ans += el - 1;
      pone++;
    }
    else zero++;
  }
  if (zero){
    ans += zero;
  }
  else {
    if (none%2)ans += 2;
  }
  cout << ans << newline;
  return 0;
}
