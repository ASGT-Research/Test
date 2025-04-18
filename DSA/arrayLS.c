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

int main()
{int number[MAX]={2,4,6,8,10,12,14,16,18,20};
  int key ;
  scanf("%d",&key);
  int index = LinearSearch(number,key);
  if (index == -1) {
    printf("Key Not found ");
  }else {printf("key is index :%d",index);
  }
  return 0;
}
