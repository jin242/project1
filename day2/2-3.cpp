#include<iostream> //졸려서 나온 하바리 코드
#include<string.h>
using namespace std;

class date{
	private:
	int year,month,day;
	
	public:
	date(int y,int m,int d){
		year=y; month=m; day=d;
	}
	date(string d){
		int s=0,aaa=0;
		int aa[3];
		string a;
		for(int i=0;d[i]!='\0';i++){
			a[i-s]=d[i];
			if(d[i]=='/'||d[i+1]=='\0'){
				aa[aaa++]=stoi(a);
				a='\0';
				s=i+1;
			}
		}
		year=aa[0];
		month=aa[1];
		day=aa[2];
	}
	void show(){
		cout<<year<<' '<<month<<' '<<day<<endl;;
	}
};

int main(){
	date DD(2044,5,6);
	date DDD("1975/22/45");
	DD.show();
	DDD.show();
	
}