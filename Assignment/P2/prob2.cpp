#include <iostream>
using namespace std;

// 선수를 표현하는 클래스
class Player {
	string name;
public:
	void setName(string name) { this->name = name; };
	string getName() { return name; };
};

// 끝말있기 게임 전체를 운영하는 클래스
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
		cout << "참가자의 이름을 입력하세요. 빈칸 없이 >>";
		cin >> name;
		p[i].setName(name);
	}

	cout << "시작하는 단어는 아버지입니다" << endl;
	string a = "아버지";
	string b;
	bool result;

	while (true) {
		for (int i = 0; i < num; i++) {
			cout << p[i].getName() << ">>";
			cin >> b;

			if (b.at(0) == a.at(a.size() - 2) && b.at(1) == a.at(a.size() - 1)) {
				// 성공한 경우 처리 코드
				a = b;
				result = true;
			}
			else {
				// 실패할 경우 처리 코드
				cout << p[i].getName() <<"이 졌습니다! 게임을 종료합니다. " << endl;
				result = false;
				break;

			}
			
		}
		if (result == false) {
			break;
		}
	}

}



// WordGame 객체를 생성하고 게임을 시작하는 함수 
int main() {
	int num;
	cout << "끝말 잇기 게임을 시작합니다" << endl;
	cout << "게임에 참가하는 인원은 몇명입니까? ";
	cin >> num;

	WordGame games(num);
	games.run();
}