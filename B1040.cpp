#include<cstdio>
#include<cstring>
int main(){
	char s[100010];
	scanf("%s",s);
	int ans=0;
	int pcount[100010]={0},tcount[100010]={0};
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='P'){
			pcount[i]++;
			if(i!=0) pcount[i]+=pcount[i-1];
		}else if(i!=0) pcount[i]=pcount[i-1];
	}
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i]=='T'){
			tcount[i]++;
			if(i!=strlen(s)-1) tcount[i]+=tcount[i+1];
		}else if(i!=0) tcount[i]+=tcount[i+1];
		if(s[i]=='A') ans=(ans+pcount[i]*tcount[i])%1000000007;
	}
	printf("%d",ans);
	return 0;
}
