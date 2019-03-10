#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
bool cmp(int a,int b){
  return a>b;
}
int res[10010][10010];
int main(){
	int N,nums[10010];
	scanf("%d",&N);
	for(int i=0;i<N;i++) scanf("%d",&nums[i]);
	if(N==1){
		printf("%d",nums[0]);
		return 0;
	}
	sort(nums,nums+N,cmp);
	int m=(int)ceil(sqrt(1.0*N));
	while(N%m!=0) m++;
	int n=N/m,U=1,D=m,L=1,R=n,i=1,j=1,num=0;
	while(num<N){
		while(num<N&&j<R) res[i][j++]=nums[num++];
		while(num<N&&i<D) res[i++][j]=nums[num++];
		while(num<N&&j>L) res[i][j--]=nums[num++];
		while(num<N&&i>U) res[i--][j]=nums[num++];
		U++,D--,L++,R--,i++,j++;
		if(num==N-1) res[i][j]=nums[num++];
	}
	for(int c=1;c<=m;c++){
		for(int d=1;d<=n;d++){
			printf("%d",res[c][d]);
			if(d<n) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
