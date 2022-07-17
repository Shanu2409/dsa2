#include<iostream>
using namespace std;

int main ()
{

	int n;
	cin>>n;
	
	int i = 1;
	while(i<=n){
		int j=n-i;
		while(j){
			cout<<" ";
			j--;
		}
		
		j = 1;
		while(j<=i){
			cout<<j;
			j++;
		}
		
		j = i -1;
		while(j){
			cout<<j;
			j--;
		}
		
		cout<<endl;
		i++;
	}

 return 0;
}

