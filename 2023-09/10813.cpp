//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n, m;
//
//	cin >> n >> m;
//	
//	vector<int> ball(n+1);
//
//	int t = 0;
//	for (t = 0; t <= n; t++) {
//		ball[t] = t;
//	}
//
//	int temp;
//	int i, j;
//	for (t = 0; t < m; t++) {
//		cin >> i >> j;
//		temp = ball[i];
//		ball[i] = ball[j];
//		ball[j] = temp;
//	}
//
//	for (t = 1; t <= n; t++) {
//		cout << ball[t] << " ";
//	}
//}