#include <iostream>
using namespace std;

// Global declaration for array
int arr[6]={1,2,3,4,5,6};

//Function to insert the number at the given index and to increment the next indices position by 1.
void insert_and_update(int index, int array[6], int number){
	for(int i=6; i>index;i=i-1){
	 array[i]=array[i-1];
	 }

	array[index]=number;
    
//printing the updated array
	for(int j=0; j<=6; j++){
	 cout << array[j]<<"\n";
	 }
	
}


int main(){
    
	int index,number;
    // Taking number and index from the user
    cout<<"Enter index:";
	cin>>index;
	cout<< "Enter a number:";
	cin>>number;
	
	
    insert_and_update(index,arr,number);


	return 0;

}