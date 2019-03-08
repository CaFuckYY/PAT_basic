#include<cstdio>
#include<cmath>
int main(){
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int width=round(double(n)/2.0);
	for(int i=0;i<width;i++){
		if(i==0||i==width-1) for(int j=0;j<n;j++) printf("%c",c);
		else for(int j=0;j<n;j++){
			if(j==0||j==n-1) printf("%c",c);
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
