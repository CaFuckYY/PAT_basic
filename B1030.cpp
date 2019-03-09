#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,p;
	int num[100010]={0};
	scanf("%d %d",&n,&p);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	sort(num,num+n);
	int p1=0,p2=0;
	int m=0;
	while(p2<n&&p1<n){
		while(p2<n&&num[p2]<=(long long)num[p1]*p){
		  m=max(m,p2-p1+1);
		  p2++;
		}
		p1++;
	}
	printf("%d",m);
	return 0;
}
