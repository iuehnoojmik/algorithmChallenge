//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//
//	vector <double> score(n);
//	int i;
//	for (i = 0; i < n; i++) {
//		cin >> score[i];
//	}
//
//	double max = score[0];
//	for (i = 1; i < n; i++) {
//		if (max < score[i]) {
//			max = score[i];
//		}
//	}
//	
//	for (i = 0; i < n; i++) {
//		score[i] = (score[i] / max) * 100;
//	}
//
//	double sum = 0;
//	for (i = 0; i < n; i++) {
//		sum += score[i];
//	}
//
//	double result = sum / n;
//	cout.precision(18);
//	cout << result;
//}