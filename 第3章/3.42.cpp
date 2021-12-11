#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> a = {1,2,3,4,5};
	int b[10];
	for(int i = 0; i < a.size(); i++){
		b[i] = a[i];
	}
	
	for(int i = 0; i < a.size(); i++){
		cout << b[i];
	}
}
