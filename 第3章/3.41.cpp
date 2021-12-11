# include<vector>
#include<iostream>
#include<iterator>
using namespace std;
int main(){
	int a[] = {1,2,3,4,5};
	vector<int> va(begin(a), end(a));
	for(auto d : va){
		cout << d << " ";
	}
}
