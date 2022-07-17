#include<iostream>
using namespace std;

int peek(int arr[],int size){
	int s = 0,e = size - 1,mid = s + (e - s)/2;
	
	while(s < e){
		if(arr[mid] < arr[mid + 1]){
			s = mid + 1;
		} else {
			e = mid; // not mid - 1 because we might get out peek to mid and mid - 1 will miss it..
		}
		 
		 
		 mid = s + (e - s)/2;
	}
	
	return e;//we can rerurn s,e, mid all because.... use logic you assho
}

int main ()
{
	int arr[9] = {1,2,3,4,5,4,3,2,1};
	
	cout<<peek(arr,9);

 return 0;
}

