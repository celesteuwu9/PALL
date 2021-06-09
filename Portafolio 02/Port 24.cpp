#include <iostream>

using namespace std;

void imprimirArreglo(int arr[], int size){
	for(int i =0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void merge(int arr[], int low, int med, int high){
	
	int n1 = med - low + 1;
	int n2 = high - med;
	
	int L[n1], M[n2];
	
	for(int i = 0; i < n1; i++)
		L[i] = arr[low + i];
	for(int j = 0; j < n2; j++)
		M[j] = arr[med + 1 + j];
		
	int i, j, k;
	i = 0;
	j = 0;
	k = low;
	
	while(i < n1 && j < n2){
		if(L[i] < M[j]){
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = M[j];
			j++;
		}
		k++;
	}
	
	while(i < n1){
	 	arr[k] = L[i];
	 	i++;
	 	k++;
	}
	 
	while(j < n2){
		arr[k] = M[j];
		j++;
		k++;
	}	
}

void mergeSort(int arr[], int low, int high){
	if (low < high){
		int med = low + (high - low)/2;
		mergeSort(arr, low, med);
		mergeSort(arr, med + 1, high),
		
		merge(arr, low, med, high);
	}
}

int main(){
	int arr[] = {6, 5, 12, 10, 9, 1};
	int size = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0, size -1);
	cout << "Arreglo ordenado: \n";
	imprimirArreglo(arr, size);
	return 0;
}







