#include<cstdio>
#include<cstring>
struct student{
	char s[20];
	int seat;
}stu[1010];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char s[20];
		int no,seat;
		scanf("%s %d %d",s,&no,&seat);
		strcpy(stu[no].s,s);
		stu[no].seat=seat;
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int temp;
		scanf("%d",&temp);
		printf("%s %d\n",stu[temp].s,stu[temp].seat);
	}
	return 0;
}
