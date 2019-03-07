#include<cstdio>
#include<cstring>
int main(){
	int n;
	scanf("%d",&n);
	int year,month,day;
	long long maxage=20140907,minage=18140905;
	char name[6],max_name[6],min_name[6];
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%s %d/%d/%d",name,&year,&month,&day);
		long long birth=year*10000+month*100+day;
		if(birth<18140906||birth>20140906);
		else{
			count++;
			if(birth<maxage){
				strcpy(max_name,name);
				maxage=birth;
			}
			if(birth>minage){
				strcpy(min_name,name);
				minage=birth;
			}
		}
	}
	if(count) printf("%d %s %s\n",count,max_name,min_name);
	else printf("0\n");
	return 0;
}
