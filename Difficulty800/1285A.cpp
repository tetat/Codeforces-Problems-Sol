/// Problem Name: Mezo Playing Zoma
/// Problem Link: https://codeforces.com/problemset/problem/1285/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
#define PQ priority_queue
#define VE vector
#define lol long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II <int, int>
#define IS <int, string>
#define SI <string, int>
#define SS <string, string>
#define test cout << "DEBUG\n"
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);



int main()
{
  faster()
  int t, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  int R = 0;
  int L = 0;
  for (int i = 0;i < n;i++){
    if (s[i] == 'R')R++;
    else L++;
  }
  cout << R+L+1 << newline;
  return 0;
}
