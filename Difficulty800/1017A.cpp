/// Problem Name: The Rank
/// Problem Link: https://codeforces.com/problemset/problem/1017/A

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

const int N = 100000;

bool cmp(pair <II> &a, pair <II> &b){
  return a.first > b.first;
}

bool cmp_s(pair <II> &a, pair <II> &b){
  return a.second < b.second;
}

int main()
{
  faster()
  int t, ca = 0;
  int n;
  cin >> n;
  VE <pair <II> > v;
  for (int i = 0;i < n;i++){
    int in, sum = 0;
    for (int j = 0;j < 4;j++){
      cin >> in;
      sum += in;
    }
    v.pb(mp(sum, i+1));
  }
  sort(all(v), cmp);
//  for (int i = 0;i < n;i++){
//    for (int j = 0;j < n-i-1;j++){
//      if (v[i].first < v[i+1].first){
//        swap(v[i].first, v[i+1].first);
//        swap(v[i].second, v[i+1].second);
//      }
//    }
//  }
  int L = 0;
  int R = 0;
  while (R < n){
    while (v[L].first == v[R].first && R < n)R++;
    sort(v.begin()+L, v.begin()+R, cmp_s);
    L = R;
  }
  for (int i = 0;i < n;i++){
    if (v[i].second == 1){
      cout << i+1 << newline;
      break;
    }
  }
  return 0;
}
