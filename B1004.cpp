#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct Student{
	char name[11];
	char nuo[11];
	int score;
}stu[110];
bool cmp(Student a,Student b){
	return a.score>b.score;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %s %d",stu[i].name,stu[i].nuo,&stu[i].score);
	}
	sort(stu,stu+110,cmp);
	printf("%s %s\n",stu[0].name,stu[0].nuo);
	printf("%s %s",stu[n-1].name,stu[n-1].nuo);
	return 0;
}
