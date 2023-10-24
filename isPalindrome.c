#include<stdio.h>


int isPalindrome(int num){
  int tmp;
  int rightDigit , reverse = 0;
  tmp = num;
  while(num != 0){
    rightDigit = num%10;
    reverse = (reverse*10)+rightDigit;
    num = num/10;
  }
  if(tmp == reverse){
    return 1;
  }else{
    return 0;
  }
}
int main(){
  int num;
  printf("introduce your number : \n ");
  scanf("%d",&num);
  if(isPalindrome(num)){
    printf("%d is a palindrome",num);
  }else{
    printf("%d is not palindrome",num);
  }
  return 0;
}
