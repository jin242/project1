#include<iostream>
#include<string>

using namespace std;

int main(){
	int *a=new int[5];
	cout<<"입력:";
	double sum=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sum/=5;
	cout<<sum;
	delete[] a;
}