/// Problem Name: Books
/// Problem Link: https://codeforces.com/problemset/problem/279/B

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

void solve(){
  int n, t;
  scanf("%d %d", &n, &t);
  int ar[n+1];
  int sum = 0;
  ar[0] = 0;
  for (int i = 0;i < n;i++){
    int in;
    scanf("%d", &in);
    sum += in;
    ar[i+1] = sum;
  }
  //for (int i = 0;i <= n;i++)printf("%d ", ar[i]);puts("");
  int i = 0, j = 1;
  int ans = 0;
  while (i < n && j <= n){
    while ((ar[j]-ar[i]) <= t && j <= n && i < n)j++;
    int tmp = (j-1)-i;
    //printf("%d ", tmp);
    i++;
    if (ans < tmp)ans = tmp;
  }//puts("");
  printf("%d\n", ans);
}

int main()
{
  //faster()
  int t, ca = 0;
  solve();
  return 0;
}
