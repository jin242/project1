#include<iostream>
#include<cstdlib>
#include<ctime>
#define MAX 32767

using namespace std;

class selectablerandom{
	public:
	selectablerandom(){;}
	int next(bool t){
		int s;
		if(t){
			while(1)
			{s=rand()%MAX;
			if(s%2)
				return s;}
		}
		else{
			while(1){
				s=rand()%MAX;
				if(s%2==0)
					return s;
			}
		}
	}
	int nextinrange(int n,int m,bool t){
		int s;
		if(t){
			while(1)
			{s=rand()%(m+1-n)+n;
			if(s%2)
				return s;}
		}
		else{
			while(1){
				s=rand()%(m+1-n)+n;
				if(s%2==0)
					return s;
			}
		}
	}
};
	

int main(){
	srand((unsigned)time(0));
	selectablerandom r;
	for(int i=0;i<10;i++){
		cout<<r.next(false)<<' ';
	}
	for(int i=0;i<10;i++){
		cout<<r.nextinrange(2,9,true)<<' ';
	}
	
}