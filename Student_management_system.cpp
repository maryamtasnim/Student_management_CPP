#include <conio.h>
#include<process.h>
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <algorithm>
using namespace std;
class Student
{

    string name;
    string department;
    string hometown;
    string blood_group;
    string session;
    string student_id;
public:
    void getdata();
    void display();
    string get_Name()
    {
        return name;



    }
    string get_Id()
    {
        return  student_id;
    }
    string get_hometown()
    {
        return hometown;
    }

    string get_bloodgroup()
    {
        return blood_group;
    }

    string get_department()
    {
        return department;
    }

    string get_session()
    {
        return session;
    }
} s;
void Student::getdata()
{


    cin.ignore();
    cout<<"Enter Name           : ";
    getline(cin,name);

    cout<<"Enter Department     : ";
    getline(cin,department);

    cout<<"Enter Student Id     : ";
    cin>>student_id;

    cout<<"Enter Hometown       : ";
    cin>>hometown;

    cout<<"Enter Blood Group    : ";
    cin>>blood_group;

    cout<<"Enter Session(year-year)  : ";
    cin>>session;




}
void Student::display()
{
    cout<<"=================================================\n";
    cout<<" Name        : "<<name<<"\n";
    cout<<" Department  : "<<department<<"\n";
    cout<<" Student Id  : "<<student_id <<"\n";
    cout<<" Hometown    : "<<hometown<<"\n ";
    cout<<" Blood Group : "<<blood_group<<"\n";
    cout<<" Session     : "<<session<<"\n";
}

void menu();
void serch();
void add();
void displayall();
void Modify();
void Delete();
void options();
void Trash();
void SizeofFile();
void Exit_program();
int main ()
{

    int n;
    int i;
    string rno;
    string nam ;
    string hometow;
    string departmnt;
    string bldgrp;
    string sssion;
    fstream fio("stud.dat",ios::in|ios::out|ios::binary);
    menu();
    getch();
    return 0;
}

void options()
{
    cout<<"\n\t...Student Management System...\n";

    cout<<"\t1. Add the record...\n";
    cout<<"\t2. Search the record...\n";
    cout<<"\t3. Display all records...\n";
    cout<<"\t4. Modify the Record...\n";
    cout<<"\t5. Delete the Record...\n";
    cout<<"\t6. View Deleted Records...\n";
    cout<<"\t7. View the Size of File...\n";
    cout<<"\t8. EXIT.... \n";
    cout<<"\nEnter Your Choice    : ";

}

void menu()
{
    int ch;
    options();

    cin>>ch;
    while(ch)
    {


        switch(ch)
        {
        case 1:
            add();
            break;
        case 2:
            serch();
            break;
        case 3:
            displayall();
            break;
        case 4:
            Modify();
            break;
        case 5:
            Delete();
            break;
        case 6:
            Trash();
            break;
        case 7:
            SizeofFile();
            break;
        case 8:
            Exit_program();
            break;
        default:
            cout<<"Wrong Input please enter the correct value....";
        }



        cin>>ch;
    }

}
void serch()
{




    cout<< "Which way you want to search ? \n";


        cout<<" 1.Search By Name \n";
        cout<<" 2.Search By Student ID\n";
        cout<<" 3.Search By Hometown \n";
        cout<<" 4.Search By Department \n";
        cout<<"Enter your Choice : ";


    int choic;
    cin>>choic;
    int i = 0;








        switch(choic)
        {
        case 1 :
            {

             string nam;
             for(int i = 0;i<1;i++)
             {
                 nam[0]=toupper(nam[i]);

             }


             char found='n';
             ifstream fin("stud.dat",ios::in|ios::binary);

             cin.ignore();
             cout<<"Enter Name : ";
             getline(cin,nam);

          while(fin.read((char*)&s,sizeof(s)))

          {

          if(s.get_Name()==nam)
          {
            s.display();
            found ='y';
           }
          }

    if(found=='n')
    cout<<"\nThe Name "<<nam<<" is not in the file...\n";
         fin.close();

         system("pause");

         cout<<" Do you search again ?\n";
         cout<<"1. Yes \n";
         cout<<"2. No  \n";
         cout<<"Enter Choice : ";

         int again;
         cin>>again;



        switch(again)
        {
        case 1 :
            {
                return serch();
            }


        case 2 :
            {
                return options();
            }
        }



            }


         case 2:
             {

           ifstream fin("stud.dat",ios::in|ios::binary);
           int i = 0;
           char found='n';
            string rno ;
            cin.ignore();
             cout<<"Enter Student ID : ";
             getline(cin,rno);



          while(fin.read((char*)&s,sizeof(s)))
        {
          if(s.get_Id()==rno)
          {
            s.display();
            found='y';
           }


        }
    if(found=='n')
        cout<<"\nThe Name "<<rno<<" is not in the file...\n";
    fin.close();

    system("pause");

    cout<<" Do you search again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";

    cout<<"Enter Choice : ";


       int again;
       cin>>again;



        switch(again)
        {
        case 1 :
            {
                return serch();
            }


        case 2 :
            {
                return options();
            }
        }




             }



         case 3:
             {
            string hometow ;

             char found='n';
             cin.ignore();
             cout<<"Enter Hometown : ";
             getline(cin,hometow);
              ifstream fin("stud.dat",ios::in|ios::binary);

          while(fin.read((char*)&s,sizeof(s)))
        {
          if(s.get_hometown()==hometow)
          {
            s.display();
            found='y';
           }


        }
    if(found=='n')
        cout<<"\nThe Hometown "<<hometow<<" is not in the file...\n";
    fin.close();

    system("pause");

    cout<<" Do you search again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";
    cout<<"Enter Choice : ";
    int again;
    cin>>again;



        switch(again)
        {
        case 1 :
            {
                return serch();
            }


        case 2 :
            {
                return options();
            }
        }



             }

        case 4:
             {
            string departmnt ;

             char found='n';
             cin.ignore();
             cout<<"Enter Department : ";
             getline(cin,departmnt);
              ifstream fin("stud.dat",ios::in|ios::binary);

          while(fin.read((char*)&s,sizeof(s)))
        {
          if(s.get_department()==departmnt)
          {
            s.display();
            found='y';

           }

        }
    if(found=='n')
        cout<<"\nThe Department "<<departmnt<<" is not in the file...\n";
    fin.close();
    system("pause");

    cout<<" Do you search again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";
    cout<<"Enter Choice : ";
    int again;
    cin>>again;


        switch(again)
        {
        case 1 :
            return serch();

        case 2 :
            return options();
        }





             }





             default:
            cout<<"Wrong Input please enter the correct value....";
        }












}

