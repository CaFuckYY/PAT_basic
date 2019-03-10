#include<cstdio>
#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using namespace std;
int mat_correct[110][6],mat_answer[110][6];
int main(){
	int n,m;
	int score[110];
	int hash[6]={0};
	scanf("%d %d",&n,&m);
	int right_num=0;
	int sum=0;
	for(int i=1;i<=m;i++){
		scanf("%d",&score[i]);
		int xuanxiang,num_correct;
		scanf("%d %d",&xuanxiang,&num_correct);
		getchar();
		for(int j=0;j<num_correct;j++){
			char c;
			scanf("%c",&c);
			getchar();
			mat_correct[i][c-'a'+1]=1;
		}
	}
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		int q=0;
		for(int j=0;j<s.size();j++){
			if(isnumber(s[j])){	
				q++;
				int t=s[j]-'0';
				for(int k=1;k<=t;k++) mat_answer[q][s[j+2*k]-'a'+1]=1;
			}
		}
		for(int c=1;c<=5;c++){
			int flag=1;
			for(int d=1;d<=5;d++){
				if(mat_correct[c][d]!=mat_answer[c][d]){
					flag=false;
					hash[c]++;
					break;
				}
			}
			if(flag) sum+=score[c];
		}
		cout<<sum<<endl;
		sum=0;
		for(int c=1;c<=5;c++)
			for(int d=1;d<=5;d++) mat_answer[c][d]=0;
	}
	int max=0;
	for(int i=1;i<=5;i++) if(hash[i]>max) max=hash[i];
	cout<<max;
	vector<int> res;
	if(max!=0){
		cout<<" ";
		for(int i=1;i<=5;i++){
			if(hash[i]==max) res.push_back(i);
		}
		for(int i=0;i<res.size();i++){
			cout<<res[i];
			if(i<res.size()-1) cout<<" ";
			else cout<<endl;
		}
	}else{
		cout<<"Too simple"<<endl;
	}
	return 0;
}
