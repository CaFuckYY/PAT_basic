#include<cstdio>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	m=m%n;
	int save[110];
	for(int i=0;i<n;i++){
		scanf("%d",&save[i]);
	}
	for(int i=n-m;i<n;i++){
		printf("%d ",save[i]);
	}
	for(int i=0;i<n-m;i++){
		printf("%d",save[i]);
		if(i!=n-m-1) printf(" ");
	}
	return 0;
}
