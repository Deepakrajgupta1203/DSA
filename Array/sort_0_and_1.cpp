
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={0,1,1,0,0,1,1};
    
    int i=0;
    int j=i+1;
    
    for(int x=0;x<arr.size();x++){
        if(arr[x]==1){
            i=x;
            break;
        }
        
    }
    
    while(i<arr.size()&&j<arr.size()){
        
        if(arr[i]==arr[j]){
            j++;
        }else{
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        
    }
    
    for(auto &val:arr){
        cout<<val<<" ";
    }
    

    return 0;
}
