#include<iostream>

using namespace std;

//선언부
class Oval {
private: 
	int width;
	int height;
public:
	Oval();
	~Oval();
	Oval(int width, int height);
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};


// 구현부

// 너비와 높이를 1로 초기화 하는 매개 변수 없는 생성자
Oval::Oval() { 
	width = height = 1;
}

// 너비와 높이 값을 매개변수로 받는 생성자 
Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}

// 너비(width)와 높이(height)을 출력하는 소멸자 
Oval::~Oval() {
	cout << "(소멸자 실행) 너비 : " << width << ", 높이 : " << height << endl;
}


// 타원의 너비를 리턴하는 getWidth() 함수 멤버
int Oval::getWidth() {
	return width;
}

// 타원의 높이를 리턴하는 getHeight() 함수 멤버
int Oval::getHeight() {
	return height;
}

// 타원의 너비와 높이를 변경하는 set(int w, int h) 함수 멤버
void Oval::set(int w, int h) {
	this->width = w;
	this->height = h;
}


// 타원의 너비와 높이를 화면에 출력하는 show() 함수 멤버
void Oval::show() {
	cout << "타원의 너비 : " << width << ", 타원의 높이 : " << height << endl;
}

int main() {
	Oval c = Oval(5,10);
	c.set(10,20);
	c.getWidth();
	c.getHeight();
	c.show();
}