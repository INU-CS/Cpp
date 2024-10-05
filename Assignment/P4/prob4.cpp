#include <iostream>
using namespace std;

class Container {  // �� �ϳ��� ��Ÿ���� Ŭ����
	int size; // ���� ���差, �ִ� ���差�� 10
public:
	Container() { size = 10; }
	void fill() { size = 10; }  // �ִ뷮(10)���� ä���
	void consume() { size--; }// 1��ŭ �Ҹ��ϱ�
	int getSize() {return size; } // ���� ũ�� ���� 
};


class CoffeeVendingMachine { // Ŀ�����Ǳ⸦ ǥ���ϴ� Ŭ����
	Container tong[3];  // tong[0]�� Ŀ��, tong[1]�� ��, tong[2]�� �������� ��Ÿ��
	void fill(); // 3���� ���� ��� 10���� ä��
	void selectEspresso(); // ���������Ҹ� ������ ���, Ŀ��1, �� 1 �Ҹ�
	void selectAmericano();  // �Ƹ޸�ī�븦 ������ ���, Ŀ��1, �� 2 �Ҹ�
	void selectSugarCoffee(); // ����Ŀ�Ǹ� ������ ���, Ŀ�� 1, �� 2 �Ҹ�, ���� 1 �Ҹ�
	void show();// ���� Ŀ��, ��, ������ �ܷ� ��� 
public:
	void run(); // Ŀ�� ���Ǳ� �۵�
};


void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; i++) {
		tong[i].fill();
	}
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1 && tong[2].getSize() >= 0) {
		cout << "���������� �弼��" << endl;
		tong[0].consume();
		tong[1].consume();
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 0) {
		cout << "�Ƹ޸�ī�� �弼��" << endl;
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
	}
	else {
		cout << "���ᰡ �����մϴ�. " << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
		cout << "����Ŀ�� �弼��" << endl;
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ". ���� "<< tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {

	int num;

	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;

	while (true) {
		cout << "�޴��� �����ּ���(1:����������. 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
		cin >> num;

		switch (num) {
		case 1:
			selectEspresso();
			break;
		case 2: 
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4: 
			show();
			break;
		case 5: 
			fill();
			show();
			break;
		default:
			break;
		}
	}
}


int main() {
	CoffeeVendingMachine cv;
	cv.run();
	
}