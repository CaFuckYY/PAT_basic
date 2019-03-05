#include<cstdio>
#include<iostream>
#include<map>
using namespace std;
int judge(char a,char b){
	if(a=='C'){
		if(b=='J') return 1;
		if(b=='B') return 2;
		if(b=='C') return 0;
	}
	if(a=='J'){
		if(b=='J') return 0;
		if(b=='B') return 1;
		if(b=='C') return 2;
	}
	if(a=='B'){
		if(b=='J') return 2;
		if(b=='B') return 0;
		if(b=='C') return 1;
	}
	return -1;
}
int max(int n[]){
	int res=-1;
	int pos=-1;
	for(int i=0;i<3;i++){
		if(n[i]>res){
			pos=i;
			res=n[i];
		}
	}
	
	return pos;
}
int main(){

	map<int,char> mp;
	mp[0]='B';
	mp[1]='C';
	mp[2]='J';
	int n;
	scanf("%d",&n);
	int aa[3]={0};
	int bb[3]={0};
	int pos1[3]={0};//0:B 1:C 2:J
	int pos2[3]={0};
	char a,b;
	getchar();
	for(int i=0;i<n;i++){ 
		char a,b;
		scanf("%c",&a);
		getchar();
		scanf("%c",&b);
		getchar();
		aa[judge(a,b)]++;
		bb[judge(b,a)]++;
		if(judge(a,b)==1){
			if(a=='B') pos1[0]++;
			if(a=='C') pos1[1]++;
			if(a=='J') pos1[2]++;
		}
		if(judge(b,a)==1){
			if(b=='B') pos2[0]++;
			if(b=='C') pos2[1]++;
			if(b=='J') pos2[2]++;
		}
	}
	printf("%d ",aa[1]);
	printf("%d ",aa[0]);
	printf("%d\n",aa[2]);
	printf("%d ",bb[1]);
	printf("%d ",bb[0]);
	printf("%d\n",bb[2]);
	printf("%c %c\n",mp[max(pos1)],mp[max(pos2)]);
	return 0;
}
