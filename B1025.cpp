#include<cstdio>
#include<algorithm>
using namespace std;
struct node{
	int address;
	int data;
	int next;
	int order;
}nodes[100010];
bool cmp(node a,node b){
	return a.order<b.order;
}
int main(){
	int add,n,k;
	scanf("%d %d %d",&add,&n,&k);
	for(int i=0;i<100010;i++) nodes[i].order=100010;
	for(int i=0;i<n;i++){
		int address;
		scanf("%d",&address);
		nodes[address].address=address;
		scanf("%d %d",&nodes[address].data,&nodes[address].next);
	}
	int len=0;
	int p=add;
	while(p!=-1){
		nodes[p].order=len++;
		p=nodes[p].next;
	}
	sort(nodes,nodes+100010,cmp);
	for(int i=0;i<len/k;i++){
		for(int j=(i+1)*k-1;j>i*k;j--){
			printf("%05d %d %05d\n",nodes[j].address,nodes[j].data,nodes[j-1].address);
		}
		printf("%05d %d ",nodes[i*k].address,nodes[i*k].data);
		if(i<n/k-1){
			printf("%05d\n",nodes[(i+2)*k-1].address);
		}else{
			if(n%k==0){
				printf("-1\n");
			}else{
				printf("%05d\n",nodes[(i+1)*k].address);
				for(int o=len/k*k;o<len;o++){
					printf("%05d %d ",nodes[o].address,nodes[o].data);
					if(o<len-1){
						printf("%05d\n",nodes[o+1].address);
					}else{
						printf("-1\n");
					}
				}
			}
		}
	}
	return 0;
}
