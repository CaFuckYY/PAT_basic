#include<cstdio>
int main(){
	int hash[500]={0};
	int sum=1;
	hash[1]=sum;
	for(int i=3;i<101;i+=2){
		sum+=2*i;
		hash[i]=sum;
	}
	int n;
	char c;
	scanf("%d %c",&n,&c);
	if(n<=0){
		printf("0\n");
		return 0;
	}
	int l=0,mark;
	for(int i=1;i<51;i+=2){
		if(n>=hash[i]&&n<hash[i+2]){
			l=i;
			break;
		}
	}
	int r=n-hash[l];
	int cengshu=(l+1)/2;
	mark=l;
	for(int i=0;i<cengshu;i++){
		for(int k=0;k<i;k++) printf(" ");
		for(int j=l;j>0;j--){
			printf("%c",c);
		}
		l-=2;
		printf("\n");
	}
	cengshu-=1;
	l+=4;
	for(int i=cengshu-1;i>=0;i--){
		for(int k=0;k<i;k++) printf(" ");
		for(int j=0;j<l;j++){
			printf("%c",c);
		}
		l+=2;
		printf("\n");
	}
	printf("%d\n",r);
	return 0;
}
