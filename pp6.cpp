//
//  pp6.cpp
//  
//
//  Created by Rahul Thukral on 14/11/17.
//

/*Define a class REPORT with the following specification: Private members : adno    4 digit admission number name    20 characters marks    an array of 5 floating point values average    average marks obtained GETAVG()    a function to compute the average obtained in five subject Public members: READINFO()    function to accept values for adno, name, marks. Invoke     the function GETAVG()  DISPLAYINFO()     function to display all data members of report on the       screen. You should give function definitions.
*/

#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class REPORT{
    private:
        int adno;
        char name[20];
        float marks[5];
        float average;
    
        void GETAVG(){
        
            average = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
        
        }
    
    public:
        void READINFO();
        void DISPLAYINFO();
};


void REPORT::READINFO(){
    
    
    do{
        cout<<"Enter 4 digit admission number ";
        cin>>adno;
    }while(adno<999 || adno>10000);
    
    cout<<"Enter name";
    gets(name);
    cout<<"Enter marks in ";
    
    for(int i=0;i<5;i++){
        cout<<"Subject "<<i+1<<":";
        cin>>marks[i];
    };
    
    GETAVG();
}



void REPORT::DISPLAYINFO(){
    
    cout<<"Admission number:"<<adno<<" Name:"<<name<<" Marks are:"<< marks[0]<<" "<< marks[1]<<" "<<marks[2]<<" "<< marks[3]<<" "<< marks[4]<<" Average:"<<average;
}


int main(){
    
    REPORT obj;
    obj.READINFO();
    obj.DISPLAYINFO();
    
    getch();
    return 0;
}

