// Bubble Sort Algorithm

/*  Buuble sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent 
elements if they are in the worng order. This algorithm is not suitable for large data sets as its average
 and worst case time complexity is quite high */
 
 // Time complexity : O(N^2)
 // Worst and Average  case tiem complexity : O(N^2)
 // Best Case time coplexity : O(N)
 
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; // size of the array given by user
	cout<<"enter the size of an array: "<<endl;
	cin>>n;
	int arr[n];   // declaring an array
	cout<<"enter "<<n<<" elements of the array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];  // getting array elements from the user
	}

	//Here it is the logic of bubble sort 
	
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j]; // Here it is the swapping process
				arr[j]=temp;
			}
		}
	}
	
	cout<<"print all the array elements in ascending order: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<ends;
	}
	return 0;
}
