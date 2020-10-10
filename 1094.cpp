#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<stack>
#include<queue>

using namespace std;

int p[30005];

int main(){
	int w,n;
	cin>>w>>n;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	sort(p,p+n);
	int sum=0;
	int l=0;
	int r=n-1;
	while(l<=r){
		if(p[l]+p[r]>w){
			sum++;
			r--;
		}
		else{
			sum++;
			l++;
			r--;
		}
	}
	cout<<sum;
	
	return 0;
}
