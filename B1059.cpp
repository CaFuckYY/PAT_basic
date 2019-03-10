#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
bool isPrime(int n){
	if(n==1||n==0) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n;
	scanf("%d",&n);
	int hash[10010]={0};
	bool visit[10010]={0};
	for(int i=1;i<=n;i++){
		int temp;
		scanf("%d",&temp);
		hash[temp]=i;
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		int temp;
		scanf("%d",&temp);
		if(hash[temp]==0){
				printf("%04d: Are you kidding?\n",temp);
		}else if(visit[temp]){
		  printf("%04d: Checked\n",temp);
		}else if(hash[temp]==1){
				printf("%04d: Mystery Award\n",temp);
				visit[temp]=true;
		}else if(isPrime(hash[temp])){
					printf("%04d: Minion\n",temp);
					visit[temp]=true;
		}else{
				printf("%04d: Chocolate\n",temp);
				visit[temp]=true;
		}
	}
	return 0;
}
