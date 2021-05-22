/// Problem Name: Present from Lena
/// Problem Link: https://codeforces.com/problemset/problem/118/B

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
  int n;
  cin >> n;
  int m = n*2+1;
  int L = m;
  int sp = 1;
  for (int i = 1;i <= m;i++){
    int p = 0;
    for (int j = 1;j <= L;j++){
      if (m-sp >= j)cout << space;
      else {
        if (j%2){
          cout << p;
          if (j < m)p++;
          else p--;
        }
        else cout << space;
      }
    }
    if (i <= n)sp += 2;
    else sp -= 2;
    if (i <= n)L += 2;
    else L -= 2;
    cout << newline;
  }
  return 0;
}
