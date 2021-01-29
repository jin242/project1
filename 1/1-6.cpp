#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char a[]={"abcdefghijklmnopqrstuvwxyz"};
	int c[26]={0};
	string s;
	
	getline(cin,s);

	for(int i=0;s[i]!=';';i++){
		int q=97;
		if(tolower(s[i])<123&&tolower(s[i])>96)
		{for(;tolower(s[i])!=q;q++)
			;
		c[q-97]++;}
	}
	for(int i=0;i<26;i++){
		cout<<(char)(i+97)<<':'<<c[i]<<' ';
	}
	
	
}