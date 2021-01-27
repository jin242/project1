#include<iostream>
using namespace std;


int main(){
	int r=9,b=7,w=55,x,y;
	
	for(int i=MIN;i<MAX;i++){
		y=b*i;
		x=w-y;
		if(w<y)
			return 0;
		if(x%r==0)
			cout<<x/r<<" "<<i<<endl;

	}
	return 0;
}