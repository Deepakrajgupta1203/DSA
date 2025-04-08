
#include <iostream>
using namespace std;
int linear_search(int arr[],int size,int target){
    
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    
    return -1;
}
int main()
{
   int arr[5]={1,2,3,4,5};
   
   int index=linear_search(arr,5,5);
   
    if(index!=-1){
       cout<<"Element present at index :"<<index;
   }else{
       cout<<"Element not found";
   }

    return 0;
}
