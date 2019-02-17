#include<cstdio>
#include<vector>
using namespace std;
int main(){
	int n;
	int a[1010];
	vector<int> v1,v2,v4,v5;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int a1=0,a2=0,a3=0,a5=0;
	float a4=0;
	int flag=1;
	for(int i=0;i<n;i++){
		if(a[i]%5==0&&a[i]%2==0) v1.push_back(a[i]);
		if(a[i]%5==1){
			v2.push_back(a[i]);
		}
		if(a[i]%5==2) a3++;
		if(a[i]%5==3) v4.push_back(a[i]);
		if(a[i]%5==4) v5.push_back(a[i]);
	}
	if(v1.size()==0) printf("N ");
	else{
		for(int i=0;i<v1.size();i++){
			a1+=v1[i];
		}
		printf("%d ",a1);
	}
	if(v2.size()==0) printf("N ");
	else{
		for(int i=0;i<v2.size();i++){
			if(i%2==0) a2+=v2[i];
			else a2-=v2[i];
		}
		printf("%d ",a2);
	}
	printf("%d ",a3);
	if(v4.size()==0) printf("N ");
	else{
		for(int i=0;i<v4.size();i++){
			a4+=v4[i];
		}
		a4/=v4.size();
		printf("%.1f ",a4);
	}
	if(v5.size()==0) printf("N");
	else{
		a5=v5[0];
		for(int i=1;i<v5.size();i++){
			if(v5[i]>a5) a5=v5[i];
		}
		printf("%d",a5);
	}
	return 0;
}
