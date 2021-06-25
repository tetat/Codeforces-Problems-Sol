/// Problem Name: Lucky Numbers (easy)
/// Problem Link: https://codeforces.com/problemset/problem/96/B

/**
 *  winners never quit
**/

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long Long;
void FastIO(){
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
}

const int N = 1e6;

vector <Long> ln;
Long fs[] = {4, 7};
int p[11];

void make(int id, int lim){
  if (id == lim){
    int four = 0;
    int seven = 0;
    Long in = 0;
    for (int i = 0;i < lim;i++){
      if (fs[p[i]]==4)four++;
      else seven++;
      in = (in*10)+fs[p[i]];
    }
    if (four==seven)ln.pb(in);
    return;
  }
  for (int i = 0;i < 2;i++){
    p[id] = i;
    make(id+1, lim);
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  for (int i = 2;i <= 8;i += 2){
    make(0, i);
    for (int j = 0;j < 11;j++){
      p[j] = 0;
    }
  }
  ln.pb(4444477777);
//  for (int i = 0;i < ln.size();i++){
//    cout << ln[i] << '\n';
//  }
  Long n;
  cin >> n;
  int L = 0;
  int R = ln.size()-1;
  Long ans = 0;
  while (L <= R){
    int mid = L + (R-L)/2;
    if (ln[mid] >= n){
      ans = ln[mid];
      R = mid-1;
    }else L = mid+1;
  }
  cout << ans << '\n';
  return 0;
}
