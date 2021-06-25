/// Problem Name: Nice Garland
/// Problem Link: https://codeforces.com/problemset/problem/1108/C

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



int main()
{
  faster()
  int t, ca = 0;
  int n;
  string s;
  cin >> n >> s;
  string in = "RGB";
  string p[6];
  for (int i = 0;i < n;i++){
    p[0] += in[i%3];
  }
  in = "RBG";
  for (int i = 0;i < n;i++){
    p[1] += in[i%3];
  }
  in = "BGR";
  for (int i = 0;i < n;i++){
    p[2] += in[i%3];
  }
  in = "BRG";
  for (int i = 0;i < n;i++){
    p[3] += in[i%3];
  }
  in = "GRB";
  for (int i = 0;i < n;i++){
    p[4] += in[i%3];
  }
  in = "GBR";
  for (int i = 0;i < n;i++){
    p[5] += in[i%3];
  }
  string ans;
  int ans_int = 200000;
  for (int i = 0;i < 6;i++){
    int d = 0;
    for (int j = 0;j < n;j++){
      if (p[i][j] != s[j])d++;
    }
    if (ans_int > d){
      ans_int = d;
      ans = p[i];
    }
  }
  cout << ans_int << '\n' << ans << '\n';
  return 0;
}
