#include<string>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	// 比较string 
	/*
	string s1,s2;
	cin >> s1 >> s2;
	if(s1 == s2){
		cout << "same";
	}else if(s1 < s2){
		cout << "s1 is smaller than s2";
	}else{
		cout << "s1 is bigger than s2";
	}*/
	
	//比较c-style 
	char s1[10],s2[10];
	scanf("%s %s",s1,s2);
	int ret = strcmp(s1,s2);
	if(ret == 0){
		cout << "same";
	}else if(ret < 0){
		cout << "s1 is smaller than s2";
	}else{
		cout << "s1 is bigger than s2";
	}
} 
