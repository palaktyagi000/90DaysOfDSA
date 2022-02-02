#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

void swapAlternate(int arr[], int size){
	for(int i=0;i<size;i=i+2){
		if(i+1<size){
			swap(arr[i], arr[i+1]);
		}
	}

    printArray(arr, size);


}

int main(){

	int even[6] = {5, 2, 1, 9, 3, 4};
	int odd[5] = {5, 3 ,1 ,6 ,2};
	swapAlternate(even, 6);
	cout<<endl;
	swapAlternate(odd, 5);
	

	return 0;
}