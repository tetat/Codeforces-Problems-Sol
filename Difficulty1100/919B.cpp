/// Problem Name: Perfect Number
/// Problem Link: https://codeforces.com/problemset/problem/919/B

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
  int k, b = 18;
  cin >> k;
  while (k){
    b++;
    int temp = b;
    int sum = 0;
    while (temp){
      sum += temp%10;
      temp /= 10;
    }
    if (sum == 10)k--;
  }
  cout << b << newline;
  return 0;
}
