/*16. Write a C program that prints the following patterns for the input of n=4. The value of n is input by the user
   1
  12
 123
1234
*/

#include<stdio.h>



int main(){
 int n;
 printf("enter a number :");
 scanf("%d", &n);
 for(int i = 1 ; i<=n ;i++){
    for(int j = n -1 ; j>=i ; j--){
       printf(" ");
    }
    for(int k = 1 ; k <= i ; k++){
        printf("%d", k);
    }
    printf("\n");
 }
 return 0;
}

