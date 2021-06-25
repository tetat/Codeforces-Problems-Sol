/// Problem Name: Lucky Permutation Triple
/// Problem Link: https://codeforces.com/problemset/problem/303/A

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

const int N = 1e4;

int p[101];
int ar[101];
bool mark[101];

void check_numbers(int id, int n){
  if (id==n){
    set <int> S;
    for (int i = 0;i < n;i++){
      S.insert((p[i]+i)%n);
      cout << p[i] << ' ';
    }cout << '\n';
    if (S.size()==n)cout << "possible" << '\n';
    return;
  }
  for (int i = 0;i < n;i++){
    if (mark[i]==false){
      mark[i] = true;
      p[id] = i;
      check_numbers(id+1, n);
      mark[i] = false;
    }
  }
}

int main()
{
  FastIO();
  int tc, ca = 0;
  int n;
  cin >> n;
  //check_numbers(0, n);
  if (n%2){
    for (int i = 0;i < n;i++){
      cout << i << ' ';
    }cout << '\n';
    for (int i = 0;i < n;i++){
      cout << i << ' ';
    }cout << '\n';
    for (int i = 0;i < n;i++){
      cout << (i+i)%n << ' ';
    }cout << '\n';
  }else cout << "-1" << '\n';
  return 0;
}
