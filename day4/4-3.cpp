#include<iostream> //12번, 14번 예정
#include<string>

using namespace std;

class circle{
	int radius;
	string name;
public:
	void setcircle(string name,int radius){
		this->name=name;
		this->radius=radius;
	}
	double getarea(){
		return radius*radius*3.14;
	}
	string getname(){
		return name;
	}
};

class circlemanager{
	circle *p;
	int size;
	public:
	circlemanager(int size){
		this->size=size;
		p = new circle[size];
		string name;
		int radius;
		
		for(int i=0;i<size;i++){
		cout<<"원"<<i+1<<"이름 반지름: ";
		cin>>name>>radius;
		p[i].setcircle(name,radius);
	}
	}
	~circlemanager(){;}
	void searchname(){
		cout<<"검색어입력: ";
		string n;
		cin>>n;
		for(int i=0;i<size;i++){
			if(!n.compare(p[i].getname())){
				cout<<n<<" 면적: "<<p[i].getarea()<<endl;;
			}
		}
	}
	void searcharea(){
		cout<<"검색어입력: ";
		double n;
		cin>>n;
		for(int i=0;i<size;i++){
			if(p[i].getarea()>n){
				cout<<" 이름: "<<p[i].getname()<<"면적: "<<p[i].getarea();
			}
		}
	}
};

int main(){
	
	int n;
	cout<<"개수: ";
	cin>>n;
	
	circlemanager a(n);
	
	cout<<"이름검색";
	a.searchname();
	
	cout<<"면적검색";
	a.searcharea();
	
}