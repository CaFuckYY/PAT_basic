#include<cstdio>
#include<cstring>
int main(){
	int hash[128]={0};
	char s1[1010],s2[1010];
	scanf("%s %s",s1,s2);
	for(int i=0;i<strlen(s1);i++) hash[s1[i]]++;
	int flag=1;
	int count=0;
	for(int i=0;i<strlen(s2);i++){
		if(hash[s2[i]]==0){
			flag=0;
			count++;
		}else{
			hash[s2[i]]--;
		}
	}
	if(flag==1){
		printf("Yes %d",int(strlen(s1)-strlen(s2)));
	}else{
		printf("No %d",count);
	}
	return 0;
}
