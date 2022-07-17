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

int BinSearch(int arr[],int size, int st,int ed, int key){
	int s = st;
	int e = ed;

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
	int arr[5] = {9,10,11,2,3};
	int key = 11;
	
	int pivotn = pivot(arr,5);
	
	if(arr[pivotn] <= key && key <= arr[4]){
		cout<<BinSearch(arr,5,pivotn,4,key);
	} else {
		cout<<BinSearch(arr,5,0,pivotn,key);
	}

 return 0;
}

