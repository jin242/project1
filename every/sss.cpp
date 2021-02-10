#include<iostream>

using namespace std;

class user{
	double x,y,z;
	public:
	user(){;}
	user(double a,double b,double c){
		x=a;
		y=b;
		z=c;
	}
	int g(){
		int a;
		a=rand()%100;
		if(a<=x*100)
			return 0;
		else if(a>100-z*100)
			return 2;
		else return 1;
	}
	void zzz(){
		cout<<x<<y<<z;
	}
};

user game(user a[], int size){
	while(1){
		
	}
}

int main(){
	int n,k; //2<=n<=12, 1<=k<=n
	cin>>n>>k;
	double a,b,c; //확률
	user x[n];
	
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		user y(a,b,c);
		x[i]=y;
	}
	x[1].zzz();
	
}