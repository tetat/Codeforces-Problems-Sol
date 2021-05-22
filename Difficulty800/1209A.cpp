/// Problem Name: Paint the Numbers
/// Problem Link: https://codeforces.com/problemset/problem/1209/A

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
int kx[] = {-2, -2, -1, 1, 2, 2, 1, -1};
int ky[] = {-1, 1, 2, 2, -1, 1, -2, -2};
/// 8 directions
int x8[] = {0, 0, -1, 1, -1, -1, 1, 1};
int y8[] = {-1, 1, 0, 0, -1, 1, -1, 1};
///---------- template ends ----------



int main()
{
  //faster()
  int t, ca = 0;
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0;i < n;i++){
    scanf("%d", &a[i]);
  }
  sort(a, a+n);
  int ans = 0;
  for (int i = 0;i < n-1;i++){
    if (a[i] != -1){
      ans++;
      for (int j = i+1;j < n;j++){
        if (a[j]%a[i] == 0)a[j] = -1;
      }
    }
  }
  if (a[n-1] != -1)ans++;
  printf("%d\n", ans);
  return 0;
}
