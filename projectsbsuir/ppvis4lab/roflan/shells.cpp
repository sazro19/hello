#include "pch.h"
//#include <iostream>
//#include "shell.h"
//
//template <typename F>
//void shell(F A[], int n) {
//	int d, j, countt;
//	d = n;
//	d = d / 2;
//	while (d > 0) {
//		for (int i = 0; i < n - d; i++) {
//			j = i;
//			while (j >= 0 && A[j] > A[j + d]) {
//				countt = A[j];
//				A[j] = A[j + d];
//				A[j + d] = countt;
//				j--;
//			}
//		}
//		d = d / 2;
//	}
//
//}
//
//template <typename R>
//void shell(vector<R> A, int n) {
//	int d, j, countt;
//	d = n;
//	d = d / 2;
//	while (d > 0) {
//		for (int i = 0; i < n - d; i++) {
//			j = i;
//			while (j >= 0 && A[j] > A[j + d]) {
//				countt = A[j];
//				A[j] = A[j + d];
//				A[j + d] = countt;
//				j--;
//			}
//		}
//		d = d / 2;
//	}
//
//}
//
//template <typename V>
//int getMax(V arr[], int n)
//{
//	int mx = arr[0];
//	for (int i = 1; i < n; i++)
//		if (arr[i] > mx)
//			mx = arr[i];
//	return mx;
//}
//
//template <typename Y>
//void countSort(Y arr[], int n, int exp)
//{
//	int *output = new int[n]; // output array 
//	int i, count[10] = { 0 };
//
//	// Store count of occurrences in count[] 
//	for (i = 0; i < n; i++)
//		count[(arr[i] / exp) % 10]++;
//
//	// Change count[i] so that count[i] now contains actual 
//	//  position of this digit in output[] 
//	for (i = 1; i < 10; i++)
//		count[i] += count[i - 1];
//
//	// Build the output array 
//	for (i = n - 1; i >= 0; i--)
//	{
//		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
//		count[(arr[i] / exp) % 10]--;
//	}
//
//	// Copy the output array to arr[], so that arr[] now 
//	// contains sorted numbers according to current digit 
//	for (i = 0; i < n; i++)
//		arr[i] = output[i];
//}
//
//// The main function to that sorts arr[] of size n using  
//// Radix Sort 
//template <typename X>
//void radixsort(X arr[], int n)
//{
//	// Find the maximum number to know number of digits 
//	int m = getMax(arr, n);
//
//	// Do counting sort for every digit. Note that instead 
//	// of passing digit number, exp is passed. exp is 10^i 
//	// where i is current digit number 
//	for (int exp = 1; m / exp > 0; exp *= 10)
//		countSort(arr, n, exp);
//}