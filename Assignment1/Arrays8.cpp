// A program to delete an element from an array
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
void insertBeginning(int* array,int size, int element){
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i]==element? -1 : array[i];
    }
}
void showArray(int array[],int usize){
    for (int i = 0; i < usize ; i++)
    {
        cout<<array[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size];
    cout<<"Enter the Elements of the array below - "<<endl;
    getarray(array,size);
    int element;
    cout<<"Enter the Element to delete from the array : ";
    cin>>element;
    insertBeginning(array,size,element);
    cout<<"Array after deletion [ "; showArray(array,size); cout<<"]"<<endl;
return 0;}