//
//  pp.cpp
//  
//
//  Created by Rahul Thukral on 14/11/17.
/*
     Define a class batsman with the following specifications: Private members: bcode    4 digits code number bname    20 characters innings, notout, runs    integer type batavg    it is calculated according to the formula       batavg =runs/(innings-notout) calcavg()    Function to compute batavg Public members: readdata()    Function to accept value from bcode, name, innings,        notout and invoke the function calcavg() displaydata()    Function to display the data members on the screen.
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class batsman{
    int bcode;
    char bname[21];
    int innings;
    int notout;
    int runs;
    float batavg;
    
    void calcavg(){
        
        batavg=runs/(innings-notout);
    }
    
    public :
    void readdata ();
    void displaydata();
}; //end of class batsman


void batsman::readdata (){
    
    cout<<"Enter batsman code ";
    cin>> bcode;
    cout<<"Enter batsman name ";
    gets(bname);
    cout<<"Enter innings";
    cin>>innings;
    cout<<"Enter notout";
    cin>>notout;
    cout<<"Enter runs";
    cin>>runs;
    calcavg();

}// to enter batsman code, name, innings,notout and runs & will calculate avg


void batsman::displaydata(){

    cout<<"Batsman code "<<bcode<<"\nBatsman name "<<bname<<"\nInnings "<<innings<<"\nNot out "<<notout<<"\nRuns "<<runs<<"\nBatting Average "<<batavg;

}


int main()
{
    batsman obj;
    obj.readdata();
    obj.displaydata();
    getch();
    return 0;
}


