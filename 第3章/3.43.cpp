#include <iostream>
#include <iterator>
using namespace std;
using int_array = int[4];

int main() {
	int ia[3][4] = {
		0, 1, 2, 3,
		4, 5, 6, 7,
		8, 9, 10, 11
	};

	//版本1 范围for
	for (int (&a)[4] : ia) {
		for (int b : a) {
			cout << b << " ";
		}
	}

	//版本2 下标
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
	}

	//版本3 指针
	for (int (*r)[4] = begin(ia); r != end(ia); r++) {
		for (int *a = begin(*r); a != end(*r); a++) {
			cout << *a << " ";
		}
	}

	//版本1 范围for,使用类型别名
	for (int_array &a : ia) {
		for (int b : a) {
			cout << b << " ";
		}
	}

	//版本2 下标，使用类型别名
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
	}

	//版本3 指针，使用类型别名
	for (int_array *r = begin(ia); r != end(ia); r++) {
		for (int *a = begin(*r); a != end(*r); a++) {
			cout << *a << " ";
		}
	}

	//版本1 范围for,使用auto
	for (auto &a : ia) {
		for (auto b : a) {
			cout << b << " ";
		}
	}

	//版本2 下标使用auto
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
	}

	//版本3 指针使用auto
	for (auto r = begin(ia); r != end(ia); r++) {
		for (auto a = begin(*r); a != end(*r); a++) {
			cout << *a << " ";
		}
	}
}