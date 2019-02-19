#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
bool isPrime(int n){
	if(n<=1) return false;
	else if(n==2) return true;
	else{
		for(int i=2;i<=(int)sqrt(n)+1;i++){
			if(n%i==0) return false;
		}
		return true;
	}
}
int main(){
	vector<int> prime;
	for(int i=2;i<200010;i++){
		if(isPrime(i)) prime.push_back(i);
	}
	int m,n;
	scanf("%d %d",&m,&n);
	int count=0;
	for(int i=m-1;i<=n-1;i++){
		printf("%d",prime[i]);
		count++;
		if(count%10==0) printf("\n");
		if(i!=n-1&&count%10!=0) printf(" ");
	}
	return 0;
}
