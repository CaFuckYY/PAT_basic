#include<cstdio>
#include<cmath>
bool isPrime(int n){
	if(n<=1) return false;
	else if(n==2) return true;
	else{
		for(int i=2;i<=sqrt(n)+1;i++){
			if(n%i==0) return false;
		}
		return true;
	}
}
bool hash[100010]={false};
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(isPrime(i)) hash[i]=true;
	}
	int count=0;
	for(int i=2;i<=n;i++){
		if(hash[i]==true&&hash[i+2]==true)
			count++;
	}
	printf("%d",count);
	return 0;
}
