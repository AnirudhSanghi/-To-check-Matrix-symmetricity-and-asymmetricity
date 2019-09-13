#include<stdio.h>
int main(){
int num=0;
int i,j,l,n;
int size;
   printf("Enter The Size Of Matrix -");
   scanf("%d",&size);          // take input
   printf("Inputing Matrix Of Size %d * %d\n",size,size);
   int Matrix[size][size];
   for(i=0;i<size;i++){
       for(j=0;j<size;j++){
         int input;
         printf("Enter m[%d][%d] :",i,j);   
         scanf("%d",&Matrix[i][j]);         // take input and store in Matrix array
       }
    
   }
   
 
   printf("Your Matrix is: \n");	
   for(i=0;i<size;i++){
      for(j=0;j<size;j++){
         printf("%d ",Matrix[i][j]);       // print the matrix in row and column pattern
        
         
      }
       printf("\n");
       	
                 
   }  

   for(l=0;l<size;l++){
          for(n=0;n<size;n++){
                if(Matrix[l][n]==Matrix[n][l] && l!=n){    //check non symmetricity of matrix
                    num++;

                }


          }
   }		
   if(num==0){
      printf("your matrix is not  symmetric\n");       //give final output whether matrix is symmetric or not
   }
   else{
      printf("your matrix is  symmetric\n");
   }
   return 0;
}	
