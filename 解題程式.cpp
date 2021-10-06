#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> ans1[n];
	vector<string> ans2[n];
	vector<string> ans3[n];
	vector<string> ans4[n];
	int m=0,s=0,g=0,f=0;
	for(int i=0;i<n;i++){
		string name;
		getline(cin,name);
		getline(cin,name);
		
		int x;
		cin>>x;
		if(x>=8 && x<=10){
			ans1[m].push_back(name);
			ans1[m].push_back("Fresh");
			m++;
		}
		if(x<8 && x>=5){
			ans2[s].push_back(name);
			ans2[s].push_back("Not to bad");
			s++;
		}
		if(x<5 && x>=1){
			ans3[g].push_back(name);
			ans3[g].push_back("Rotten");
			g++;
		}
		if(x==0){
			ans4[f].push_back(name);
			ans4[f].push_back("Unknown");
			f++;
		}
		
	}
	for(int i=0;i<m;i++){
		sort(ans1,ans1+m);
		cout<<ans1[i].at(0)<<" "<<ans1[i].at(1)<<endl;
	}
	for(int i=0;i<s;i++){
		sort(ans2,ans2+s);
		cout<<ans2[i].at(0)<<" "<<ans2[i].at(1)<<endl;
	}
	for(int i=0;i<g;i++){
		sort(ans3,ans3+g);
		cout<<ans3[i].at(0)<<" "<<ans3[i].at(1)<<endl;
	}
	for(int i=0;i<f;i++){
		sort(ans4,ans4+f);
		cout<<ans4[i].at(0)<<" "<<ans4[i].at(1)<<endl;
	}
}
