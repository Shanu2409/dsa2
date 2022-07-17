#include<iostream>
using namespace std;

int BinSearch(int arr[],int size, int key){
	int s = 0;
	int e = size -1;

	while(s<=e){
		int mid = (s + e)/2;
		
		if(arr[mid] == key)
		return mid;
		
		(key > arr[mid] ? s = mid + 1: e = mid - 1);
	}
	
	return -1;
}

int main ()
{
	int arr[100];
	
	int x;
	cout<<"Enter the size of array: "<<endl;
	cin>>x;
	// cout<<"Enter element ins array: "<<endl;
	cout<<"Enter data in array: "<<endl;
	for(int i = 0;i < x; i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter the number you want to find: ";
	cin>>key;
	int ans = BinSearch(arr,x,key);
	cout<<ans;
	

 return 0;
}

