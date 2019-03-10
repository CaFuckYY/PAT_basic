#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int num[11];
	int ans=0;
	for(int i=0;i<n;i++) scanf("%d",&num[i]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ans+=num[i]*10+num[j];
			ans+=num[j]*10+num[i];
		}
	}
	printf("%d",ans);
	return 0;
}
