#include<cstdio>
#include<algorithm>
using namespace std;
int n;
bool isSame(int num1[],int num2[]){
	for(int i=0;i<n;i++){
		if(num1[i]!=num2[i]) return false;
	}
	return true;
}
bool insertionSort(int num[],int cap[]){
	for(int i=1;i<n;i++){
		int j=i;
		int temp=num[j];
		bool flag=false;
		if(i!=1&&isSame(num,cap)) flag=true;
		while(j>0&&num[j-1]>temp){
			num[j]=num[j-1];
			j--;
		}
		num[j]=temp;
		if(flag){
			printf("Insertion Sort\n");
			for(int k=0;k<n;k++){
				printf("%d",num[k]);
				if(k<n-1) printf(" ");
			}
			return true;
		}
	}
	return false;
}
void mergeSort(int num[],int cap[]){
	bool flag=false;
	for(int step=2;step/2<=n;step*=2){
		if(step!=2&&isSame(num,cap)) flag=true;
		for(int i=0;i<n;i+=step) sort(num+i,num+min(step+i,n));
		if(flag){
			printf("Merge Sort\n");
			for(int j=0;j<n;j++){
				printf("%d",num[j]);
				if(j<n-1) printf(" ");
			}
			return;
		}
	}
}
int main(){
	int num[110],cap[110],tmp[110];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
		tmp[i]=num[i];
	};
	for(int i=0;i<n;i++) scanf("%d",&cap[i]);
	if(!insertionSort(num,cap)) 
		mergeSort(tmp,cap);
	return 0;
}
