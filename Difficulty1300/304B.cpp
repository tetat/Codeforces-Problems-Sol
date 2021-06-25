/// Problem Name: Calendar
/// Problem Link: https://codeforces.com/problemset/problem/304/B

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

int mwl[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ml[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct data {
  int d;
  int m;
  int y;
};

bool cmp_y(data a, data b){
  return a.y < b.y;
}

bool cmp_m(data a, data b){
  return a.m < b.m;
}

bool cmp_d(data a, data b){
  return a.d < b.d;
}

bool is_leap(int n){
  if ((n%4==0 && n%100) || n%400==0)return true;
  else return false;
}

int main()
{
  FastIO();
  int tc, ca = 0;
  data date[2];
  char ch;
  cin >> date[0].y >> ch >> date[0].m >> ch >> date[0].d;
  cin >> date[1].y >> ch >> date[1].m >> ch >> date[1].d;
  sort(date, date+2, cmp_y);
  if (date[0].y == date[1].y){
    sort(date, date+2, cmp_m);
    if (date[0].m == date[1].m)sort(date, date+2, cmp_d);
  }
//  cout << date[0].y << ' ' << date[0].m << ' ' << date[0].d << '\n';
//  cout << date[1].y << ' ' << date[1].m << ' ' << date[1].d << '\n';
  int tot = 0;
  int cut = 0;
  if (is_leap(date[0].y)){
    for (int i = 0;i < date[0].m-1;i++){
      cut += ml[i];
    }
    //cout << date[0].y << '\n';
    cut += date[0].d;
  }else {
    for (int i = 0;i < date[0].m-1;i++){
      cut += mwl[i];
    }
    cut += date[0].d;
  }
  for (int i = date[0].y;i < date[1].y;i++){
    if (is_leap(i)){
      tot += 366;
      //cout << i << '\n';
    }
    else tot += 365;
  }
  if (is_leap(date[1].y)){
    for (int i = 0;i < date[1].m-1;i++){
      tot += ml[i];
    }
    //cout << date[1].y << '\n';
    tot += date[1].d;
  }else {
    for (int i = 0;i < date[1].m-1;i++){
      tot += mwl[i];
    }
    tot += date[1].d;
  }
  //cout << 365-cut << '\n';
  cout << tot-cut << '\n';
  return 0;
}
