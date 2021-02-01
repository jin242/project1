#include<iostream>
#include<string.h>

using namespace std;

class ram{
	char mem[100*1024];
	int size;
	public:
	ram(){
		char mem1[100*1024]={0};
		strcpy(mem,mem1);
		size=100*1024;
	}
	~ram(){
		cout<<"메모리 제거됨"<<endl;
	}
	char read(int address){
		return mem[address];
	}
	void write(int address,char value){
		mem[address]=value;
	}
};

int main(){
	ram r;
	r.write(100,20);
	r.write(101,30);
	char res=r.read(100)+r.read(101);
	r.write(102,res);
	cout<<(int)r.read(102)<<endl;
}