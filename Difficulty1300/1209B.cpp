/// Problem Name: Koala and Lights
/// Problem Link: https://codeforces.com/problemset/problem/1209/B

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

const int len = 500;
int ar[len+5];

int main()
{
  faster()
  int t, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0;i < n;i++){
    int x, y;
    cin >> x >> y;
    bool one = true;
    if (s[i]=='0')one = false;
    y--;
    for (int j = 0;j <= len;j++){
      if (one)ar[j]++;
      if (y == j){
        y += x;
        if (one)one = false;
        else one = true;
      }
    }
  }
  int ans = 0;
  for (int i = 0;i <= len;i++){
    ans = max(ans, ar[i]);
  }
  cout << ans << endl;
  return 0;
}
