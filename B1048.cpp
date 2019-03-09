#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
void reverse(char s[]){
	int len=strlen(s);
	for(int i=0;i<len/2;i++){
		int temp=s[i];
		s[i]=s[len-i-1];
		s[len-i-1]=temp;
	}
}
int main(){
	char s1[110],s2[110],s3[110];
	scanf("%s %s",s1,s2);
	reverse(s1);
	reverse(s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	if(l1>=l2){
		for(int i=1;i<=l2;i++){
			if(i%2==0){
				int res=s2[i-1]-s1[i-1];
				if(res<0) res+=10;
				s3[i-1]=res+'0';
			}else{
				int res=(s2[i-1]+s1[i-1]-'0'-'0')%13;
				if(res==12) s3[i-1]='K';
				else if(res==11) s3[i-1]='Q';
				else if(res==10) s3[i-1]='J';
				else s3[i-1]=res+'0';
			}
		}
	}else{
		for(int i=l1;i<l2;i++) s3[i]=s2[i];
		for(int i=1;i<=l1;i++){
			if(i%2==0){
				int res=s2[i-1]-s1[i-1];
				if(res<0) res+=10;
				s3[i-1]=res+'0';
			}else{
				int res=(s2[i-1]+s1[i-1]-'0'-'0')%13;
				if(res==12) s3[i-1]='K';
				else if(res==11) s3[i-1]='Q';
				else if(res==10) s3[i-1]='J';
				else s3[i-1]=res+'0';
			}
		}
	}
	reverse(s3);
	printf("%s",s3);
	return 0;
}
