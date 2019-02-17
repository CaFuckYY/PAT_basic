#include<cstdio>
int main(){
	int a;
	int b,s,g;
	scanf("%d",&a);
	g=a%10;
	a/=10;
	s=a%10;
	a/=10;
	b=a;
	for(int i=0;i<b;i++) printf("B");
	for(int i=0;i<s;i++) printf("S");
	for(int i=0;i<g;i++) printf("%d",i+1);
	return 0;
}
