#include<iostream> //클래스좀 쓰자 제발 객체지향이잖아
#include<string.h>
using namespace std;


class EXP{
	private:
	int base;
	int exp;
	public:
	EXP(int b=1,int e=1){
		base=b; exp=e;
		cout<<base<<exp<<endl;
	}
	
};

int main(){
	EXP(3,2);
	EXP(8);
	EXP();
	cout<<"end";
}