void displayall()
{
    ifstream fin("stud.dat",ios::in|ios::binary);
    while(fin.read((char*)&s,sizeof(s)))
    {
        s.display();
    }
    fin.close();
    system("pause");
    options();

}
void add()
{
    char ch='y';
    ofstream fout("stud.dat",ios::out|ios::app|ios::binary);
    while(ch=='y'||ch=='Y')
    {
        s.getdata();
        fout.write((char*)&s,sizeof(s));

    cout<<"\nData Appended and Transferred to file...\n";
    fout.close();
    cout<<" Do you want to add again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";
    cout<<"Enter Choice : ";
    int add_again;
    cin>>add_again;


        switch(add_again)
        {
        case 1 :
            return add();

        case 2 :
            return options();
        }



    }




}

void Modify()
{
    string rno;
    int i = 0;
    char found='n';
    cout<< " \n";
    cin.ignore();
    cout<<"\nEnter the Student Id whose record is to be modified: ";
    getline(cin,rno);
    ifstream fin("stud.dat",ios::in|ios::binary);
           while(fin.read((char*)&s,sizeof(s)))
        {
          if(s.get_Id()==rno)
          {
            s.display();
            found='y';
           }

        }




        cout<<"\n What are you going to edit ? : \n";
        cout<<" 1.Edit  Name \n";
        cout<<" 2.Edit  Department\n";
        cout<<" 3.Edit  Hometown\n";
        cout<<" 4.Edit  Blood Group\n";
        cout<<" 5.Edit  Session\n";
        cout<<"Enter your Choice : ";

        int edit_option;
        cin>>edit_option;

        while (edit_option)
        {
            switch(edit_option)

            {
            case 1 :
                {

                  fstream fio("stud.dat",ios::in|ios::out|ios::binary);
                  string nam;
                  char found='n';
                  fio.seekg(0);


    while(fio)
    // while(fio.read((char*)&s,sizeof(s)))
    {
    //fio.read((char*)&s,sizeof(s));
        int loc=fio.tellg();
        fio.read((char*)&s,sizeof(s));
      //fio.read((char*)&s,sizeof(s));
        if(s.get_Id()==rno)
        {
            cout<<"Enter New Name : ";
            getline(cin,nam);
            cin>>nam;
            found='y';
            fio.seekg(loc);
            fio.write((char*)&s,sizeof(s));
            cout<<"\nYour Name "<<nam
                <<" has been updated....\n";
        }
    }

    fio.close();


    system("pause");

    cout<<" Do you modify again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";
    cout<<"Enter Choice : ";
    int edit_again;
    cin>>edit_again;


        switch(edit_again)
        {
        case 1 :
            return Modify();

        case 2 :
            return options();
        }



    }



    case 2 :
                {

                  fstream fio("stud.dat",ios::in|ios::out|ios::binary);
                  string departmnt;
                  char found='n';
                  fio.seekg(0);


    while(fio)
     while(fio.read((char*)&s,sizeof(s)))
    {
    fio.read((char*)&s,sizeof(s));
        int loc=fio.tellg();
        fio.read((char*)&s,sizeof(s));
      fio.read((char*)&s,sizeof(s));
        if(s.get_Id()==rno)
        {

            cout<<"Enter New Department : ";
            getline(cin,departmnt);
            found='y';
            fio.seekg(loc);
            fio.write((char*)&s,sizeof(s));
            cout<<"\nYour Department "<<departmnt
                <<" has been updated....";
        }
    }
    fin.close();

        system("pause");

    cout<<" Do you modify again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";
    cout<<"Enter Choice : ";
    int edit_again;
    cin>>edit_again;


        switch(edit_again)
        {
        case 1 :
            return Modify();

        case 2 :
            return options();
        }




    }

    case 3 :
                {

                  fstream fio("stud.dat",ios::in|ios::out|ios::binary);
                  string hometow;
                  char found='n';
                  fio.seekg(0);


    while(fio)
     while(fio.read((char*)&s,sizeof(s)))
    {
    fio.read((char*)&s,sizeof(s));
        int loc=fio.tellg();
        fio.read((char*)&s,sizeof(s));
      fio.read((char*)&s,sizeof(s));
        if(s.get_Id()==rno)
        {
            cout<<"Enter New Hometown : ";
            getline(cin,hometow);
            found='y';
            fio.seekg(loc);
            fio.write((char*)&s,sizeof(s));
            cout<<"\nYour Hometown "<<hometow
                <<" has been updated....";
        }
    }

    fio.close();

        system("pause");

    cout<<" Do you modify again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";
    cout<<"Enter Choice : ";
    int edit_again;
    cin>>edit_again;


        switch(edit_again)
        {
        case 1 :
            return Modify();

        case 2 :
            return options();
        }



    }
    case 4 :
                {

                  fstream fio("stud.dat",ios::in|ios::out|ios::binary);
                  string bldgrp;
                  char found='n';
                  fio.seekg(0);


    while(fio)
     while(fio.read((char*)&s,sizeof(s)))
    {
    fio.read((char*)&s,sizeof(s));
        int loc=fio.tellg();
        fio.read((char*)&s,sizeof(s));
      fio.read((char*)&s,sizeof(s));
        if(s.get_Id()==rno)
        {
            cout<<"Enter New Blood Group : ";
            cin>>bldgrp;
            found='y';
            fio.seekg(loc);
            fio.write((char*)&s,sizeof(s));
            cout<<"\nYour Blood Group "<<bldgrp
                <<" has been updated....";
        }
    }

    fio.close();


        system("pause");

    cout<<" Do you modify again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";
    cout<<"Enter Choice : ";
    int edit_again;
    cin>>edit_again;


        switch(edit_again)
        {
        case 1 :
            return Modify();

        case 2 :
            return options();
        }


    }

    case 5 :
                {

                  fstream fio("stud.dat",ios::in|ios::out|ios::binary);
                  string sssion;
                  char found='n';
                  fio.seekg(0);


    while(fio)
     while(fio.read((char*)&s,sizeof(s)))
    {
    fio.read((char*)&s,sizeof(s));
        int loc=fio.tellg();
        fio.read((char*)&s,sizeof(s));
      fio.read((char*)&s,sizeof(s));
        if(s.get_Id()==rno)
        {
            cout<<"Enter New Session : ";
            getline(cin,sssion);

            found='y';
            fio.seekg(loc);
            fio.write((char*)&s,sizeof(s));
            cout<<"\nYour Session "<<sssion
                <<" has been updated....";
        }
    }
    fio.close();

    system("pause");

    cout<<" Do you modify again ?\n";
    cout<<"1. Yes \n";
    cout<<"2. No  \n";
    cout<<"Enter Choice : ";
    int edit_again;
    cin>>edit_again;


        switch(edit_again)
        {
        case 1 :
            return Modify();

        case 2 :
            return options();
        }



    }





            }

        }







}


