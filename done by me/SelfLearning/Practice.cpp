#include<iostream>
using namespace std;
int main(){
	int n=6;
	int num=1;
	char c='a';
	
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<=n-i;s++){
			cout<<" ";
		}
		if(i%2!=0){
			for(int j=0;j<=i;j++){
				cout<<c<<" ";
				c+=1;
			}
		}
		else{
			for(int j=0;j<=i;j++){
				cout<<num<<" ";
				num+=1;
			}
		}
		cout<<endl;
	}
	
}
