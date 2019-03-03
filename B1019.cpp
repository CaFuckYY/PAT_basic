#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
void to_array(int n,int num[]){
	for(int i=0;i<4;i++){
		num[i]=n%10;
		n/=10;
	}
}
int to_number(int num[]){
	int res=0;
	for(int i=0;i<4;i++){
		res+=num[i]*pow(10,i);
	}
	return res;
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	scanf("%d",&n);
	int num[4];
	to_array(n,num);
	sort(num,num+4);
	int num1=to_number(num);
	sort(num,num+4,cmp);
	int num2=to_number(num);
	if(num1-num2==0){
		printf("%04d - %04d = %04d\n",num1,num2,num1-num2);
	}else{
		while(num1-num2!=6174){
			printf("%04d - %04d = %04d\n",num1,num2,num1-num2);
			int tmp[5];
			int t=num1-num2;
			to_array(t,tmp);
			sort(tmp,tmp+4,cmp);
			num2=to_number(tmp);
			sort(tmp,tmp+4);
			num1=to_number(tmp);
		}
		printf("%04d - %04d = %04d\n",num1,num2,num1-num2);
	}
	return 0;
}
