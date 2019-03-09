#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main(){
	double r1,p1,r2,p2;
	scanf("%lf %lf %lf %lf",&r1,&p1,&r2,&p2);
	double a,b,c,d;
	a=r1*cos(p1);
	b=r1*sin(p1);
	c=r2*cos(p2);
	d=r2*sin(p2);
	double A,B;
	A=a*c-b*d;
	B=a*d+b*c;
  if(abs(A)<0.01) A=0;
  if(abs(B)<0.01) B=0;
  if(B>=0) printf("%.2lf+%.2lfi\n", A, B);
  else printf("%.2lf%.2lfi\n", A, B);
	return 0;
}
