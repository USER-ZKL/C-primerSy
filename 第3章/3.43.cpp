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

	//�汾1 ��Χfor
	for (int (&a)[4] : ia) {
		for (int b : a) {
			cout << b << " ";
		}
	}

	//�汾2 �±�
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
	}

	//�汾3 ָ��
	for (int (*r)[4] = begin(ia); r != end(ia); r++) {
		for (int *a = begin(*r); a != end(*r); a++) {
			cout << *a << " ";
		}
	}

	//�汾1 ��Χfor,ʹ�����ͱ���
	for (int_array &a : ia) {
		for (int b : a) {
			cout << b << " ";
		}
	}

	//�汾2 �±꣬ʹ�����ͱ���
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
	}

	//�汾3 ָ�룬ʹ�����ͱ���
	for (int_array *r = begin(ia); r != end(ia); r++) {
		for (int *a = begin(*r); a != end(*r); a++) {
			cout << *a << " ";
		}
	}

	//�汾1 ��Χfor,ʹ��auto
	for (auto &a : ia) {
		for (auto b : a) {
			cout << b << " ";
		}
	}

	//�汾2 �±�ʹ��auto
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ia[i][j] << " ";
		}
	}

	//�汾3 ָ��ʹ��auto
	for (auto r = begin(ia); r != end(ia); r++) {
		for (auto a = begin(*r); a != end(*r); a++) {
			cout << *a << " ";
		}
	}
}