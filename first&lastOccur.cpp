#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
	int s = 0,e = size - 1,ans = -1;
	
	while(s<=e){
		int mid = s + (e - s)/2;
		if(arr[mid] == key){
			ans = mid;
			e = mid - 1;
		}
		else if(arr[mid] > key){
			e = mid - 1;
		}
		else if(arr[mid]<key) {
			s = mid + 1;
		}
	}
	
	return ans;
}

int lastOcc(int arr[],int size,int key){
	int s = 0,e = size - 1,ans = -1;
	
	while(s<=e){
		int mid = s + (e - s)/2;
		if(arr[mid] == key){
			ans = mid;
			s = mid + 1;
		}
		else if(arr[mid] > key){
			e = mid - 1;
		}
		else if(arr[mid]<key) {
			s = mid + 1;
		}
	}
	
	return ans;
}




int main ()
{
	int arr[5] = {1,2,3,3,5};
	cout<<"The first occurence of the key is "<<firstOcc(arr,5,3)<<endl;
	cout<<"The last occurence is "<<lastOcc(arr,5,3);

 return 0;
}

