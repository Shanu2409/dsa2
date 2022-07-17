#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e - s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *ar1 = new int[len1];
    int *ar2 = new int[len2];
    int k = s;
    for(int i = 0; i < len1; i++){
        ar1[i] = arr[k++];
    }

    for(int i = 0; i < len2; i++){
        ar2[i] = arr[k++];
    }
    

    int i = 0;
    int j = 0;
    k = s;
    while (i < len1 && j < len2)
    {
        if (ar1[i] < ar2[j])
        {
            arr[k++] = ar1[i++];
        }
        else
        {
            arr[k++] = ar2[j++];
        }
    }

    while (i < len1)
    {
        arr[k++] = ar1[i++];
    }

    while (j < len2)
    {
        arr[k++] = ar2[j++];
    }
}

void mergeSort(int *arr, int s, int e){
    if(s>=e) return;
    int mid = (s+e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e);
    
}

int main()
{
    int arr[] = {9,8,7,6,5,4,72,6,4,8,3,11,62,13};
    int n = 14;
    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}