/// Problem Name: Polycarp's Pockets
/// Problem Link: https://codeforces.com/problemset/problem/1003/A

#include <iostream>
#include <queue>

using namespace std;

int a[101];
int main()
{
	priority_queue <int> pq;
	int len, n;
	cin >> len;
	while (len--)cin >> n, a[n]++;
	for (int i = 1;i <= 100;i++)pq.push(a[i]);
	cout << pq.top() << endl;
	return 0;
}
