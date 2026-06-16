#include<stdio.h>
// binary XOR operations 
int main(){
    
    int arr[]={1,2,4,5};
    int xor =0;
    int xor1 =0;
    for(int i =1;i<=5;i++){
      xor =xor^i;
    }
    for(int i =0;i<4;i++){
      xor1=xor1^arr[i];

    }
 printf("%d",xor^xor1);

    
    // left / right swift

    // // Right shift by one
    // int last = arr[n - 1];
    // for(i = n - 1; i > 0; i--) {
    //     arr[i] = arr[i - 1];
    // }
    // arr[0] = last;

    // printf("Array after right shift:\n");
    // for(i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
 
   

    // swaping
    // code to swap number using xor
//    int a =5 ,b=3; 
//    a=a^b;
//    b=a^b;
//    a=a^b;

//    printf("%d\n",a);  // ans = 3
//      printf("%d",b); // 5

      // to find xor 
     
    //  for(int i=0;i<5;i++){
    //  xor =xor^arr[i];
    //  }
    // printf("%d",xor);
 
    return 0;


}                                 