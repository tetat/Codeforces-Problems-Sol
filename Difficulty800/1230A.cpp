/// Problem Name: Dawid and Bags of Candies
/// Problem Link: https://codeforces.com/problemset/problem/1230/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

///---------- template starts ----------
#define newline "\n"
#define space " "
#define ff first
#define ss second
#define qi queue <int>
#define vi vector <int>
#define vs vector <string>
#define lol long long
#define ull unsigned long long
#define pb push_back
#define pp pop_back
#define mp make_pair
#define all(ar) ar.begin(), ar.end()
#define pii pair <int, int>
#define test cout << "DEBUG\n"
#define faster() {ios_base::sync_with_stdio(false); cin.tie(NULL);}
const double pi = acos(-1.0);
int month[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
/// knight moves in 8 positions
int k_x[] = {-2, -2, -1, 1, 2, 2, 1, -1};
int k_y[] = {-1, 1, 2, 2, -1, 1, -2, -2};
/// 8 directions
int x_r[] = {0, 0, -1, 1, -1, -1, 1, 1};
int y_c[] = {-1, 1, 0, 0, -1, 1, -1, 1};
///---------- template ends ----------



int main()
{
  //faster()
  int t, ca = 0;
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int sum = a+b+c+d;
  bool ans = false;
  if ((a+b)*2 == sum)ans = true;
  if ((a+c)*2 == sum)ans = true;
  if ((a+d)*2 == sum)ans = true;
  if ((a+b+c)*2 == sum)ans = true;
  if ((a+b+d)*2 == sum)ans = true;
  if ((a+c+d)*2 == sum)ans = true;
  if ((b+c+d)*2 == sum)ans = true;
  ans?puts("YES"):puts("NO");
  return 0;
}
