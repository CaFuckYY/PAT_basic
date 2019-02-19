#include<cstdio>
#include<cstring>
int min(int a,int b){
	if(a>b) return b;
	else return a;
}
char d[10][10]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(){
	char s1[70];
	char s2[70];
	char s3[70];
	char s4[70];
	scanf("%s %s %s %s",s1,s2,s3,s4);
	int l1,l2,l3,l4;
	l1=strlen(s1);
	l2=strlen(s2);
	l3=strlen(s3);
	l4=strlen(s4);
	int len1=min(l1,l2);
	int len2=min(l3,l4);
	char date,hours,minute;
	int count=0;
	bool flag=0;
	for(int i=0;i<len1;i++){
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='Z'&&flag==0){
			date=s1[i];
			flag=1;
			i++;
		}
		if(s1[i]==s2[i]&&((s1[i]>='A'&&s1[i]<='N')||(s1[i]>='0'&&s1[i]<='9'))&&flag==1){
			hours=s1[i];
			flag=0;
		}
	}
	for(int i=0;i<len2;i++){
		if(s3[i]==s4[i]&&s3[i]>='A'&&s3[i]<='z'&&flag==0){
			minute=i;
			flag=1;
		}
	}
	printf("%s ",d[date-'A']);
	if(hours>='0'&&hours<='9') printf("%02d:",hours-'0');
	else printf("%02d:",hours-'A'+10);
	printf("%02d",minute);
	return 0;
}
