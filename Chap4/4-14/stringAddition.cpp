#include <iostream>
#include <string>
using namespace std;


int main() {
	string str;
	
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, str, '\n');

	string originalStr = str;
	int sum = 0;

	while (true) {
		int idx = str.find("+"); // EX) 1��° ������ + ã�� 
		if (idx == -1) { //������ 
			if (str == "") break;
			cout << str << endl;
			sum += stoi(str);
			break;
		}
		else {

			string strToint = str.substr(0, idx); // + �������� ���� ���� 

			str = str.substr(idx + 1, str.length() - 1); // ���� ���ڿ� str�� ���� (+ ����) 

			cout << strToint << endl;

			sum += stoi(strToint);
		}

	}

	cout << originalStr << " = " << sum;
 }