/// Problem Name: Die Roll
/// Problem Link: https://codeforces.com/problemset/problem/9/A

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
//  printf("%lf\n", 6/6.0);
//  printf("%lf\n", 5/6.0);
//  printf("%lf\n", 4/6.0);
//  printf("%lf\n", 3/6.0);
//  printf("%lf\n", 2/6.0);
//  printf("%lf\n", 1/6.0);
  int a, b;
  cin >> a >> b;
  if (a < b)swap(a, b);
  if (a==1)cout << "1/1" << newline;
  if (a==2)cout << "5/6" << newline;
  if (a==3)cout << "2/3" << newline;
  if (a==4)cout << "1/2" << newline;
  if (a==5)cout << "1/3" << newline;
  if (a==6)cout << "1/6" << newline;
  return 0;
}
