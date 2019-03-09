#include<cstdio>
#include<cstring>
int main(){
	int hash[128]={0};
	char s[10010];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		hash[s[i]]++;
	}
	while(hash['P']!=0||hash['A']!=0||hash['T']!=0||hash['t']!=0||hash['e']!=0||hash['s']!=0){
		if(hash['P']!=0){
			printf("P");
			hash['P']--;
		}
		if(hash['A']!=0){
			printf("A");
			hash['A']--;
		}
		if(hash['T']!=0){
			printf("T");
			hash['T']--;
		}
		if(hash['e']!=0){
			printf("e");
			hash['e']--;
		}
		if(hash['s']!=0){
			printf("s");
			hash['s']--;
		}
		if(hash['t']!=0){
			printf("t");
			hash['t']--;
		}
	}
	return 0;
}
