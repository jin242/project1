#include<iostream>
#include<string.h>

using namespace std;

int main(){
	cout<<"가위바위보"<<endl;
	string menu[3]={"가위","바위","보"};
	string user;
	
	cout<<"입력:";
	getline(cin,user);
	int com=rand()%3;
	int i;
	for(i=0;menu[i]!=user;i++){
		;
	}
	if(i>com||(i==0)&&(com==2))
		cout<<"win";
	else if(i==com)
		cout<<"drew";
	else
		cout<<"defeat";
	
	
	
}