#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;

	cout << "문자열을 입력하세요(한글안됨)"<<endl;
	getline(cin, s, '\n');

	string newStr = s;
	for (int i = 0; i < s.length(); i++) {
		string first = newStr.substr(0, 1);
		string sub = newStr.substr(1, s.length() - 1);
		
		newStr = sub + first;
		cout << newStr << endl;
	}
}