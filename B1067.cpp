#include<iostream>
#include<string>
using namespace std;
int main(){
	string password;
	int n;
	cin>>password>>n;
	while(1){
		string s;
		cin>>s;
		if(n==0){
			cout<<"Account locked"<<endl;
			return 0;
		}
		if(s==password&&n>0){
			cout<<"Welcome in"<<endl;
			return 0;
		}else if(s!=password){
			cout<<"Wrong password: "<<s<<endl;
			n--;
		}
	}
	return 0;
}
