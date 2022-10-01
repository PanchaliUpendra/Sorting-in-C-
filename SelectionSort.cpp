// Selection Sort


/* 
=> Theta(N^2) Algorithm
=> Does less memory writes compared to QuickSort  , Merge Sort , Insertion Sort , etc.
=> But , Cycle Sort is optimal in terms of memory writes.
=> Basic Idea for heap sort 
=>one the  Not stable  sort
=>In-place Algorithm (Which doesn't have extra memory)
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; // array size of n;
	cout<<"enter the array size :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the " <<n<<" array elements :"<<endl;
	for(int i=0;i<n;i++) cin>>arr[i];
	int temp[n],mind;
	for(int i=0;i<n;i++){
		mind=0;
		for(int j=1;j<n;j++){
			if(arr[j]<arr[mind]){
				mind=j;
			}
		}
		temp[i]=arr[mind];
		arr[mind]=INT_MAX;
	}
	cout<<"print all elements of an array in ascending order: "<<endl;
	for(int j=0;j<n;j++){
		cout<<temp[j]<<ends;
	}
	return 0;
}
