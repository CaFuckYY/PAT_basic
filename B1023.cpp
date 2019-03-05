#include<cstdio>
int main(){
	int hash[10]={0};
	for(int i=0;i<10;i++){
		scanf("%d",&hash[i]);
	}
	int first=0;
	for(int i=1;i<10;i++){
		if(hash[i]!=0){
			first=i;
			hash[i]--;
			break;
		}
	}
	printf("%d",first);
	for(int i=0;i<10;i++){
		if(hash[i]!=0){
			for(int j=0;j<hash[i];j++){
				printf("%d",i);
			}
		}
	}
	return 0;
}
