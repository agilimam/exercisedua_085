#include<iostream>
using namespace std;

class lingkaran {
public:
	void  setluas(int x);
	void setkeliling(int x);
};

class bujurSangkar {
public:
	void setluas(int x);
	void setkeliling(int x);
		
};


class bidangDatar {
private:
	int x;
public:
	bidangDatar() {

		x = 0;
	}
};

virtual void input(){

	virtual float Luas(int a) {

		return 0;
	}
	virtual float keliling(int a) {
		return 0;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;

	}
};

class Lingkaran :public bidangDatar {


};

class BujurSangkar :public bidangDatar {

};



int main() {

}