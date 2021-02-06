#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

class player{
	string name;
	public:
	player(string n){
		name=n;
	}
	string getname(){
		return name;
	}
};

class gambling{
	public:
	gambling(player p1,player p2){
		int x,y,z,turn=1;
		string name;
		while(1){
			if(turn%2==1) name=p1.getname();
			else name=p2.getname();
			x=rand()%3; y=rand()%3; z=rand()%3;
			cout<<name<<":ENTER";
			getchar();
			cout<<x<<"	"<<y<<"	"<<z<<"	";
			if(x==y&&y==z) {
				cout<<name<<"님 승리!!"<<endl;
				break;
			}
			else cout<<"아쉽군요!"<<endl;
			turn++;
		}
	}
};

int main(){
	srand((unsigned)time(0));
	string n1,n2;
	cout<<"선수이름: ";
	cin>>n1>>n2;
	player *p1=new player(n1),*p2=new player(n2);
	getchar();
	gambling a(*p1,*p2);
}