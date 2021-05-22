/// Problem Name: Businessmen Problems
/// Problem Link: https://codeforces.com/problemset/problem/981/B

/**
 *  winners never quit
**/
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define II int, int
#define IS int, string
#define SI string, int
#define SS string, string
#define Long long long
#define ull unsigned long long
#define all(X) X.begin(), X.end()
#define set_point(pnt) cout<<fixed<<setprecision(pnt);
const double pi = acos(-1.0);

const int N = 1e3;

//int b_search(vector<pair <II> > v, int low, int high, int target){
//  while (low <= high){
//    int mid = low + (high-low)/2;
//    if (mid > v[mid].first)high = mid-1;
//    else if (mid < v[mid].first)low = mid+1;
//    else return mid;
//  }
//  return -1;
//}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int tc, ca = 0;
  int n, m, el;
  cin >> n;
  vector <pair <II> > a;
  Long sum = 0;
  for (int i = 0;i < n;i++){
    int ai, bi;
    cin >> ai >> bi;
    a.pb(mp(ai, bi));
    sum += bi;
  }
  cin >> m;
  vector <pair <II> > b;
  for (int i = 0;i < m;i++){
    int ai, bi;
    cin >> ai >> bi;
    b.pb(mp(ai, bi));
    sum += bi;
  }
  //sort(all(a));
  sort(all(b));
  for (int i = 0;i < n;i++){
    int low = 0;
    int high = m;
    //cout << "test\n";
    while (low <= high){
      int mid = low + (high-low)/2;
      //cout << mid << ' ';
      if (a[i].first > b[mid].first)low = mid+1;
      else if (a[i].first < b[mid].first)high = mid-1;
      else {sum -= min(a[i].second, b[mid].second); break;}
    }//cout << '\n';
  }
  cout << sum << '\n';
  return 0;
}
