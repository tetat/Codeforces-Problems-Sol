/// Problem Name: Distinct Digits
/// Problem Link: https://codeforces.com/problemset/problem/1228/A

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
  int L, R;
  cin >> L >> R;
  for ( ;L <= R;L++){
    int temp = L;
    VE <int> v(10, 0);
    while (temp){
      v[temp%10]++;
      temp /= 10;
    }
    bool ok = true;
    for (int i = 0;i < 10;i++){
      if (v[i] > 1){
        ok = false;
        break;
      }
    }
    if (ok){
      cout << L << newline;
      return 0;
    }
  }
  cout << "-1" << newline;
  return 0;
}
