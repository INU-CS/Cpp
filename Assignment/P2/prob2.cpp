#include <iostream>
using namespace std;

// ������ ǥ���ϴ� Ŭ����
class Player {
	string name;
public:
	void setName(string name) { this->name = name; };
	string getName() { return name; };
};

// �����ֱ� ���� ��ü�� ��ϴ� Ŭ����
class WordGame {
	Player* p;
	int num;
public:
	WordGame(int num);
	void run();
};

WordGame::WordGame(int num) {
	p = new Player[num];
	this->num = num;
}

void WordGame::run() {

	for (int i = 0; i < num; i++) {
		string name;
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ���� >>";
		cin >> name;
		p[i].setName(name);
	}

	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�" << endl;
	string a = "�ƹ���";
	string b;
	bool result;

	while (true) {
		for (int i = 0; i < num; i++) {
			cout << p[i].getName() << ">>";
			cin >> b;

			if (b.at(0) == a.at(a.size() - 2) && b.at(1) == a.at(a.size() - 1)) {
				// ������ ��� ó�� �ڵ�
				a = b;
				result = true;
			}
			else {
				// ������ ��� ó�� �ڵ�
				cout << p[i].getName() <<"�� �����ϴ�! ������ �����մϴ�. " << endl;
				result = false;
				break;

			}
			
		}
		if (result == false) {
			break;
		}
	}

}



// WordGame ��ü�� �����ϰ� ������ �����ϴ� �Լ� 
int main() {
	int num;
	cout << "���� �ձ� ������ �����մϴ�" << endl;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�? ";
	cin >> num;

	WordGame games(num);
	games.run();
}