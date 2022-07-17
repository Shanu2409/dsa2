#include<iostream>
using namespace std;

int pivot(int arr[],int size){
	int s = 0,e = size - 1,mid = s + (e - s)/2;
	
	while(s < e){
		
		
		if(arr[mid] > arr[0]){
			s = mid + 1;
		} else {
			e = mid;
		}
		
		mid = s + (e - s)/2;
	}
	
	return mid; //we can rerurn s,e, mid all because.... use logic you asshole
}

int main ()
{
	int arr[5] = {9,10,11,2,3};
	
	cout<<pivot(arr,5);

 return 0;
}

