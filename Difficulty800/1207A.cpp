/// Problem Name: There Are Two Types Of Burgers
/// Problem Link: https://codeforces.com/problemset/problem/1207/A

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define newline '\n'
#define space " "
#define PQ priority_queue
#define VE vector
#define LL long long
#define ULL unsigned long long
#define pb push_back
#define mp make_pair
#define all(X) X.begin(), X.end()
#define II <int, int>
#define IS <int, string>
#define SI <string, int>
#define SS <string, string>
#define faster() {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
const double pi = acos(-1.0);



int main()
{
  faster()
  int t, ca = 0;
  cin >> t;
  while (t--){
    int b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;
    int B = b;
    int ans1 = 0;
    if (p+p <= B){
      B -= p+p;
      ans1 += p*h;
      B /= 2;
      ans1 += min(B, f) * c;
    }
    else {
      B /= 2;
      ans1 += B*h;
    }
    int ans2 = 0;
    if (f+f <= b){
      b -= f+f;
      ans2 += f*c;
      b /= 2;
      ans2 += min(b, p) * h;
    }
    else {
      b /= 2;
      ans2 += b*c;
    }
    cout << max(ans1, ans2) << newline;
  }
  return 0;
}
