#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int arr[MAX_SIZE];
using namespace std;


void arrInput(int x)//INITIALIZE A DEFAULT ARRAY
{
        int c;
        for(c=1; c<=x; c++)
        {
                arr[c]=c+100;
        }

}

void print(int x)//prints array
{
        int i;
        for(i=1; i<=x; i++)
        {
                cout<<"elements are at "<<i<<"="<<arr[i]<<endl;
        }
}

int insertion(int n)//insertion algo
{
        int place,item;
        cout<<"Enter place you want to enter = ";
        cin>>place;
        cout<<"Enter Item you want to enter =";
        cin>>item;

        int i;
        for(i=n; i>=place; i--)
        {
                arr[i+1]=arr[i];

        }
        arr[place]=item;
        return n++;



}

int deltetion(int n)
{
        int place,i;
        cout<<"Enter location you want to delete = ";
        cin>>place;

        for(i=place; i<=n; i++)
        {
                arr[i]=arr[i+1];
        }
        return n--;

}



int main()
{
        int arrSize,operation,control,cont;

        cout<<"Enter Size of Array =";
        cin>>arrSize;
        arrInput(arrSize);

        do {

                cout<<"Enter operation you want to perform\n"<<"1.Transversing\n"<<"2.Insertion\n"<<"3.deletion\n";
                cin>>operation;

                switch (operation)
                {
                case 1:
                        print(arrSize);
                        break;

                case 2:
                        arrSize=insertion(arrSize);
                        cout<<"*************NEW ARRAY WITH NEW ELEMENT AT YOUR GIVEN LOCATION************\n";
                        print(arrSize);
                        break;

                case 3:
                        arrSize=deltetion(arrSize);
                        cout<<"*************NEW ARRAY WITH ITEM DELETED FROM YOUR GIVEN LOCATION************\n";
                        print(arrSize);
                        break;

                default:
                        cout<<"enter correct operation\n";
                        control=1;
                        break;

                }
                cout<<"Do you want to continue\n"<<"1.Yes\n"<<"2.No\n";
                cin>>cont;
                switch(cont)
                {
                case 1: control=1; system("cls"); break;
                case 2: cout<<"Thanks for using software\n"; control=0; break;
                default: cout<<"Enter Correct option\n"; break;
                }

        }
        while(control==1);

        getch();
        return 0;
}
