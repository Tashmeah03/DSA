#include<iostream>
using namespace std;
int array[50], size, pos, num;

void delete_position(){
   cout<<"\n" <<"Enter position: ";
   cin>>pos;
    if(pos <=0 || pos >size ){
        cout<<"Invalid position.";
    }
    else{
        for(int i=pos -1; i<size-1 ; i++){
            array[i]= array[i+1];
        }
        size --;
    }

    for(int i=0; i<size ; i++){
        cout<< array[i] << " ";
    }
}

void delete_first(){
    for(int i=0; i<size-1; i++){
        array[i]=array[i+1];
    }
        size--;
    for(int i=0; i<size; i++){
        cout<< array[i] << " ";
    }
}

void delete_last(){
    size--;
    for(int i=0; i<size; i++){
        cout<< array[i] << " ";
    }
}

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
}

