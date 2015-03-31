#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);

int t=0,in=1;
	for(cin>>t;t--;){
int n1,n2,cards,count=0,res;
vector<int> chk1,chk2;
	cin>>n1;
	
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++){ cin>>cards;
			if(i==n1-1)
			chk1.push_back(cards);
		}
	
	cin>>n2;
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++){ cin>>cards;
			if(i==n2-1)
			chk2.push_back(cards);
		}
	sort(chk1.begin(),chk1.end());
	sort(chk2.begin(),chk2.end());
	vector<int> v(4);          
  vector<int>::iterator it;

it=set_intersection(chk1.begin(),chk1.end(),chk2.begin(),chk2.end(),v.begin());  
  v.resize(it-v.begin());                      
  cout<<"Case #"<<in++<<": ";
	if(v.size()==1) cout<<v[0]<<endl;
	else if(v.size()>1) 
	cout<<"Bad magician!"<<endl;
	else if(v.size()==0)
	 cout<<"Volunteer cheated!"<<endl;
}
return 0;
}

