#include <iostream>
using namespace std;

#define MAX 10

class student
{
public:
    int sub[5];
    char  name[30];
    int   rollNo;
    int   total = 0;
    float perc = 0;
    string grade;
public:

    void getDetails(void);
    void putDetails(void);
    void printMarks(void);

};

void student::getDetails(void){
    cout<<"Enter name: "<<endl;
    cin >> name;
    cout<<"Enter roll number: "<<endl;
    cin >> rollNo;
}

void student::printMarks() {
    cout<<"Enter marks of 5 subjects"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cin>>sub[i];
    }
    for(int i = 0; i < 5; i++)
    {
        total = total+sub[i];
    }
    perc =  perc=(float)total/500*100;
    if( perc >=90 && perc <= 100)
        grade = "A";
    else if(perc >= 80 && perc <= 90)
        grade = "B";
    else if (perc >= 70 && perc <= 80)
        grade = "C";
    else if (perc >= 60 && perc <= 70)
        grade = "D";
    else if (perc >= 50 && perc <= 60)
        grade = "E";
    else
        grade = "F";
}

void student::putDetails(void){

    cout <<"Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage: " << perc<<" Grade:" << grade<<endl;
    cout<<"marks : ";
    for(int i = 0; i < 5; i++)
    {
        cout<<sub[i]<<" ";
    }
    cout<<endl<<endl;
}

void printSub(student stud[],int n) {
    int temp, arr[n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 4; j++) {
            if (stud[i].sub[j] > stud[i].sub[j+1])
            {
                temp = stud[i].sub[j];
                stud[i].sub[j] = stud[i].sub[j+1];
                stud[i].sub[j+1] = temp;
            }
        }
        arr[i] = stud[i].sub[4];
    }

    int largest, i ,pos;
    largest = stud[0].sub[4];
    for( i = 1; i<n; i++) {
        if(stud[i].sub[4]>largest) {
            largest =stud[i].sub[4];
            pos = i;
        }
        else
        {
            pos = 0;
        }
    }
//    cout<<"The largest element in the array is "<<largest<<" and it is at index "<<pos<<"name is"<<std[pos].name;
    cout<<"Subject Topper :"<<endl;
    cout<<"Name of Subject Topper :"<<stud[pos].name<<endl;
    cout<<"Highest scored of subject :"<<largest<<endl;
    cout<<"Roll no : "<<stud[pos].rollNo<<endl;
    cout<<"Total Marks :"<<stud[pos].total<<endl;
    cout<<"Percentage :"<<stud[pos].perc<<endl;
    cout<<"Grade :"<<stud[pos].grade<<endl;
    cout<<endl<<endl;


}

void printTot(student stud[], int n)
{
    int largest1, k ,pos1;
    largest1 = stud[0].total;
    for( k = 1; k<n; k++) {
        if(stud[k].total>largest1) {
            largest1 =stud[k].total;
            pos1 = k;
        }
        else
        {
            pos1 = 0;
        }
    }
    // cout<<"Topper is "<<largest1<<" and it is at index "<<pos1<<"name is"<<std[pos1].name<<std[pos1].perc;
    cout<<"Topper :"<<endl;
    cout<<"Name of  Topper :"<<stud[pos1].name<<endl;
    cout<<"Roll no : "<<stud[pos1].rollNo<<endl;
    cout<<"Total Marks :"<<stud[pos1].total<<endl;
    cout<<"Percentage :"<<stud[pos1].perc<<endl;
    cout<<"Grade:"<<stud[pos1].grade<<endl;
    cout<<endl<<endl;
}
int main()
{
    student stud[MAX];       //array of objects creation
    int n,loop;

    cout <<"Enter total number of students: "<<endl;
    cin >> n;

    for(loop=0;loop< n; loop++){
        cout<<"Enter details of student " <<loop+1 <<endl;

        stud[loop].getDetails();
        cout<<"Enter marks of student " <<loop+1 <<endl;
        stud[loop].printMarks();
    }



    for(loop=0;loop< n; loop++){
        cout<<endl<<endl;
        cout <<"Student"<<(loop+1)<<"details:"<<endl;
        stud[loop].putDetails();

    }

    printSub(stud, n);
    printTot(stud,n);

    return 0;
}