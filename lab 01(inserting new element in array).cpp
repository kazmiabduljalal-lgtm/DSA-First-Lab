#include<iostream>
using namespace std;
int main(){
	int arr[20]={10,20,30,40,50};
	int val=15;
	int position=3;
	
	for (int i=5; i>=position; i--){
	arr[i]=arr[i-1];	
	}
	arr[position]= val;
	
	for (int i=0; i<=5; i++){
		cout << arr[i] << " ";
	}
	
	
	return 0;
}
