/// Problem Name: Tavas and SaDDas
/// Problem Link: https://codeforces.com/problemset/problem/535/B

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

const int N = 2500;
string lucky[N];
int len;

void make_lucky_numbers(){
  lucky[1] = "4";
  lucky[2] = "7";
  int L = 1;
  int R = 2;
  int l = 2;
  len = R+1;
  while (lucky[R].size() < 9){
    for (int i = L;i <= R;i++){
      lucky[len] = "4";
      lucky[len] += lucky[i];
      len++;
    }
    for (int i = L;i <= R;i++){
      lucky[len] = "7";
      lucky[len] += lucky[i];
      len++;
    }
    l <<= 1;
    L = R+1;
    R = R+l;
  }
}

int main()
{
  faster()
  int t, ca = 0;
  make_lucky_numbers();
  string s;
  cin >> s;
  for (int i = 1;i <= len;i++){
    if (lucky[i] == s){
      cout << i << newline;
      break;
    }
  }
  return 0;
}
