#include <bits/stdc++.h> 
using namespace std; 

// function to arrange odd and even numbers 
void arrangeOddAndEven(long long int *arr,long long int n) 
{ 
int oddInd = 1; 
	int evenInd = 0; 
	while (true) 
	{ 
		while (evenInd < n && arr[evenInd] % 2 == 0) 
			evenInd += 2; 
			
		while (oddInd < n && arr[oddInd] % 2 == 1) 
			oddInd += 2; 
			
		if (evenInd < n && oddInd < n) 
			swap (arr[evenInd], arr[oddInd]); 
			
		else
			break; 
	} 
} 

// function to print the array 
void printArray(long long int *arr, long long int n) 
{ 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
} 

// Driver program to test above 
int main() 
{ 
	long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arrangeOddAndEven(arr,n);

	printArray(arr, n); 

	return 0; 
} 
