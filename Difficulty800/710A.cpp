/// Problem Name: King Moves
/// Problem Link: https://codeforces.com/problemset/problem/710/A

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;

const int N = 1e6;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  string s;
  cin >> s;
//  vector <int> mark[8];
//  for (int i = 0;i < 8;i++){
//    for (int j = 0;j < 8;j++){
//      mark[i].pb(0);
//    }
//  }
  int x = s[0]-97;
  int y = s[1]-49;
  int mov = 0;
  if (y+1<8)mov++;
  if (y-1>=0)mov++;
  if (x+1<8)mov++;
  if (x-1>=0)mov++;
  if (x-1>=0 && y-1>=0)mov++;
  if (x+1<8 && y+1<8)mov++;
  if (x+1<8 && y-1>=0)mov++;
  if (x-1>=0 && y+1<8)mov++;
  cout << mov << '\n';
  return 0;
}
