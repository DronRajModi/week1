#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"enter the values "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    int avg = sum/5;
    cout<<avg<<endl;
    return 0;
}
