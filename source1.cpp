/////////////////Hospital Management system//////////////
///////////Header files//////////
#include<iostream>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>

////////////////Function declaration////

void menu();
void pascode();
void cpascode();

using namespace std;

///////////////////////////Class one////////////

class One
{
public:
    virtual void get()=0;
    virtual void show ()=0;


};

////////////////////////class information//////////

class Info: public One
{
public:

    char name[50], time[50];
    int num,age;
    void get()
    {
        system("cls");
        cin.sync();
        cout<<"\n Enter the patient name = ";
        cin.getline(name,50);
         cout<<"\n Enter the appointment time = ";
        cin.getline(time,50);
         cout<<"\n Enter Age = ";
        cin>>age;
         cout<<"\n Enter the appointment no = ";
        cin>>num;
    }

    void show ()
    {
        cout<<"\n Name = "<<name;
        cout<< "\n Age = "<<age;
        cout<<"\n No = "<<num;
        cout<<"\n Time = "<<time;
    }
};

//////////////////////class rana///////////////

class Rana : public Info
{
public:
    Info a1;

    void get()
    {
        system("cls");
        ofstream out ("Rana.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(Info));
        out.close();
        cout<<"Your Entry has been saved";
        getch();
        menu();
    }

    void show()
    {
        /*ifstream is an input file stream.
        It is a special kind of an istream that reads in data
        from a data file.
        ofstream is an output file stream.
        It is a special kind of ostream that writes data
        out to a data file.*/
        ifstream in ("Rana.txt");
         if (in==NULL)
        {
            cout<<"\n No data in the file";
            cout<<"\n Press any key to continue";
            getch(); //used to hold the output screen for some time until the user passes a key
            menu(); //calling the menu function (declared previously)
        }
        else
        {
            while (!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }


};

/////////////////////////class Dr Waqar //////////////////////////

class Waqar : public Info
 {
public:
    Info a1;

    void get()
    {
        system("cls");
        ofstream out ("Rana.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(Info));
        out.close();
        cout<<"Your Entry has been saved";
        getch();
        menu();
    }

    void show()
    {
        /*ifstream is an input file stream.
        It is a special kind of an istream that reads in data
        from a data file.
        ofstream is an output file stream.
        It is a special kind of ostream that writes data
        out to a data file.*/
        ifstream in ("Rana.txt");
        if (in==NULL)
        {
            cout<<"\n No data in the file";
            cout<<"\n Press any key to continue";
            getch(); //used to hold the output screen for some time until the user passes a key
            menu(); //calling the menu function (declared previously)
        }
        else
        {
            while (!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }

};


//////////////////////class Dr. Ahmed///////////////////

class Ahmed : public Info
{
public:
    Info a1;

    void get()
    {
        system("cls");
        ofstream out ("Rana.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(Info));
        out.close();
        cout<<"Your Entry has been saved";
        getch();
        menu();
    }

    void show()
    {
        /*ifstream is an input file stream.
        It is a special kind of an istream that reads in data
        from a data file.
        ofstream is an output file stream.
        It is a special kind of ostream that writes data
        out to a data file.*/
        ifstream in ("Rana.txt");
        if (in==NULL)
        {
            cout<<"\n No data in the file";
            cout<<"\n Press any key to continue";
            getch(); //used to hold the output screen for some time until the user passes a key
            menu(); //calling the menu function (declared previously)
        }
        else
        {
            while (!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            getch();
            menu();
        }
    }

};

class Staff: public One
{
 public:

     char all[999];
     char name[50],age[20],sal[30],pos[20];

     void get()
     {
         ofstream out("staff.txt",ios::app)
         {

        system("cls");
        cin.sync();
        cout<<"\n Enter Name = ";
        cin.getline(name,50);
        cout<<"\n Enter age = ";
        cin.getline(age,20);
        cout<<"\n Enter salary = ";
        cin.getline(sal,30);
        cout<<"\n Enter working position";
        cin.getline(pos,20);

         }
         out<<"\n Name = "<<name<<"\n Age "<<age<<"\n salary"<< sal<<"\n Working position"<<pos;
         out.close();
         getch();
         menu();

     }

     void show ()
     {
         ifstream in ("staff.txt");

         if (!in)
         {
             cout<<"File open error";
         }
         while(!(in.eof()))
         {
             in.getline(all,999);
             cout<<all<<endl;
         }
         in.close();
         cout<<"\n\n\t\t Press any key to continue : ";
         getch();
         menu();
     }


};


////////////////class information/////////////////

class Information
{


};
