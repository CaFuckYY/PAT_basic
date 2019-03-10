#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
int main(){
	int hash[110]={0};
	int n;
	vector<int> res;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char s[10];
		scanf("%s",s);
		int temp=0;
		for(int j=0;j<strlen(s);j++){
			temp+=s[j]-'0';
		}
		hash[temp]=1;
	}
	for(int i=0;i<110;i++) if(hash[i]!=0) res.push_back(i);
	printf("%d\n",res.size());
	for(int i=0;i<res.size();i++){
		printf("%d",res[i]);
		if(i!=res.size()-1) printf(" ");
		else printf("\n");
	}
	return 0;
}
