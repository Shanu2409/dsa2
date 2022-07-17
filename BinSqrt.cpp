#include<iostream>
using namespace std;

int sqt(int n){
	int s = 0, e = n, mid = s + (e - s)/2,ans;
	while(s <= e){
		
		if((mid*mid) == n){
			return mid;
		}
		else if((mid*mid) > n){
			e = mid - 1;
		}
		
		else {
			ans = mid;
			s = mid + 1;
		}
		
		mid = s + (e - s)/2;
	}
	
	return ans;

}

int main ()
{
	int n;
	
	cout<<"Enter the number to find the squre root: ";
	cin>>n;
	
	cout<<sqt(n);
	
	
 return 0;
}

