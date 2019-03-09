#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	double res=0;
	for(int i=1;i<=n;i++){
		double now;
		scanf("%lf",&now);
		res+=now*(n-i+1)*i;
	}
	printf("%.2lf\n",res);
	return 0;
}
