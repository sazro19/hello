
#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;
template <typename F>
void shell(F A[], int n) {
	int d, j, countt;
	d = n;
	d = d / 2;
	while (d > 0) {
		for (int i = 0; i < n - d; i++) {
			j = i;
			while (j >= 0 && A[j] > A[j + d]) {
				countt = A[j];
				A[j] = A[j + d];
				A[j + d] = countt;
				j--;
			}
		}
		d = d / 2;
	}

}

template <typename R>
void shell(vector<R> &A, int n) {
	int d, j, countt;
	d = n;
	d = d / 2;
	while (d > 0) {
		for (int i = 0; i < n - d; i++) {
			j = i;
			while (j >= 0 && A[j] > A[j + d]) {
				countt = A[j];
				A[j] = A[j + d];
				A[j + d] = countt;
				j--;
			}
		}
		d = d / 2;
	}

}
