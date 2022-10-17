//
// Created by shawm on 10-10-2022.
//
#include <conio.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class student
{
private:
    string s_name,grade,result;
    int s_roll;
    float per;
    float hin,eng,math,sci,sst,sum;
public:
    void menu();
    void insert();
    void display();
    void classToppers();
    void subjectToppersHindi();
    void deleted();
};

void student::menu() {
    start:
    int choice;
    char x;

    cout<<"\n..........................\n"<<endl;
    cout<<"1 Enter new Record"<<endl;
    cout<<"2 Display record"<<endl;
    cout<<"3 Delete Record"<<endl;
    cout<<"4 See Class Toppers"<<endl;
    cout<<"5 See Subject Toppers in Hindi"<<endl;
    cout<<"6 Exit"<<endl;
    cout<<"Please enter your choice"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            do {
                insert();
                cout<<"Add new record (y/n)"<<endl;
                cin>>x;
            }
            while(x=='y'|| x=='Y');
            break;

        case 2:
            display();
            break;

        case 3:
            deleted();
            break;

        case 4:
            classToppers();
            break;

        case 5:
            subjectToppersHindi();
            break;

        case 6:
            exit(0);

        default:
            cout<<"Invalid choice"<<endl;
    }
    goto start;
}

void student::insert() {

    fstream file;
    cout<<"Add details of student"<<endl;
    cout<<"Enter your name"<<endl;
    cin>>s_name;
    cout<<"Enter your roll"<<endl;
    cin>>s_roll;
    cout<<"Enter marks for 5 Subjects"<<endl;
    cout<<"Enter marks for hindi"<<endl;
    cin>>hin;
    cout<<"Enter marks for english"<<endl;
    cin>>eng;
    cout<<"Enter marks for maths"<<endl;
    cin>>math;
    cout<<"Enter marks for sci"<<endl;
    cin>>sci;
    cout<<"Enter marks for sst"<<endl;
    cin>>sst;

    sum = hin+eng+math+sci+sst;
    per = sum/5;
    if(per>=90)
    {
        grade = "A";
        result = "Excellent";
    }

    else if(per >=80 )
    {
        grade = "B";
        result  = "Very Good";
    }
    else if(per >=70)
    {
        grade = "C";
        result = "Good";
    }
    else if(per >= 50)
    {
        grade = "D";
        result = "Poor";
    }
    else
    {
        grade = "F";
        result = "Fail";
    }

    file.open("studentData.txt",ios::out | ios::app);
    file<<s_name<<" "<<s_roll<<" "<<hin<<" "<<eng<<" "<<math<<" "<<sci<<" "<<sst<<" "<<sum<<" "<<per<<" "<<grade<<" "<<result<<" ";
    file.close();


}

void student::display() {

    fstream file;
    cout<<"......................................"<<endl;
    cout<<"Student details"<<endl;
    file.open("studentData.txt",ios::in);
    if(!file)
    {
        cout<<"No data found"<<endl;
        file.close();
    }
    else
    {
        file>>s_name>>s_roll>>hin>>eng>>math>>sci>>sst>>sum>>per>>grade>>result;
        while(!file.eof())
        {

            cout<<"********************************************************************************"<<endl;
            cout<<"student name : "<<s_name<<endl;
            cout<<"student roll : "<<s_roll<<endl;
            cout<<"Student marks"<<endl;
            cout<<"Hindi :"<<hin<<endl;
            cout<<"English :"<<eng<<endl;
            cout<<"Maths :"<<math<<endl;
            cout<<"Science :"<<sci<<endl;
            cout<<"SST :"<<sst<<endl;
            cout<<"Sum Total :"<<sum<<endl;
            cout<<"Percentage :"<<per<<" %"<<endl;
            cout<<"Grade :"<<grade<<endl;
            cout<<"Result :"<<result<<endl;
            file>>s_name>>s_roll>>hin>>eng>>math>>sci>>sst>>sum>>per>>grade>>result;

        }
    }
    file.close();
}

void student::classToppers() {

    fstream file;
    cout<<"......................................"<<endl;
    cout<<"Class Toppers :"<<endl;
    file.open("studentData.txt",ios::in);
    if(!file)
    {
        cout<<"No data found"<<endl;
        file.close();
    }
    else
    {
        file>>s_name>>s_roll>>hin>>eng>>math>>sci>>sst>>sum>>per>>grade>>result;
        while(!file.eof())
        {
            if(sum>450)
            {
                cout<<"student name : "<<s_name<<endl;
                cout<<"student roll : "<<s_roll<<endl;
                cout<<"Student marks"<<endl;
                cout<<"Hindi :"<<hin<<endl;
                cout<<"English :"<<eng<<endl;
                cout<<"Maths :"<<math<<endl;
                cout<<"Science :"<<sci<<endl;
                cout<<"SST :"<<sst<<endl;
                cout<<"Sum Total :"<<sum<<endl;
                cout<<"Percentage :"<<per<<" %"<<endl;
                cout<<"Grade :"<<grade<<endl;
                cout<<"Result :"<<result<<endl;
                file>>s_name>>s_roll>>hin>>eng>>math>>sci>>sst>>sum>>per>>grade>>result;
            }
        }
    }
    file.close();
}

void student::subjectToppersHindi() {
    fstream file;
    cout<<"......................................"<<endl;
    cout<<"Subject Toppers in Hindi :"<<endl;
    file.open("studentData.txt",ios::in);
    if(!file)
    {
        cout<<"No data found"<<endl;
        file.close();
    }
    else
    {
        file>>s_name>>s_roll>>hin>>eng>>math>>sci>>sst>>sum>>per>>grade>>result;
        while(!file.eof())
        {
            if(hin > 90)
            {
                cout<<"student name : "<<s_name<<endl;
                cout<<"student roll : "<<s_roll<<endl;
                cout<<"Student marks"<<endl;
                cout<<"Hindi :"<<hin<<endl;
                cout<<"Sum Total :"<<sum<<endl;
                cout<<"Percentage :"<<per<<" %"<<endl;
                cout<<"Grade :"<<grade<<endl;
                cout<<"Result :"<<result<<endl;
                file>>s_name>>s_roll>>hin>>eng>>math>>sci>>sst>>sum>>per>>grade>>result;
            }
        }
    }
    file.close();
}
void student::deleted() {

    fstream file,file1;
    int rollno;
    int found = 0;
    cout<<"Delete student record"<<endl;

    file.open("studentData.txt",ios::in);
    if(!file)
    {
        cout<<"No data found"<<endl;
        file.close();
    }
    else
    {
        cout<<"Enter roll which you want to delete"<<endl;
        cin>>rollno;
        file1.open("temp.txt",ios::out | ios::app);

        file>>s_name>>s_roll>>hin>>eng>>math>>sci>>sst>>sum>>per>>grade>>result;
        while(!file.eof())
        {
            if(rollno != s_roll)
            {
                file1<<s_name<<" "<<s_roll<<" "<<hin<<" "<<eng<<" "<<math<<" "<<sci<<" "<<sst<<" "<<sum<<" "<<per<<" "<<grade<<" "<<result<<" ";
            }
            else
            {
                found++;
                cout<<"record deleted successfully"<<endl;
            }
            file>>s_name>>s_roll>>hin>>eng>>math>>sci>>sst>>sum>>per>>grade>>result;
        }
        if(found == 0)
        {
            cout<<"roll no not found"<<endl;
        }
        file.close();
        file1.close();

        remove("studentData.txt");
        rename("temp.txt","studentData.txt");
    }
}
int main()
{
    student s;
    s.menu();

    return 0;
}
