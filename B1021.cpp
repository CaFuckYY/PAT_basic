#include<cstdio>
#include<cstring>
int main(){
	int res[11]={0};
	char s[1010];
	scanf("%s",s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		res[s[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(res[i]!=0){
			printf("%d:%d\n",i,res[i]);
		}
	}
	return 0;
}
