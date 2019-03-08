#include<cstdio>
bool judge(char s[]){
	for(int i=0;i<17;i++){
		if(s[i]>'9'||s[i]<'0') return true;
	}
	return false;
}
int main(){
	int w[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int m[11]={1,0,10,9,8,7,6,5,4,3,2};
	int n;
	scanf("%d",&n);
	int count=0;
	for(int i=0;i<n;i++){
		char s[20];
		scanf("%s",s);
		if(judge(s)) printf("%s\n",s);
		else{
			int sum=0,z;
			for(int i=0;i<17;i++){
				sum+=(s[i]-'0')*w[i];
			}
			z=sum%11;
			if(s[17]=='X'){
				if(m[z]==10){
					count++;
					continue;
				}else{
					printf("%s\n",s);
				}
			}
			else if(m[z]==s[17]-'0'){
				count++;
				continue;
			}else{
				printf("%s\n",s);
			}
		}
	}
	if(count==n) printf("All passed\n");
	return 0;
}
