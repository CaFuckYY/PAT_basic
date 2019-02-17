#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	int hash[10010]={0};
	vector<int> v,res;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		v.push_back(a);
		while(a!=1){
			if(a%2==0){
				a=a/2;
				hash[a]++;
			}else{
				a=(3*a+1)/2;
				hash[a]++;
			}
		}
	}
	for(int i=0;i<v.size();i++){
		if(hash[v[i]]==0){
			res.push_back(v[i]);
		}
	}
	sort(res.begin(),res.end(),cmp);
	for(int i=0;i<res.size();i++){
		printf("%d",res[i]);
		if(i!=res.size()-1)
			printf(" ");
	}
	return 0;
}
