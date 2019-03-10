#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
  return a>b;
}
int main(){
	int n;
	scanf("%d",&n);
	int data[100010]={0};
	for(int i=0;i<n;i++){
	  scanf("%d",&data[i]);
	}
	sort(data,data+n+1,cmp);
	int e;
	for(e=0;e<n&&data[e]>e+1;e++);
	printf("%d",e);
	return 0;
}
