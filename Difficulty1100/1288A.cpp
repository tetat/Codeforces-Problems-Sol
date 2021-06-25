/// Problem Name: Deadline
/// Problem Link: https://codeforces.com/problemset/problem/1288/A

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

const int MAXN = 1439;
int c[MAXN+1];

int main()
{
  faster()
  int t, ca = 0;
  cin >> t;
  while (t--){
    LL n, d, di;
    cin >> n >> d;
    bool ans = false;
    if (n >= d)cout << "YES" << newline;
    else {
      for (LL i = 1;i*i <= d;i++){
        di = ceil(double(d)/(i+1));
        if (di+i <= n){
          ans = true;
          break;
        }

      }
      if (ans)cout << "YES" << newline;
      else cout << "NO" << newline;
    }
  }
  return 0;
}
