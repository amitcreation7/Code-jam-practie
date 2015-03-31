#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>
#include<utility>
#include<bitset>
#include<iomanip>

using namespace std;

int main(){
freopen("in.txt","r",stdin);
freopen("out2.txt","w",stdout);
int t=0,in=1;
	for(cin>>t;t--;){
		double c,f,x;
		cin>>c>>f>>x;
		double res=0.0,T=0.0,temp=0.0,rate=2.0;
		if(c<x){
			for(double i=0;i<x/c;i++){
				temp=T;
				double j=i*f;
				double k=(i+1)*f;
				T+=c/(j+2.0);
				if(temp+(x/(j+2.0))<T+(x/(k+2.0))){
					res=temp+(x/(j+2.0));
					break;
				}
			}
		}
		else
		res=x/rate;
	cout<<"Case #"<<in++<<": ";
	cout<<setprecision(7)<<fixed<<res<<endl;
}
return 0;
}
