#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int num[100010]={0};
	for(int i=0;i<n;i++) scanf("%d",&num[i]);
	int leftmax[100010]={0},rightmin[100010]={0};
	leftmax[0]=0;
	rightmin[n-1]=1000000009;
	for(int i=1;i<n;i++) leftmax[i]=max(num[i-1],leftmax[i-1]);
	for(int i=n-2;i>=0;i--) rightmin[i]=min(num[i+1],rightmin[i+1]);
	int count=0;
	vector<int> res;
	for(int i=0;i<n;i++){
		if(num[i]>=leftmax[i]&&num[i]<=rightmin[i]){
			count++;
			res.push_back(num[i]);
		}	
	}
	printf("%d\n",count);
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++){
		printf("%d",res[i]);
		if(i<res.size()-1) printf(" ");
	}
	printf("\n");
	return 0;
}
