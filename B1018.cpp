#include<cstdio>
#include<iostream>
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
}
int main(){
	int n;
	scanf("%d",&n);
	int aa[3]={0};
	int bb[3]={0};
	char a,b;
	scanf("%c %c",&a,&b);
	aa[judge(a,b)];
	for(int i=0;i<3;i++){
		cout<<aa[i]<<endl;
	}
	/*for(int i=0;i<n;i++){ 
		char a,b;
		scanf("%c %c",&a,&b);
		aa[judge(a,b)]++;
		bb[judge(b,a)]++;
	}
	for(int i=0;i<3;i++){
		printf("%d ",aa[i]);
	}
	printf("\n");
	for(int i=0;i<3;i++){
		printf("%d ",bb[i]);
	}

	getchar();*/
	return 0;
}
