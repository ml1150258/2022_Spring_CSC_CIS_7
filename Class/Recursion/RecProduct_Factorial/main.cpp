/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 20th, 2022, 10:15 AM
 * Purpose:  Recursive Product or Factorial
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>      //Math Library
using namespace std;  //Library Scope

//User Libraries

//Global Constants
//Science and Math, Conversions, Higher Dimensions const to follow

//Function Prototypes
int recProd(int);
int forProd(int);

//Execution Starts Here
int main(int argc, char** argv){
    //Set Random Number Seed Here
    
    //Declare Variables - Known and Unknown, units, range, description
    int n;
    
    //Initialize Variables
    n=10;
    
    //Map inputs to outputs -> i.e. process the inputs
    
    //Display the outputs
    cout<<"Recursive Product/Factorial f("<<n<<")="<<recProd(n)<<endl;
    cout<<"For-Loop Product/Factorial f("<<n<<")="<<forProd(n)<<endl;
    
    //Clean up - File closing, memory de-allocation, etc....

    //Exit Stage Right!
    return 0;
}

//Function Implementations

int recProd(int n){
    //Base Condition
    if(n<=0)return 0;
    if(n==1)return 1;
    //Recursion
    return recProd(n-1)*n;
}

int forProd(int n){
    int prod=1;
    for(int i=1;i<=n;i++){
        prod*=i;
    }
    return prod;
}
