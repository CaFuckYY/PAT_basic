#include<cstdio>
#include<algorithm>
using namespace std;
struct Node{
	int add,data,next,order;
}node[100010];
bool cmp(Node a,Node b){
	return a.order<b.order;
}
int main(){
	int begin,n,k;
	scanf("%d %d %d",&begin,&n,&k);
	for(int i=0;i<n;i++){
		int address;
		scanf("%d",&address);
		node[address].add=address;
		scanf("%d %d",&node[address].data,&node[address].next);
	}
	for(int i=0;i<100010;i++) node[i].order=100010;
	int count=0;
	int p=begin;
	while(p!=-1){
		//printf("%d %d %d\n",node[p].add,node[p].data,node[p].next);
		node[p].order=count++;
		p=node[p].next;
	}
	sort(node,node+100010,cmp);
	n=count;
	if(n%k!=0){
		for(int i=0;i<n/k;i++){
			for(int j=0;j<k;j++){
				printf("%05d %d ",node[i*k+k-j-1].add,node[i*k+k-j-1].data);
				if(k-j-1==0){
					if(i!=n/k-1) printf("%05d\n",node[(i+2)*k-1].add);
					else printf("%05d\n",node[n/k*k].add);
				}else{
					printf("%05d\n",node[i*k+k-j-2].add);
				}
			}
		}
		for(int i=n/k*k;i<n;i++){
			printf("%05d %d ",node[i].add,node[i].data);
			if(i==n-1) printf("-1\n");
			else(printf("%05d\n",node[i].next));
		}
	}else{
		for(int i=0;i<n/k;i++){
			if(i==n/k-1){
				for(int j=0;j<k;j++){
					printf("%05d %d ",node[i*k+k-j-1].add,node[i+k+k-j-1].data);
					if(k-j-1==0) printf("-1\n");
					else printf("%05d\n",node[i*k+k-j-2].add);
				}
			}else{

			for(int j=0;j<k;j++){
				printf("%05d %d ",node[i*k+k-j-1].add,node[i*k+k-j-1].data);
				if(k-j-1==0){
					printf("%05d\n",node[(i+2)*k-1].add);
				}else{
					printf("%05d\n",node[i*k+k-j-2].add);
				}
			}
		}	
	}}
	return 0;
}
