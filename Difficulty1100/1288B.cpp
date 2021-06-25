/// Problem Name: Yet Another Meme Problem
/// Problem Link: https://codeforces.com/problemset/problem/1288/B

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
    LL a, b, d = 0, cnt = 0;
    cin >> a >> b;
    while (d <= b){
      d = (d*10) + 9;
      cnt++;
    }cnt--;
    cout << (cnt*a) << newline;
  }
  return 0;
}
