/// Problem Name: Coder
/// Problem Link: https://codeforces.com/problemset/problem/384/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 500;

int main()
{
  faster()
  int t, ca = 0;
  int n;
  cin >> n;
  string board[n];
  int cod = 0;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (i%2){
        if (j%2){board[i] += 'C';cod++;}
        else board[i] += '.';
      }
      else {
        if (j%2)board[i] += '.';
        else {board[i] += 'C';cod++;}
      }
    }
    //cout << board[i] << newline;
  }
  cout << cod << newline;
  for (int i = 0;i < n;i++){
    cout << board[i] << newline;
  }
  return 0;
}
