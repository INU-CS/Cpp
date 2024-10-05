#include<iostream>

using namespace std;

//�����
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


// ������

// �ʺ�� ���̸� 1�� �ʱ�ȭ �ϴ� �Ű� ���� ���� ������
Oval::Oval() { 
	width = height = 1;
}

// �ʺ�� ���� ���� �Ű������� �޴� ������ 
Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}

// �ʺ�(width)�� ����(height)�� ����ϴ� �Ҹ��� 
Oval::~Oval() {
	cout << "(�Ҹ��� ����) �ʺ� : " << width << ", ���� : " << height << endl;
}


// Ÿ���� �ʺ� �����ϴ� getWidth() �Լ� ���
int Oval::getWidth() {
	return width;
}

// Ÿ���� ���̸� �����ϴ� getHeight() �Լ� ���
int Oval::getHeight() {
	return height;
}

// Ÿ���� �ʺ�� ���̸� �����ϴ� set(int w, int h) �Լ� ���
void Oval::set(int w, int h) {
	this->width = w;
	this->height = h;
}


// Ÿ���� �ʺ�� ���̸� ȭ�鿡 ����ϴ� show() �Լ� ���
void Oval::show() {
	cout << "Ÿ���� �ʺ� : " << width << ", Ÿ���� ���� : " << height << endl;
}

int main() {
	Oval c = Oval(5,10);
	c.set(10,20);
	c.getWidth();
	c.getHeight();
	c.show();
}