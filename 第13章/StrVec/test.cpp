#include"StrVec.h"
#include<string>
#include<iostream>
using namespace std;
int main() {
	StrVec sv1;
	sv1.push_back("a");
	cout << sv1.size() << sv1.capacity();
	StrVec sv2(sv1);
	cout << sv1.size() << sv1.capacity();
}
