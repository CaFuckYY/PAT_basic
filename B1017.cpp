#include<cstdio>
#include<cstring>
struct bign{
	int d[1010];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign change(char str[]){
	int len=strlen(str);
	bign c;
	c.len=len;
	for(int i=0;i<len;i++){
		c.d[i]=str[len-1-i]-'0';
	}
	return c;
}
void printBign(bign c){
	for(int i=0;i<c.len;i++){
		printf("%d",c.d[c.len-1-i]);
	}
}
bign divide(bign a,int b,int &r){
	bign c;
	c.len=a.len;
	for(int i=a.len-1;i>=0;i--){
		r=r*10+a.d[i];
		if(r<b) c.d[i]=0;
		else{
			c.d[i]=r/b;
			r=r%b;
		}
	}
	while(c.len-1>=1&&c.d[c.len-1]==0){
		c.len--;
	}
	return c;
}
int main(){
	char s1[1010];
	int d;
	scanf("%s %d",s1,&d);
	bign a=change(s1);
	int r=0;
	printBign(divide(a,d,r));
	printf(" %d",r);
	return 0;
}
