#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int hash[1010]={0};
	int max=0,t;
	for(int i=0;i<n;i++){
		int team,member,score;
		scanf("%d-%d %d",&team,&member,&score);
		hash[team]+=score;
		if(hash[team]>max){
			max=hash[team];
			t=team;
		}
	}
	printf("%d %d\n",t,max);
	return 0;
}
