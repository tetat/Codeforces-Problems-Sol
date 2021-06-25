/// Problem Name: Cinema Line
/// Problem Link: https://codeforces.com/problemset/problem/349/A

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
  int n, el;
  cin >> n;
  VE <int> v;
//  for (int i = 0;i < n;i++){
//    cin >> el;
//    v.push_back(el);
//  }
  VE <int> rubles(3, 0);
  bool ans = true;
  for (int i = 0;i < n;i++){
    cin >> el;
    if (el == 25){
      rubles[0]++;
    }
    else if (el == 50){
      if (rubles[0]){
        rubles[0]--;
        rubles[1]++;
      }
      else {
        ans = false;
        break;
      }
    }
    else {
      if (rubles[1] && rubles[0]){
        //rubles[2]++;
        rubles[1]--;
        rubles[0]--;
      }
      else if (rubles[0] > 2){
        //rubles[2]++;
        rubles[0] -= 3;
      }
      else {
        ans = false;
        break;
      }
    }
  }
  if (ans)cout << "YES" << newline;
  else cout << "NO" << newline;
  return 0;
}
