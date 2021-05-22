/// Problem Name: Character Swap (Easy Version)
/// Problem Link: https://codeforces.com/problemset/problem/1243/B1

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

///---------- template starts ----------
#define newline '\n'
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
  int T, ca = 0;
  scanf("%d", &T);
  while (T--){
    string a, b, s, t;
    int n, len = 0;
    scanf("%d", &n);
    cin >> a >> b;
    bool up = false;
    for (int i = 0;i < n;i++){
      if (a[i] != b[i]){
        len++;
        if (len > 2){
          puts("no");
          up = true;
          break;
        }
        s += a[i];
        t += b[i];
      }
    }
    if (up)continue;
    bool ans = false;
    for (int i = 0;i < len;i++){
      for (int j = 0;j < len;j++){
        swap(s[i], t[j]);
        if (s == t){
          ans = true;
          break;
        }
        swap(s[i], t[j]);
      }
    }
    if (ans)puts("yes");
    else puts("no");
  }
}

int main()
{
  //faster()
  solve();
  return 0;
}
