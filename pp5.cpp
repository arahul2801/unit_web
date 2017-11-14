//
//  pp5.cpp
//  
//
//  Created by Rahul Thukral on 14/11/17.
//
/*
 Define a class BOOK with the following specifications : Private members of the class BOOK are BOOK NO    integer type BOOKTITLE    20 characters PRICE    float (price per copy) TOTAL_COST()    A function to calculate the total cost for N number of        copies where N is passed to the function as argument.  Public members of the class BOOK are INPUT()    function to read BOOK_NO. BOOKTITLE, PRICE PURCHASE()    function to ask the user to input the number of copies to be      purchased. It invokes TOTAL_COST() and prints the total       cost to be paid by the user.  Note : You are also required to give detailed function definitions.

*/

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class BOOK{
    
    int BOOKNO;
    char BOOKTITLE[20];
    float PRICE;
    
    void TOTAL_COST(int N){
        float tcost;
        tcost=PRICE*N;
        cout<<tcost;
    }

public:
        void INPUT(){
            cout<<"Enter Book Number ";
            cin>>BOOKNO;
            cout<<"Enter Book Title ";
            gets(BOOKTITLE);
            cout<<"Enter price per copy ";
            cin>>PRICE;
        }
    
        void PURCHASE(){
            int n;
            cout<<"Enter number of copies to purchase ";
            cin>>n;
            cout<<"Total cost is ";
            TOTAL_COST(n);
        }
    };


int main(){
    BOOK obj;
    obj.INPUT();
    obj.PURCHASE();
    getch();
    return 0;
}

