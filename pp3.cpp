//
//  pp3.cpp
//  
//
//  Created by Rahul Thukral on 14/11/17.
//

   /* Define a class TEST in C++ with following description: Private Members TestCode of type integer Description of type string NoCandidate of type integer CenterReqd (number of centers required) of type integer A member function CALCNTR() to calculate and return the number of centers as (NoCandidates/100+1) Public Members  - A function SCHEDULE() to allow user to enter values for TestCode, Description, NoCandidate & call function CALCNTR() to calculate the number of Centres - A function DISPTEST() to allow user to view the co
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
    
    cout<<"Test code "<<TestCode<<"\nDescripton "<<Description<<"\nNo of candidate "   <<NoCandidate<<"\nCenter required "<<CenterReqd;
}


int main (){
    TEST obj;
    obj.SCHDULE();
    obj.DISPTEST();
    getch();
    return 0;
}
