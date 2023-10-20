//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//
//	vector<int> basket(n + 1);
//	vector<int> temp(n + 1);
//	int t;
//	for (t = 0; t < n+1; t++) {
//		basket[t] = t;
//	}
//	
//	int i, j;
//	int r;
//	int a;
//	for (t = 0; t < m; t++) {
//		cin >> i >> j;
//
//		r = 1;
//		for (a = j; a >= i; a--) {
//			temp[r] = basket[a];
//			r++;
//		}
//		for (a = 1; a < r; a++) {
//			basket[i] = temp[a];
//			i++;
//		}
//	}
//
//	for (int k = 1; k < n + 1; k++) {
//		cout << basket[k] << " ";
//	}
//}