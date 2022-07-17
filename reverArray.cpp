#include<iostream>
using namespace std;

void show(int arr[], int size){
	for(int i = 0; i < size; i++){
	cout<<arr[i] << " ";
	}
cout<<endl;
}

void reverse(int arr[], int size){
	int s = 0,e = size - 1,temp;
	
	while(s <= e){
		temp = arr[e];
		arr[e] = arr[s];
		arr[s] = temp;
		
		s++; e--;
	}
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
	
	cout<<"Elements in array Before reverse: "<<endl;
	
	show(arr,x);
	
	reverse(arr, x);
	
	cout<<"Elements in array After reverse: "<<endl;
	
	show(arr,x);

 return 0;
}

