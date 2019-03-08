#include<cstdio>
struct money{
	int gallon,sickle,kunt,sum;
};
int main(){
	money m1,m2;
	scanf("%d.%d.%d %d.%d.%d",&m1.gallon,&m1.sickle,&m1.kunt,&m2.gallon,&m2.sickle,&m2.kunt);
	m1.sum=m1.kunt+29*m1.sickle+17*29*m1.gallon;
	m2.sum=m2.kunt+29*m2.sickle+17*29*m2.gallon;
	int g,s,k,sum;
	sum=m2.sum-m1.sum;
	if(sum<0){
		printf("-");
		sum=-sum;
	}
	g=sum/(17*29);
	sum%=(17*29);
	s=sum/29;
	sum%=29;
	k=sum;
	printf("%d.%d.%d",g,s,k);
	return 0;
}
