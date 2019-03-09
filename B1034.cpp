#include<cstdio>
typedef long long ll;
struct Fraction{
	ll up,down;
};
ll gcd(ll a,ll b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
ll lcm(ll a,ll b){
	return a/gcd(b,a%b)*b;
}
ll abs(ll a){
	if(a<0) return -a;
	return a;
}
Fraction reduction(Fraction result){
	if(result.down<0){
		result.up=-result.up;
		result.down=-result.down;
	}
	if(result.up==0){
		result.down=1;
	}else{
		ll d=gcd(abs(result.up),abs(result.down));
		result.up/=d;
		result.down/=d;
	}
	return result;
}
Fraction plus(Fraction a,Fraction b){
	Fraction result;
	result.down=a.down*b.down;
	result.up=a.up*b.down+b.up*a.down;
	return reduction(result);
}
Fraction minus(Fraction a,Fraction b){
	Fraction result;
	result.down=a.down*b.down;
	result.up=a.up*b.down-b.up*a.down;
	return reduction(result);
}
Fraction times(Fraction a,Fraction b){
	Fraction result;
	result.down=a.down*b.down;
	result.up=a.up*b.up;
	return reduction(result);
}
Fraction divide(Fraction a,Fraction b){
	Fraction result;
	result.down=a.down*b.up;
	result.up=a.up*b.down;
	return reduction(result);
}
void showResult(Fraction r){
	r=reduction(r);
	if(r.up<0) printf("(");
	if(r.down==1) printf("%lld",r.up);
	else if(abs(r.up)>r.down) printf("%lld %lld/%lld",r.up/r.down,abs(r.up)%r.down,r.down);
	else printf("%lld/%lld",r.up,r.down);
	if(r.up<0) printf(")");
}
int main(){
	Fraction f1,f2;
	scanf("%lld/%lld %lld/%lld",&f1.up,&f1.down,&f2.up,&f2.down);
	showResult(f1);
	printf(" + ");
	showResult(f2);
	printf(" = ");
	showResult(plus(f1,f2));
	printf("\n");
	showResult(f1);
	printf(" - ");
	showResult(f2);
	printf(" = ");
	showResult(minus(f1,f2));
	printf("\n");
	showResult(f1);
	printf(" * ");
	showResult(f2);
	printf(" = ");
	showResult(times(f1,f2));
	printf("\n");
	showResult(f1);
	printf(" / ");
	showResult(f2);
	printf(" = ");
	if(f2.up==0) printf("Inf");
	else showResult(divide(f1,f2));
	printf("\n");
	return 0;
}
