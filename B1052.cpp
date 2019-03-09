#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<string> hand,eye,mouth;
	string s1,s2,s3;
	getline(cin,s1);
	int flag=0;
	for(int i=0;i<s1.size();i++){
			if(s1[i]=='['){
				for(int j=i+1;j<s1.size();j++){
					if(j==']'){
						cout<<s1.substr(i,j)<<endl;
						break;
					}
				}
			}
	
	}
	
	return 0;
}
