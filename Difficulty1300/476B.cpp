/// Problem Name: Dreamoon and WiFi
/// Problem Link: https://codeforces.com/problemset/problem/476/B

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
#define set_fraction(pnt) cout << fixed << setprecision(pnt);
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);

const int N = 100000;
int len, q, tot;
VE <int> v;

void allset(){
  len = 1<<q;
  for (int i = 0;i < len;i++){
    int ob = 0;
    for (int j = 0;j < q;j++){
      if ((i & (1<<j)))ob++;
      else ob--;
    }
    v.pb(tot+ob);
  }
}

int main()
{
  faster()
  int t, ca = 0;
  string a, b;
  cin >> a >> b;
  int P = 0;
  for (int i = 0;i < a.size();i++){
    if (a[i] == '+')P++;
    else P--;
  }
  for (int i = 0;i < b.size();i++){
    if (b[i] == '+')tot++;
    else if (b[i] == '-')tot--;
    else q++;
  }
  allset();
  int m = 0;
  for (int i = 0;i < len;i++){
    if (v[i] == P)m++;
  }
  set_fraction(10);
  cout << double(m)/double(len) << newline;
  return 0;
}