void Delete()
{
    string rno;
    char found='n';
    fstream fio("stud.dat",ios::in|ios::out|ios::binary|ios::app);
    ofstream fout("temp.dat",ios::out|ios::binary|ios::app);
    ofstream out("trash.dat",ios::out|ios::binary|ios::app);

    cout<<"\nEnter the Student ID whose record is to be deleted: ";
    cin>>rno;

    while(fio.read((char*)&s,sizeof(s)))
    {
        if(s.get_Id()==rno)
        {
            out.write((char*)&s,sizeof(s));
            found='y';
            cout<<"ID "<<rno <<" has been deleted";
        }
        else
        {
            fout.write((char*)&s,sizeof(s));
        }
    }
    if(found=='n')
        cout<<"\nThe Student ID"<<rno<<" is not in the file...\n";
    fio.close();
    fout.close();
    remove("stud.dat");
    rename("temp.dat","stud.dat");
    system("pause");
}

void Trash()
{
    ifstream fin("trash.dat",ios::in|ios::binary);

    while(fin.read((char*)&s,sizeof(s)))
    {
        s.display();

    }
    fin.close();
    system("pause");

}
void SizeofFile()
{
    fstream fio("stud.dat",ios::in|ios::out|ios::binary);
    int size;
    int begin,last;
    begin=fio.tellg();
    while(fio.read((char*)&s,sizeof(s)));
    last=fio.tellg();
    fio.close();
    cout<<"\nThe Size of Stud.dat file is : "<<(last-begin)<<" bytes...\n";
    system("pause");
}

void Exit_program()
{
    exit(0) ;

}


