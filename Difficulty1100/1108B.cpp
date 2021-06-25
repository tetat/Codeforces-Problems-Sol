/// Problem Name: Divisors of Two Integers
/// Problem Link: https://codeforces.com/problemset/problem/1108/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

///---------- template starts ----------
#define newline cout<<'\n'
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

//int ar[10001];

int main()
{
  //faster()
  int t, ca = 0;
  int n, in;
  scanf("%d", &n);
  int ar[n];
  for (int i = 0;i < n;i++){
    scanf("%d", &ar[i]);
  }
  sort(ar, ar+n);
  int x = ar[n-1];
  vector <int> v;
  int tmp = 0;
  for (int i = 0;i < n;i++){
    if (tmp == ar[i]){
      v.push_back(ar[i]);
      continue;
    }
    if (x%ar[i]){
      v.push_back(ar[i]);
    }
    else tmp = ar[i];
  }
  int y = v[v.size()-1];
  printf("%d %d\n", x, y);
  return 0;
}
