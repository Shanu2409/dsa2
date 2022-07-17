#include<iostream>
using namespace std;

void SSort(int arr[],int n){
	for(int i = 0 ; i < n -1; i++){
		int min = i;
	
		for(int j = i + 1; j < n; j++){
			if(arr[j]<arr[min]){
			min = j;
			}
		}
		
		swap(arr[i],arr[min]);	
	}
}

void show(int arr[],int n){
	for(int i = 0; i < n; i++)
	cout<<arr[i]<<" ";
	
	cout<<endl;
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
	
	cout<<"Elements before sorting: "<<endl;
	show(arr,x);
	
	SSort(arr,x);
	
	cout<<"Elements after sorting: "<<endl;
	show(arr,x);

 return 0;
}

