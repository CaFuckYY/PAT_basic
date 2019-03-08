#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int hash[100010]={0};
	int mark,max=0;
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		hash[a]+=b;
		if(hash[a]>max){
			max=hash[a];
			mark=a;
		}
	}
	printf("%d %d\n",mark,max);
	return 0;
}
