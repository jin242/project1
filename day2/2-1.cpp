#include<iostream>
#include<string.h>
using namespace std;

int main(){
	double x=0,y=0; //우물의 좌표
	int n; //마을의 수
	
	cout<<"마을의 수를 입력하시오: ";
	cin>>n;
	
	cout<<"마을의 좌표를 입력하시오"<<endl;
	int a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		x+=a;
		y+=b;
	}
	cout<<x/n<<' '<<y/n;
}