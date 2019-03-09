#include<cstdio>
#include<cctype>
int main(){
	int hash[128]={0};
	char c,temp;
	int max=0;
	while((c=getchar())!='\n'){
		if(isalpha(c)){
			c=tolower(c);
			hash[c]++;
			if(hash[c]>max) max=hash[c];
		}else continue;
	}
	for(int i='a';i<='z';i++){
		if(hash[i]==max){
			printf("%c %d",i,max);
			break;
		}
	}
	return 0;
}
