#include<cstdio>
#include<cstring>
#include<cmath>
int main(){
	char A[10010];
	char E[10];
	scanf("%s",A);
	if(A[0]=='-') printf("-");
	int epos=0,e=0,k=0;
	for(int i=0;i<strlen(A);i++){
		if(A[i]=='E'){
			epos=i;
			break;
		}
	}
	for(int i=epos+2;i<strlen(A);i++) E[k++]=A[i];
	for(int i=k-1;i>=0;i--) e+=(E[i]-'0')*pow(10,k-1-i);
	if(A[epos+1]=='-'){
		if(e==0){
			for(int i=1;i<epos;i++) printf("%c",A[i]);
		}else{
			printf("0.");
			for(int i=0;i<e-1;i++) printf("0");
			for(int i=1;i<epos;i++) if(A[i]!='.') printf("%c",A[i]);
		}
	}else{
		int pos=epos-3;
		if(e>pos){
			for(int i=1;i<epos;i++) if(A[i]!='.') printf("%c",A[i]);
			for(int i=0;i<e-pos;i++) printf("0");
		}else if(e==pos){
			for(int i=1;i<epos;i++) if(A[i]!='.') printf("%c",A[i]);
		}else{
			for(int i=1;i<epos;i++){
				if(i==e+3) printf(".");
				if(A[i]!='.') printf("%c",A[i]);
			}
		}
	}
	return 0;
}
