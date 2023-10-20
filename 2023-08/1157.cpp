//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string word;
//	cin >> word;
//
//	for (char& ch : word) {
//		ch = toupper(ch);
//	}
//
//	int arr[26] = { 0 };
//	//A=65
//
//	int i;
//	for (i = 0; i < word.length(); i++) {
//		arr[word[i] - 65]++;
//	}
//
//	int key = 0;
//	int count = 0;
//	for (i = 1; i < 26; i++) {
//
//		if (arr[i] >= arr[key]) {
//			if (arr[i] == arr[key]) {
//				count = 1;
//			}
//			else {
//				count = 0;
//			}
//
//			key = i;
//		}
//		
//	}
//
//	if (count == 1) {
//		cout << "?" << "\n";
//	}
//	else {
//		cout << char(key + 65) << "\n";
//	}
//}