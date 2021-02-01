#include<iostream>
#include<string>

using namespace std;

class Integer{
	int n;
	public:
	Integer(int a){
		n=a;
	}
	Integer(string s){
		n=stoi(s);
	}
	void set(int a){
		n=a;
	}
	int get(){
		return n;
	}
	bool isEven(){
		return n;
	}
};

int main(){
	Integer n(30);
	cout<<n.get()<<endl;
	
	n.set(2);
	cout<<n.get()<<endl;
	
	Integer m("300");
	cout<<m.get()<<endl;
	cout<<n.isEven();
}