#include <iostream>
using namespace std;

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout <<endl;
}

void swapAletranate(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
       if (i+1< size)
       {
          swap(arr[i],arr[i+1]);       }
       
    }
    
}
int main(){
    int arr[6] ={1,2,3,4,5,6} ;
    int odd[5] ={1,2,3,4,5};

   swapAletranate(arr,6);
   printArray(arr,6);

   swapAletranate(odd,5);
   printArray(odd,5);
    return 0 ;
}