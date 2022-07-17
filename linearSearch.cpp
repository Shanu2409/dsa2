#include<iostream>
using namespace std;

int BinSearch(int arr[], int size , int key){
	for(int i = 0; i < size;i++){
		if(arr[i] == key){
			return i;
			break;
		} 
	}
	
	return -1;
}

int main ()
{
	int arr[100];
	
	int x;
	cout<<"Enter the size of array: ";
	cin>>x;
	cout<<"Enter data in array: "<<endl;
	for(int i = 0;i < x; i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter the number you want to find: ";
	cin>>key;
	int ans = BinSearch(arr,x,key);
	
	cout<<"Your number is at "<<ans<<" index of array";	

 return 0;
}

