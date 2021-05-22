/// Problem Name: Panoramix's Prediction
/// Problem Link: https://codeforces.com/problemset/problem/80/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space ' '
#define PQ priority_queue
#define VE vector
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 50;
bool status[N+1];
VE <int> p(N+1, 0);

void sieve(){
  status[0] = true;
  status[1] = true;
  for (int i = 4;i <= N;i += 2){
    status[i] = true;
  }
  for (int i = 3;i*i <= N;i += 2){
    if (status[i] == false){
      for (int j = i*i;j <= N;j += i+i){
        status[j] = true;
      }
    }
  }
}

void gen_po(){
  int po = 0;
  for (int i = 0;i <= N;i++){
    p[i] = po;
    if (status[i] == false)po++;
  }
}

int main()
{
  faster()
  int t, ca = 0;
  int n, m;
  sieve();
  gen_po();
  cin >> n >> m;
  if (p[m]-p[n] == 1 && !status[n] && !status[m])cout << "YES" << newline;
  else cout << "NO" << newline;
  return 0;
}
