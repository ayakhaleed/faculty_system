
#include <iostream>
using namespace std;
void highest_grade (int student_grade [][5],int i,string student_names [],int j)
{
    for(int row=0,x=0;row<3;row++)
    {   int highest = student_grade  [row][0];
        for(int col=0;col<5;col++)
        {
            if (highest < student_grade [row][col])
            {
                highest = student_grade [row][col];
                x=col;
            }
        }
        cout<<"the highest grade in course  "<<row+1<<" is for:"<< student_names [x]<<"  and it is "<< highest <<endl;
    }

}
void lowest_grade (int student_grade [][5],int i,string student_names [],int j)
{
    for(int row=0,x=0;row<3;row++)
    {   int lowest = student_grade  [row][0];
        for(int col=0;col<5;col++)
        {
            if (lowest > student_grade [row][col])
            {
                lowest = student_grade [row][col];
                x=col;
            }
        }
        cout<<"the lowest grade in course  "<<row+1<<" is for:"<< student_names [x]<<"  and it is: "<< lowest <<endl;
    }

}
void avreg_gba(string student_names[],int i,int student_grade[][5],int j)
{
    for (int col=0;col<5;col++)
    {
        float sum=0.0;
        float gba=0.0;
        for (int row=0 ;row<3;row++)
        {
            sum+=student_grade[row][col];
        }
        sum=sum/300*100;
        if(sum>=90)
        {
            gba=4.0;
            cout<<"average gba for:"<<student_names[col]<<" is:"<<gba<<endl;
        }
        else if(sum>=80)
        {
            gba=3.5;
            cout<<"average gba for:"<<student_names[col]<<" is:"<<gba<<endl;
        }
        else if(sum>=70)
        {
            gba=3;
            cout<<"average gba for:"<<student_names[col]<<" is:"<<gba<<endl;
        }
        else if (sum>=60)
        {
            gba=2.5;
            cout<<"average gba for:"<<student_names[col]<<" is:"<<gba<<endl;
        }
        else if(sum>=50)
        {
            gba=2.0;
            cout<<"average gba for:"<<student_names[col]<<" is:"<<gba<<endl;
        }
        else
        {
            gba=0.0;
            cout<<"average gba for:"<<student_names[col]<<" is:"<<gba<<endl;
        }
    }
}
void student_name_grade(string student_names[],int i,int student_grade[][5],int j,string course_names[],int r)
{
    for (int col=0;col<5;col++)
    {    cout<<"student grades for:"<<student_names[col]<<":  ";
        for (int row=0 ;row<3;row++)
        {
            cout<<"in:"<<course_names[row]<<" is:";
            cout<<student_grade[row][col]<<"  ";
        }
        cout<<endl;


    }
}
void course_name(string course_names[],int i)
{   cout<< "courses are:"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<i+1<<"."<<course_names[i]<<endl;
    }
}
void student_name(string student_names[],int i)
 {
     cout<<"students are:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<student_names[i]<<endl;
    }
}
void averg_grade(int student_grade[][5],int i,string course_names[],int j)
{
    int sum;
    float averg;
    for(int row=0;row<3;row++)
    {
        sum=0;
        for (int col=0;col<5;col++)
        {
            sum=sum+student_grade[row][col];
        }
        averg=sum/5;
        cout<<"the average grade of "<<course_names[row]<<" is:"<< averg<<endl;
    }
}
void modify_student_grade(string course_names[],int i,string student_names[],int j,int student_grade[][5],int r)
{
    string course;
    cout<<"Enter the course:"<<endl;
    cin>>course;
    int x;
    for(int i=0;i<3;i++)
    {
        if (course==course_names[i])
            x=i;
    }
    string student;
    cout<<"Enter the name of student:"<<endl;
    cin>>student;
    int y;
    for(int i=0;i<5;i++)
    {
        if(student==student_names[i])
            y=i;
    }
    cout<<"pleas,enter the new grade:"<<endl;
    cin>>student_grade[x][y];

}
void modify_course_name(string course_names[],int i)
{

    int number_of_course;
    cout<<"please,enter the number of course you want to change:"<<endl;
    cin>>number_of_course;
    for(int j=0;j<3;j++)
    {
        if(number_of_course==j+1)
        {
            cout<<"please,enter the new course:"<<endl;
            cin>>course_names[j];
        }
    }
}
void sort_alphabetically( string student_names[],int i)
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=student_names[i].length();j++)
        {
            if(int(student_names[i][j])>int(student_names[i+1][j]))
                {
                    student_names[i]=student_names[i+1];
                    break;
                }
            else if (int(student_names[i][j])==int(student_names[i][j]))
                continue;
        }
    }
}
int main() {

    string student_names[5];
    string course_names[3];
    int student_grade[3][5];

    for(int i=0;i<5;i++)
    {
        cout<<"Enter student name:"<<endl;
        cin>>student_names [i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Enter course name:"<<endl;
        cin>>course_names [i];
    }
    for(int row=0;row<3;row++)
    {
        cout<<"Enter student grade in: "<<course_names[row]<<endl;
        for(int col=0;col<5;col++)
        {
            cout<<" for :"<<student_names[col]<<endl;
            cin>>student_grade [row][col];

        }
    }
    char choise;
    do
    {
        cout<<endl<<"---------------------------------------------------------------------------------"<<endl;
        cout<<"Enter your choise"<<endl;
        cout<<"1.calculate and display the average GPA for each student along with the student's name."<<endl;
        cout<<"2.display the student with the highest grade in each course."<<endl;
        cout<<"3.display the student with the lowest grade in each course"<<endl;
        cout<<"4.display the average grade in each course."<<endl;
        cout<<"5.display students and their grades in all courses."<<endl;
        cout<<"6.display course names."<<endl;
        cout<<"7.display student names."<<endl;
        cout<<"8.modify a student's grade in a course ."<<endl;
        cout<<"9.modify a course name."<<endl;
        cout<<"10.sort the students (and their grades) alphabetically."<<endl;
        cout<<" if you want to exit press 'E'."<< endl;
        cout<<endl<<"---------------------------------------------------------------------------------"<<endl;
        cin>>choise;
        if (choise=='1')
           avreg_gba(student_names,3,student_grade,3);
        else if (choise=='2')
            highest_grade(student_grade,3,student_names,5);
        else if(choise=='3')
            lowest_grade(student_grade,3,student_names,5);
        else if (choise=='4')
            averg_grade(student_grade,3,course_names,3);
        else if (choise=='5')
            student_name_grade(student_names,5,student_grade,3,course_names,3);
        else if (choise=='6')
            course_name(course_names,3);
        else if(choise=='7')
            student_name(student_names,5);
        else if(choise=='8')
            modify_student_grade(course_names,3,student_names,5,student_grade,3);
        else if (choise=='9')
        {
            course_name(course_names,3);
            modify_course_name(course_names,3);
        }
        else if (choise=='E')
            cout<<"you exit the program"<<endl;
        else
                cout<<"wrong choise"<<endl;
    }
        while (choise !='E');

    return 0;
}
