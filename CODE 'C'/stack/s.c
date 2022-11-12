#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[1000000];

clock_t start,end;
double cpu_time;

void take(int n);
void sort(int n);
void insert(int ptr,int i);

int main(){
	int n=10,i;
	for (i=0;i<1;i++){
		srand(time(0));
		take(n);
		sort(n);
	}
	return 0;
}

void take(int n){
	int i;
	for(i=0;i<n;i++){
		arr[i]=rand()%50+1;
	}
	printf(" List is : ");
	for (i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

void sort(int n){
	int i,j,ptr;
	for(i=1;i<n;i++){
		ptr=arr[i];
		insert(ptr,i);
	}
	printf("\n Sorted list is : ");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}

void insert(int ptr,int i){
	int j;
	for(j=i-1;j>=0;j--){
		if(ptr<arr[j]){
			arr[j+1]=arr[j];
		}else{
			break;
		}
	}
	arr[j+1]=ptr;
}