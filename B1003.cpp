#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		int ppos,tpos,other=0;
		int pcount=0,tcount=0,acount=0;
		for(int j=0;j<s.size();j++){
			if(s[j]=='P'){
				ppos=j;
				pcount++;
			}else if(s[j]=='T'){
				tpos=j;
				tcount++;
			}else if(s[j]=='A'){
				acount++;
			}else{
				other++;
			}
		}
		if(other!=0||tpos-ppos<=0||pcount!=1||tcount!=1||acount==0){
			printf("NO\n");
		}else{
			int x,y,z;
			x=ppos;
			y=tpos-ppos-1;
			z=s.size()-1-tpos;
			//printf("x=%d,y=%d,z=%d\n",x,y,z);
			if(x==z-(y-1)*x){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	}
	return 0;
}
