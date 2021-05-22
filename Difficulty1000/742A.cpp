/// Problem Name: Arpa’s hard exam and Mehrdad’s naive cheat
/// Problem Link: https://codeforces.com/problemset/problem/742/A

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
//  ull num = 1378;
//  for (lol i = 1;i <= 10;i++){
//    cout << 1378 << space << i << ": " << num << newline;
//    num *= num;
//  }
  int n;
  cin >> n;
  if (n==0)cout << 1 << newline;
  //else if (n==1)cout << 8 << newline;
  else {
    int m = n%4;
    int ans;
    if (m==0)ans = 6;
    if (m==1)ans = 8;
    if (m==2)ans = 4;
    if (m==3)ans = 2;
    cout << ans << newline;
  }
  return 0;
}
