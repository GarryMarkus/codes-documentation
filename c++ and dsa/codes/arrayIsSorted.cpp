#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int flag=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]) {
            flag++;
            break;
        }
    }
    if(flag==0) cout << "Sorted";
    if(flag==1) cout << "Not-Sorted";
    return 0;
}