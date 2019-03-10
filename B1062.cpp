#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	double l,r;
	l=double(n1)/m1;
	r=double(n2)/m2;
	if(l>r){
	  double temp=r;
	  r=l;
	  l=temp;
	}
	vector<int> res;
	for(int i=1;i<k;i++){
		if(double(i)/k>l&&double(i)/k<r){
			int d=gcd(i,k);
			if(k/d==k)
				res.push_back(i);
		}
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<"/"<<k;
		if(i<res.size()-1) cout<<" ";
		else cout<<endl;
	}
	return 0;
}
