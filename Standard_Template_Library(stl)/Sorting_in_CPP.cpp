Sorting:

Sorting is one of the most basic functions applied to data. It means arranging the data in a particular fashion, which can be increasing or decreasing. There is a builtin function in C++ STL by the name of sort().
This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort, HeapSort and InsertionSort.By default, it uses QuickSort but if QuickSort is doing unfair partitioning and taking more than N*logN time, it switches to HeapSort and when the array size becomes really small, it switches to InsertionSort.

syntax: sort(startaddress, endaddress)

Implementation:

#include <iostream> 
#include <algorithm> 
  
using namespace std; 
  
void show(int a[]) 
{ 
    for(int i = 0; i < 10; ++i) 
        cout << a[i] << " "; 
} 
  
int main() 
{ 
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
    cout << "\n The array before sorting is : "; 
    show(a); 
  
    sort(a, a+10); 
  
    cout << "\n\n The array after sorting is : "; 
    show(a); 
  
    return 0; 
  
} 

Output:
Array after sorting using default sort is : 
0 1 2 3 4 5 6 7 8 9 


How to sort in descending order?
sort() takes a third parameter that is used to specify the order in which elements are to be sorted. We can pass “greater()” function to sort in descending order. This function does a comparison in a way that puts greater element before.

Implementation:

// C++ program to demonstrate descending order sort using 
// greater<>(). 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	sort(arr, arr+n, greater<int>()); 

	cout << "Array after sorting : \n"; 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 

	return 0; 
} 

output:
Array after sorting : 
9 8 7 6 5 4 3 2 1 0 



