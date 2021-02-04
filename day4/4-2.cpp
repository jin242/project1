#include<iostream>
#include<string>

using namespace std;
/*
int main(){
	string s;
	cout<<"입력: ";
	getline(cin,s);
	char q[100];
	for(int i=0;s[i]!='\0';i++){
		q[s.size()-i-1]=s[i];
	}
	q[s.size()]='\0';
	cout<<"출력: "<<q;
}
*/
int main(){
	string s;
	cout<<"입력: ";
	getline(cin,s);
	cout<<"출력: ";
	for(int i=0;i<=s.size();i++){
	cout<<s[s.size()-i];
	}

}