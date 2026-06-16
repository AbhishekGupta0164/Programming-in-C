
#include <stdio.h>

// to print a number
// void sum(int y)
// {
//     if (y == 0){
//         return ;
//     }
//      sum(y - 1);
//      printf("%d",y);
// }

// int main()
// {
//      sum(5);
// }

// to print sum of n number
// int sum1(int y)
// {
//     if (y == 0){
//         return 0;
//     }
//      return y+ sum 1(y-1);
//      printf("%d",y);
// }

// int main()
// {
//      int sum=sum1(5);
//  printf("%d",sum);
//  return 0;
// }

// factorial of no
//  int factorial(int y){
//      if(y==0){  //base case
//          return 1;
//      }
//      return y*factorial(y-1);

// }
// int main(){
//  printf("%d",factorial(1));
//     return 0;
// }

// power of x^y
//  int power(int x,int y){
//      if(y==0){  //base case
//          return 1;
//      }
//      return x*power(x,y-1);
//  }
//  int main(){
//      int data=power(3,4);
//      printf("%d",data);
//      return 0;

// }

// array sum
int sum(int arr[], int n)
{
  if (n == 0)
  {
    return 0;
  }
  return arr[n - 1] + sum(arr, n - 1);
}
int main()
{
  int n = 5;
  int arr[5] = {5, 6, 3, 4, 1};
  int sum = arrsum(arr, n);
  printf("%d", sum);
}