//this linear seach program only has the ability to hold int values and conduct the search
#include<stdio.h>
void main()
{
	int w=0,n,i=0,element,q=0;//elemnt for the element to be searched and i for loop interation variable
	
	printf("enter no. of elements in the array ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	printf("enter element at %d :",i+1);
	scanf("%d",&arr[i]);
	}
	printf("enter elment to be searched: ");
	scanf("%d",&element);
	
	
	for(w=0;w<n;w++){
	
	if(arr[w]==element){
	printf("element found at %d ",w+1," ");
	q=1;}
	}if(q==1){
	printf("succesfully found");
	}
	else{
	
	printf("sorry element not found");}
	}
