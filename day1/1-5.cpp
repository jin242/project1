#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string x;
	getline(cin,x);
	
	int count=0;
	for(int i=0;x[i]!='\0';i++){
		if(x[i]=='x')
			count++;
	}
	cout<<count;
	
}