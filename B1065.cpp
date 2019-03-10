#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int hash[100010]={0};
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		hash[a]=b;
		hash[b]=a;
	}
	int m;
	scanf("%d",&m);
	vector<int> res;
	for(int i=0;i<m;i++){
		int temp;
		scanf("%d",&temp);
		if(hash[temp]==0){
			res.push_back(temp);
		}else{
			if(hash[hash[temp]]==1)
		}
	}
	sort(res.begin(),res.end());
	printf("%lu\n",res.size());
	for(int i=0;i<res.size();i++){
		printf("%d",res[i]);
		if(i!=res.size()-1) printf(" ");
		else printf("\n");
	}
	return 0;
}
