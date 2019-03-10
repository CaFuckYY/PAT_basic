#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int ans=0;
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])){
			char c=tolower(s[i]);
			ans+=c-'a'+1;
		}
	}
	int zero=0,one=0;
	if(ans==0){
	  printf("0 0\n");
	  return 0;
	}
	do{
		if(ans%2==0) zero++;
		else one++;
		ans/=2;
	}while(ans!=0);
	printf("%d %d\n",zero,one);
	return 0;
}
