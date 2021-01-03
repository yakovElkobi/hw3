#include <stdio.h>
#define NUM_ELEMENT 50

void shift_element(int *arr, int i){
	
	for(int j = 0; j < i;j++){
		*(arr+i-j) = *(arr+i-j-1);
		}
}
void insertion_sort(int *arr, int len){
	
	arr++;
	for(int i = 1;i < len;i++){
		for(int j = i;j > 0; j--){
		if(*(arr) < *(arr-j)){
			int temp = *arr;
			shift_element(arr-j,j);
			*(arr-j) = temp;
		  }
		}
		arr++;
	}
}
int main(){
	printf(" Please enter 50 numbres:\n");
	int num[NUM_ELEMENT];
	int i = 0;
	int element = 0;
	while(i < NUM_ELEMENT){
	      if(scanf("%d", &element)==1);
	      *(num +i) = element;
	         i++;
	         }
	insertion_sort(num,NUM_ELEMENT);
	i = 0;
	
	 while(i < NUM_ELEMENT-1){
		printf("%d,",*(num+i));
		i++;
	}
	printf("%d",*(num+i));
	return 0;
}
