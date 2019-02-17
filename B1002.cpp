#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
char c[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(){
	char s[110];
	scanf("%s",s);
	int l=strlen(s);
	int res=0;
	for(int i=0;i<l;i++){
		res+=s[i]-'0';
	}
	vector<int> v;
	do{
		v.push_back(res%10);
		res/=10;
	}while(res!=0);
	for(int i=v.size()-1;i>=0;i--){
		printf("%s",c[v[i]]);
		if(i!=0) printf(" ");
	}
	return 0;
}
