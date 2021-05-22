/// Problem Name: Game Shopping
/// Problem Link: https://codeforces.com/problemset/problem/1009/A

#include <iostream>

using namespace std;

int res, a[1001], c[1001];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++)cin >> c[i];
	for (int i = 0;i < m;i++)cin >> a[i];
	int i , j;i = j = 0;
	while (i < n && j < m){
		if (a[j] >= c[i])res++, i++, j++;
		else i++;
	}
	cout << res << endl;
	return 0;
}
