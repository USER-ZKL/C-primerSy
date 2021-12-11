#include<cstdio>
#include<cstring>
int main(){
	char s1[] = "abc";
	char s2[] = "ABC";	
	strcat(s1,s2);
	char s3[8];
	strcpy(s3,s1);
	
	char *p = s3;
	while(*p){
		printf("%c",*p);
		p++;
	}
}
