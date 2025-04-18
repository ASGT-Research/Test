#include<stdio.h>
#define MAX 10

int LinearSearch(int number[],int key){

  for(int i=0;i<=MAX-1;i++)
  {
    if (number[i] == key) 
      return i;
  }
  return -1;
}

int LargestNumber(int number[]){
  int largest = 0;
  for (int i=0;i<= MAX-1;i++) {
    if (largest < number[i]) {
      largest = number[i];
    }
  }
  return largest;}

int BinarySearch(int number[],int key){
  int start=0;
  int end = MAX-1;
  while(start <= end){
    int mid = (start+end)/2;
    if (number[mid] == key) {
      return mid;
    }
    if (number[mid] < key) {
      start = mid+1;
    }else {end =mid-1;
    }
  }
  return -1;
}

int main()
{int number[MAX]={2,4,6,8,10,12,14,16,18,20};
  int key ;
  scanf("%d",&key);
  int index = LinearSearch(number,key);
  if (index == -1) {
    printf("\n Key Not found ");
  }else {printf("\n key is index :%d",index);
  }

  printf("\n largest Number is :%d\n",LargestNumber(number));

  printf(" BinarySearch techniqe find index is : %d\n",BinarySearch( number, key));
  return 0;
}
