#include<iostream>
using namespace std;


int main()
{  
    system("cls");
    int n;

    cout<< "masukkan jumlah data : ";
    cin>>n;
    int* arr = new int[n];
    
    for (int i=0; i<5; i++)
    {
        cout<<"data ke -"<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<"output data : "<<endl;
    for (int i=0; i<5; i++)
    {
        cout<<"output data ke -"<<i+1<<": ";
        cout<<arr[i]<<endl;
    }
    
    
    return 0;
}