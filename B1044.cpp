#include<cstdio>
#include<string>
#include<cmath>
#include<iostream>
#include<map>
using namespace std;
string s1[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string s2[13]={"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
map<string,int> mp1,mp2;
void show(int m){
	int d[5];
	int c=0;
	int t=m;
	if(m==0){
		cout<<"tret"<<endl;
		return;
	}
	do{
		d[c++]=m%13;
		m/=13;
	}while(m!=0);
	for(int j=c-1;j>=0;j--){
		if(j!=0) cout<<s2[d[j]];
		else{
			if(t%13==0) cout<<endl;
			else{
				if(c==1) cout<<s1[d[j]]<<endl;
				else cout<<" "<<s1[d[j]]<<endl;
			}
		}
	}
}
int main(){
	for(int i=0;i<13;i++){
		mp1[s1[i]]=i;
		mp2[s2[i]]=i;
	}
	int n;
	scanf("%d%*c",&n);
	for(int i=0;i<n;i++){
		string temp;
		getline(cin,temp);
		if(temp[0]>='0'&&temp[0]<='9'){
			int m=0;
			for(int j=0;j<temp.size();j++){
				m+=(temp[j]-'0')*pow(10,temp.size()-j-1);
			}
			show(m);
		}else{
			int res=0;
			if(temp.size()>4){
				string ss2=temp.substr(0,3);
				string ss1=temp.substr(4,7);
				int res=0;
				res=mp2[ss2]*13+mp1[ss1];
				cout<<res<<endl;
			}else{
				if(mp2[temp]!=0) cout<<mp2[temp]*13<<endl;
				else cout<<mp1[temp]<<endl;
			}
		}
	}
	return 0;
}
