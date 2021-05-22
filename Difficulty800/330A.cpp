/// Problem Name: Cakeminator
/// Problem Link: https://codeforces.com/problemset/problem/330/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int MAXN = 1;
bool check[110][110];
char S[110][110];

int main()
{
  faster()
  int t, ca = 0;
  int n, m;
  cin >> n >> m;
  //string S[n];
  char ch;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < m;j++){
      cin >> ch;
      S[i][j] = ch;
    }
    //cout << S[i] << space;
  }
  int r = 0;
  int c = 0;
  for (int i = 0;i < n;i++){
    bool ok_r = true;
    for (int j = 0;j < m;j++){
      if (S[i][j] == 'S')ok_r = false;
    }
    if (ok_r){
      for (int j = 0;j < m;j++){
        if (check[i][j] == false){
          check[i][j] = true;
          r++;
        }
      }
    }
  }
  for (int i = 0;i < m;i++){
    bool ok_c = true;
    for (int j = 0;j < n;j++){
      if (S[j][i] == 'S')ok_c = false;
    }
    if (ok_c){
      for (int j = 0;j < n;j++){
        if (check[j][i] == false){
          check[j][i] = true;
          c++;
        }
      }
    }
  }
  cout << (r+c) << newline;
  return 0;
}
