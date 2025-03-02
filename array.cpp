#include<iostream>
using namespace std;
int array[20], size, pos, num;

int main(){
   cout<<"Enter the size: ";
   cin>>size;
   for (int i = 0; i< size ; i++){
     cout<<"Enter the value: ";
     cin>> array[i];
   }
     for (int i=0; i< size; i++){
     cout<<array[i] << " ";
}


    cout<<"\n" <<"Enter position: ";
    cin>>pos;
    cout<<"Enter value: ";
    cin>>num;
    if(pos <0 || pos >size + 1){
        cout<<"Invalid position.";
    }
    else{
    for(int i = size - 1; i >= pos - 1;i--){
        array[i+1]= array[i];
        }
        array[pos-1]= num;
        size++;
        for (int i=0; i< size; i++){
        cout<<array[i] << " ";
    }
}
}
