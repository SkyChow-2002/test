#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
using namespace std;

struct per{
	int num;
	int scr;
}c[5005];

bool operator < (per a, per b)
{
	if(a.scr > b.scr) return true;
	if(a.scr < b.scr) return false;
	
	return a.num < b.num;
}

std::ostream& operator << (ostream & cout,  per a )
{
	cout << a.num << " " << a.scr;
	return cout;
}


bool cmp(per a, per b)
{
	if(a.scr > b.scr) return true;
	if(a.scr < b.scr) return false;
	
	return a.num < b.num;
}
bool cmp2(per a,per b){
	if(a.scr>b.scr){
		return true;
	}
	else if(a.scr==b.scr){
		if(a.num<b.num){
			return 1;
		}
		else{
			return 0;
		}
	}
	return 0;
}

int main(){

	per a;
	per b;
	
	if(a<b)
	{
		cout << "a < b" << endl;
	}
	
	cout << a << endl;


	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i].num>>c[i].scr;
	}
//	sort(c+1,c+n+1,cmp);
	sort(c+1,c+n+1);
//	int inum=m*3/2;
	int inum=m*3/2;
	int iscr=c[inum].scr;
	int sum=0;
	for(int i=1;i<=n;i++){
		if(c[i].scr>=iscr){
			sum++;
		}
	}
	cout<<iscr<<" "<<sum<<endl;
	for(int i=1;i<=sum;i++){
		cout<<c[i].num<<" "<<c[i].scr<<endl;
	}
	
	return 0;
}
