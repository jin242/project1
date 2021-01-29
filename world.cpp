#include<iostream>
using namespace std;


int main(){
	int r=9,b=7,w=55,x,y=0;
	
	for(int i=0;w>=y;i++){
		y=b*i;
		x=w-y;
		if(x%r==0)
			cout<<x/r<<" "<<i<<endl;

	}
	return 0;
}