#include<iostream>
using namespace std;
int array[50], size, pos, num;
int main()
{
   cout<<"Enter size: ";
   cin>>size;
   for(int i =0; i<size; i++){
    cout<<"Enter value: ";
    cin>>array[i];
   }
   for(int i =0; i<size; i++){
    cout<<array[i] <<" ";
   }
   cout<<"\n" <<"Enter position: ";
   cin>>pos;
    if(pos <=0 || pos >size + 1){
        cout<<"Invalid position.";
    }
    else{
        for(int i=pos -1; i<=size -1; i++){
            array[i]= array[i+1];
        }
            size --;
    }

    for(int i=0; i<=size -1; i++){
        cout<< array[i] << " ";
    }
    }

