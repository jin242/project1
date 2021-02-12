#include<iostream> //확통 너무 어려워요. 요?

using namespace std;

class user{
	double x,y,z; //가위바위보의 확률 x+y+z=1
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
};

user game(user a[], int size){ //재귀? 로 해볼까
	int x[size],y[size],z[size]; //누가 어떤걸 냈느냐
	int cx=0,cy=0,cz=0;	//몇명이 어떤걸 냈느냐
	while(1){
		for(int i=0;i<size;i++){
			if(a[i].g()==0) x[cx++]=i;
			else if(a[i].g()==1) y[cy++]=i;
			else if(a[i].g()==2) z[cz++]=i;
		}
		//그래서 확률을 알때 k등으로 갈 확률을 어찌할까 내가왜 가위바위보를 분류햤지? 시뮬레이터 아닌데 야발 이히히힣 졸려 걍 자고 내일 공부해서 와야할까? 자자자자자자? 너무어려웡
		
	}
}

int main(){
	srand((unsigned int)time(NULL));
	int n,k; //2<=n<=12, 1<=k<=n
	cin>>n>>k;
	double a,b,c; //확률
	user x[n];
	
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		user y(a,b,c);
		x[i]=y;
	}
	
	game(x,n);
}