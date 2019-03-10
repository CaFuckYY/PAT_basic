#include<cstdio>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int score[110]={0};
	int correct[110]={0};
	for(int i=1;i<=m;i++) scanf("%d",&score[i]);
	for(int i=1;i<=m;i++) scanf("%d",&correct[i]);
	for(int i=0;i<n;i++){
		int ans=0;
		for(int j=1;j<=m;j++){
			int temp;
			scanf("%d",&temp);
			ans+=score[j]*!(correct[j]^temp);
		}
		printf("%d\n",ans);
	}
	return 0;
}
