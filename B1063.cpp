#include<cstdio>
#include<cmath>
int main(){
	int n;
	scanf("%d",&n);
	double max=0;
	for(int i=0;i<n;i++){
		double a,b;
		scanf("%lf %lf",&a,&b);
		double res=sqrt(a*a+b*b);
		if(res>max) max=res;
	}
	printf("%.2lf",max);
	return 0;
}
