#include<cstdio>
#include<algorithm>
using namespace std;
struct mooncake{
	double total;
	double price;
	double single_price;
}mk[1010];
bool cmp(mooncake a,mooncake b){
	return a.single_price>b.single_price;
}
int main(){
	int n;
	double need;
	scanf("%d %lf",&n,&need);
	for(int i=0;i<n;i++){
		scanf("%lf",&mk[i].total);
	}
	for(int i=0;i<n;i++){
		scanf("%lf",&mk[i].price);
		mk[i].single_price=mk[i].price/mk[i].total;
	}
	sort(mk,mk+n,cmp);
	double w=0;
	for(int i=0;i<n;i++){
		if(mk[i].total>=need){
			w+=mk[i].single_price*need;
			break;
		}else{
			w+=mk[i].price;
			need-=mk[i].total;
		}
	}
	printf("%.2f",w);
	return 0;
}

