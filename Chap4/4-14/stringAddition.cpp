#include <iostream>
#include <string>
using namespace std;


int main() {
	string str;
	
	cout << "7+23+5+100+25와 같이 덧셈 문자열을 입력하세요." << endl;
	getline(cin, str, '\n');

	string originalStr = str;
	int sum = 0;

	while (true) {
		int idx = str.find("+"); // EX) 1번째 나오는 + 찾기 
		if (idx == -1) { //마지막 
			if (str == "") break;
			cout << str << endl;
			sum += stoi(str);
			break;
		}
		else {

			string strToint = str.substr(0, idx); // + 전까지의 숫자 저장 

			str = str.substr(idx + 1, str.length() - 1); // 남은 문자열 str로 저장 (+ 제외) 

			cout << strToint << endl;

			sum += stoi(strToint);
		}

	}

	cout << originalStr << " = " << sum;
 }