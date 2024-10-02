/**
 * @ Author: Nived Krishna P K
 * @ Create Time: 2024-10-02 14:05:41
 * @ Modified by: 
 * @ Modified time: 2024-10-02 15:00:18
 * @ Description: Program to check number of 1’s in the binary equivalent of a given number.
 * @ Revisions: 0
 */

#include<stdio.h>

int count_number_of_one(int input);

void main(){
    int input;
    printf("Enter a number to check the number of 1's in the binary equivalent: ");
    scanf("%d",&input);
    
    printf("\nNumber of One's = %d",count_number_of_one(input));
}

//Function to find the number of 1's in a binary equivalent of a decimal number
int count_number_of_one(int input){

    int count_one=0;
    while(input>0)                  //continue till all bits have been found
        {   
           
            if(input%2==1)          // Check if the least significant bit is 1
                count_one++;        // increase count by 1

            input=input/2;          //divide the input by 2 to get the next bit
            
        }
    return count_one;               // Return total number of 1's
       
}
