#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){
	int start = 0;
	int end = size - 1;
	int mid = start + (end-start)/2;



	while(start<=end){
		if(key = arr[mid]){
		    return mid;
	    }
        
        //go to right
	    if(key>arr[mid]){
	    	start = mid + 1;
           
	    }
	    else{
	    	end = mid - 1;
	    }

	    mid = start + (end - start)/2;

	}
	return -1;

}

int main(){

	int even[6] = {2, 5, 23, 67, 81, 90};
	int odd[5] = {3, 53, 67, 89, 91};

	int index = binary_search(even, 6 ,23);
	cout<<"Index of key is "<<index<<endl;


	return 0;
}