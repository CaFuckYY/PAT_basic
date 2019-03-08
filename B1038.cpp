#include<cstdio>
int main(){
	int hash[110]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		hash[temp]++;
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		printf("%d",hash[temp]);
		if(i!=n-1) printf(" ");
	}
	return 0;
}
