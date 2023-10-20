//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int t;
//	cin >> t;
//
//	int i;
//	int h, w, n;
//	int num;
//	int flo;
//	int result;
//
//	for (i = 0; i < t; i++) {
//		cin >> h >> w >> n;
//
//		if (n > h * w || n < 1) {
//			return 0;
//		}
//
//		if (n % h == 0) {
//			num = n / h;
//			flo = h;
//		}
//		else {
//			num = n / h + 1;
//			flo = n % h;
//		}
//		
//		result = flo * 100 + num;
//		cout << result << "\n";
//	}
//
//}