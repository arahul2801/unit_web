//
//  pp1.cpp
//  
//
//  Created by Rahul Thukral on 14/11/17.
//
/*
 
      Define a class student with the following specification Private members of class student admno    integer sname    20 character eng. math, science    float total    float ctotal()    a function to calculate eng + math + science with float return type. Public member function of class student Takedata()    Function to accept values for admno, sname, eng, science           and invoke ctotal() to calculate total. Showdata()    Function to display all the data members on the screen.

 
 */


#include<iostream.h>
#include<conio.h>
#include<stdio.h>


class student{
    
    private:
        int admno;
        char sname[20];
        float eng;
        float math;
        float science;
        float total;
        float ctotal(){
        return eng+math+science;
    }
    
    
    public:
        void Takedata(){
            cout<<"Enter admission number ";
            cin>> admno;
            cout<<"Enter student name " ;
            gets(sname);
            cout<< "Enter marks in english";
            cin>>eng;
            cout<< "Enter marks in math";
            cin>>math;
            cout<< "Enter marks in science";
            cin>>science;
            total=ctotal();
    }
    
    
        void Showdata(){
            
        cout<<"Admission number "<<admno<<"\nStudent name "<<sname<<"\nEnglish "<<eng<<"\nMath "<<math<<"\nScience "<<science<<"\nTotal "<<total;
    
    }
    
};



int main (){
    
    clrscr();
    student obj ;
    obj.Takedata();
    obj.Showdata();
    getch();
    return 0;
}

