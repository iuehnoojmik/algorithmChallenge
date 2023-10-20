//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int num = 10;
//	vector<int> test(num);
//
//	int i;
//	for (i = 0; i < num; i++) {
//		cin >> test[i];
//		test[i] %= 42;
//	}
//
//	int j, temp;
//	for (i = 0; i < num-1; i++) {
//		for (j = 0; j < num - (i+1) ; j++) {
//
//			if (test[j] > test[j + 1]) {
//				temp = test[j + 1];
//				test[j + 1] = test[j];
//				test[j] = temp;
//			}
//		}
//
//	}
//
//	vector<int> arr(1, test[0]);
//	for (i = 1; i < num; i++) {
//		if (arr.back() != test[i]) {
//			arr.push_back(test[i]);
//		}
//	}
//
//	cout << arr.size();
//}