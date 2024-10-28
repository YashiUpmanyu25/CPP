#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main(){
    int n=20;
    int first[20]={1,2,3,4,4,5,2,2,32,1,2};
    printArray(first,20);
    int firstsize=sizeof(first)/sizeof(int);
    cout<<"the size of first array is :"<<firstsize<<endl;

}