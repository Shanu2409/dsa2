#include<iostream>
using namespace std;

int min(int arr[], int size){
	int minn = INT_MAX;
	for(int i = 0;i<size;i++){
		if(arr[i]<minn){
			minn = arr[i];
		}
	}
	
	return minn;
}

int max(int arr[], int size){
	int maxx = INT_MIN;
	for(int i = 0;i<size;i++){
		if(arr[i]>maxx){
			maxx = arr[i];
		}
	}
	
	return maxx;
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
	
	int z = min(arr,x);
	int y = max(arr,x);
	
	cout<<"lowest number in the array is: "<<z<<endl;
	cout<<"Highest number in the array is: "<<y<<endl;

 return 0;
}

