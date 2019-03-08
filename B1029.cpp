#include<cstdio>
#include<map>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
	char s1[100],s2[100];
	map<char,int> mp;
	scanf("%s %s",s1,s2);
	for(int i=0;i<strlen(s1);i++) if(s1[i]>='A'&&s1[i]<='z') s1[i]=toupper(s1[i]);
	for(int i=0;i<strlen(s2);i++) if(s2[i]>='A'&&s2[i]<='z') s2[i]=toupper(s2[i]);
	for(int i=0;i<strlen(s1);i++) mp[s1[i]]=1;
	for(int i=0;i<strlen(s2);i++) mp[s2[i]]=0;
	for(int i=0;i<strlen(s1);i++) if(mp[s1[i]]==1){
		printf("%c",s1[i]);
		mp[s1[i]]=0;
	}
	return 0;
}
