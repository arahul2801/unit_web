//
//  pp4.cpp
//  
//
//  Created by Rahul Thukral on 14/11/17.
//

/*
 Define a class in C++ with following description: Private Members A data member Flight number of type integer A data member Destination of type string A data member Distance of type float A data member Fuel of type float A member function CALFUEL() to calculate the value of Fuel as per the following criteria Distance            Fuel <=1000            500 more than 1000 and <=2000         1100 more than 2000             2200 Public Members A function FEEDINFO() to allow user to enter values for Flight Number, Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel A function SHOWINFO() to allow user to view the content of all the data members

*/


#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class TEST{
    
    private:
        int TestCode;
        char Description[30];
        int NoCandidate;
        int CenterReqd;
    
        int CALCNTR(){
            return NoCandidate/100+1;
        }

    public:
        void SCHDULE();
        void DISPTEST();
};

void TEST::SCHDULE(){
    cout<<"Enter Test code ";
    cin>> TestCode;
    cout<<"Enter description ";
    gets(Description);
    cout<< "Enter no of candidates ";
    cin>>NoCandidate;
    CenterReqd=CALCNTR();
}


void TEST :: DISPTEST(){
    cout<<"Test code "<<TestCode<<"\nDescripton "<<Description<<"\nNo of candidate "<<NoCandidate<<"\nCenter required "<<CenterReqd;

}


int main (){
    TEST obj;
    obj.SCHDULE();
    obj.DISPTEST();
    getch();
    return 0;
}

