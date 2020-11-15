#include<bits/stdc++.h>
using namespace std;

int main(){
    // test cases
    int testCase;
    cin>>testCase;

    // size of array or element in array
    int n;
    for(int i=0; i<testCase; i++){
        cin>>n;
        
        // creating an array of size n
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }

        // result max subarray length
        int result =2;


        // current suarray length
        int current =2;

        // previous common difference
        int pcd = arr[1]-arr[0];

        //while loop iterator
        int k=2;

        
        while(k<n){
            //if previous common difference is equal to current common difference, increment current by 1
            if(pcd==arr[k]-arr[k-1]){
                current ++;
            }

            
            else{
                pcd=arr[k]-arr[k-1];
                current =2;
            }

            //update the result by the max of (result, current)
            result = max(result,current);
            k++;
        }
        cout<<result<<endl;
    }
    
}