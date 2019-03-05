#include<cstdio>
int main(){
	long long a,b;
	int d;
	scanf("%lld %lld %d",&a,&b,&d);
	long long sum=0;
	sum=a+b;
	int res[100];
	int i=0;
	do{
		res[i++]=sum%d;
		sum/=d;
	}while(sum!=0);
	i--;
	for(;i>=0;i--){
		printf("%d",res[i]);
	}
	return 0;
}
