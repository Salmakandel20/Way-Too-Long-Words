#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int n,count;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s.length()<=10)
		cout<<s<<endl;
		else{
			count=s.length()-2;
			cout<<s[0]<<count<<s[count+1]<<endl;
		}
	}
}
