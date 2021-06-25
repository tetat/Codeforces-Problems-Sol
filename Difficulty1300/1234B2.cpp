/// Problem Name: Social Network (hard version)
/// Problem Link: https://codeforces.com/problemset/problem/1234/B2

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
#define ab(n) n<0?-n:n
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
  int n, k;
  scanf("%d %d", &n, &k);
  vi v;
  int st = 0;
  int len = 0;
  map <int, int> m;
//  cout << m[5] << endl;
  for (int i = 0;i < n;i++){
    int in;
    scanf("%d", &in);
    bool ok = true;
    if (m[in] > 0){
      ok = false;
//      test;
    }
    if (ok){
      v.pb(in);
      m[in]++;
      len++;
      if (len - st > k){
        m[v[st]] = 0;
        st++;
      }
    }
  }
  printf("%d\n", len-st);
  for (int i = len-1;i >= st;i--){
    printf("%d", v[i]);
    if (i != st)printf(" ");
  }
  return 0;
}
