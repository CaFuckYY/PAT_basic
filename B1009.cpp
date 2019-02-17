#include<cstdio>
int main(){
	char s[100][100];
	int count=0;
	while(scanf("%s",s[count++])!=EOF);
	for(int i=count-2;i>=0;i--){
		printf("%s",s[i]);
		if(i!=0) printf(" ");
	}
	return 0;
}
