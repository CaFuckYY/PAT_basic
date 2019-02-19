#include<cstdio>
#include<cstring>
#include<cmath>
int main(){
	char num1[20];
	char num2[20];
	char da,db;
	scanf("%s %c %s %c",num1,&da,num2,&db);
	int count1=0,count2=0;
	for(int i=0;i<strlen(num1);i++){
		if(num1[i]==da) count1++;
	}
	for(int i=0;i<strlen(num2);i++){
		if(num2[i]==db) count2++;
	}
	int a=0,b=0;
	for(int i=0;i<count1;i++){
		a+=(da-'0')*pow(10,i);
	}
	for(int i=0;i<count2;i++){
		b+=(db-'0')*pow(10,i);
	}
	printf("%d",a+b);
	return 0;
}
