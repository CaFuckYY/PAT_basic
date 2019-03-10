#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct student{
	string name;
	int len;
}stu[10010];
bool cmp(student a,student b){
	if(a.len!=b.len) return a.len>b.len;
	else return a.name>=b.name;
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>stu[i].name;
		cin>>stu[i].len;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<n;i++){
		cout<<stu[i].name<<" "<<stu[i].len<<endl;
	}
	int m=n/k;
	int l=0;
	if(n%k==0) l=m;
	else l=n-(k-1)*m;
	for(int i=0;i<k;i++){
		
	}
	return 0;
}
