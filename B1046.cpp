#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	int count1=0,count2=0;
	for(int i=0;i<n;i++){
		int jiahan,jiahua,yihan,yihua;
		scanf("%d %d %d %d",&jiahan,&jiahua,&yihan,&yihua);
		if(jiahua==jiahan+yihan){
			if(yihua==jiahan+yihan) continue;
			else count1++;
		}else{
			if(yihua==jiahan+yihan) count2++;
			else continue;
		}
	}
	printf("%d %d\n",count2,count1);
	return 0;
}
