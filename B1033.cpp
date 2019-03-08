#include<cstdio>
#include<cctype>
int main(){
	bool hash[128]={0};
	int key=0;
	while((key=getchar())!='\n'){
		hash[key]=1;
		hash[tolower(key)]=1;
	}
	if(hash['+']) for(int i='A';i<='Z';i++) hash[i]=1;
	while((key=getchar())!='\n'){
		if(!hash[key]) printf("%c",key);
	}
	return 0;
}
