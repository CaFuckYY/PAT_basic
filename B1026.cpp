#include<cstdio>
int main(){
	int t1,t2;
	scanf("%d %d",&t1,&t2);
	int time=(t2-t1);
	if(time%100>=50){
		time=time/100+1;
	}else{
		time=time/100;
	}
	int hh,mm,ss;
	hh=time/3600;
	time=time%3600;
	mm=time/60;
	time=time%60;
	ss=time;
	printf("%02d:%02d:%02d",hh,mm,ss);
	return 0;
}
