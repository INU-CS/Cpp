#include <iostream>

using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea() {return 3.14 * radius * radius; };
	string getName() { return name; };
};

void Circle::setCircle(string name, int radius) {
	this->radius = radius;
	this->name = name;
}

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager() { delete[] p; }; // 배열 소멸
	void searchByName(); // 사용자로부터 원의 이름을 입력받아 면적 출력 
	void searchByArea(); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력 
};

CircleManager::CircleManager(int size) {
	p = new Circle[size]; 
	this->size = size;

	string name;
	int radius;

	for (int i = 0; i < size; i++) {
		cout << "원 " << (i+1) << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << name << "의 면적은 " << p[i].getArea() << endl;
	  }
	}
}

void CircleManager::searchByArea() {
	int area;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> area;

	cout << area << "보다 큰 원을 검색합니다. " << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
		}
	}

}

int main() {
	int num;
	cout << "원의 개수 >> ";
	cin >> num;

	CircleManager circles(num);
	circles.searchByName();
	circles.searchByArea();
}