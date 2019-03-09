#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int nn=floor(sqrt(n*1.0));
	int mm=ceil(sqrt(n*1.0));
	printf("%d %d",mm,nn);
	return 0;
}
