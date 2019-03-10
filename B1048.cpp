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
	char s1[110],s2[110],s3[110]={0};
	scanf("%s %s",s1,s2);
	reverse(s1);
	reverse(s2);
	int l1=strlen(s1);
	int l2=strlen(s2);
	int l=l1>l2?l1:l2;
	for(int i=0;i<l;i++){
	  int numA=i<l1?s1[i]-'0':0;
	  int numB=i<l2?s2[i]-'0':0;
	  if(i%2==0){
	    int temp=(numA+numB)%13;
	    if(temp==10) s3[i]='J';
	    else if(temp==11) s3[i]='Q';
	    else if(temp==12) s3[i]='K';
	    else s3[i]=temp+'0';
	  }else{
	    int temp=numB-numA;
	    if(temp<0) temp+=10;
	    s3[i]=temp+'0';
	  }
	}
	reverse(s3);
	printf("%s",s3);
	return 0;
}
