                      //TASK-->3
                      // STUDENT GRADING SYSTEM

 /*Create a program that manages student grades. Allow the user
 to input student names and their corresponding grades.
 Calculate the average grade and display it along with the highest
 and lowest grades*/

 #include<iostream>
 #include<string>
 #include<vector>
using namespace std;
 
 struct student{
    string name;
    double grade;
 };

 int main(){
    vector<student> students;
    string name;
    double grade;
    char option;

    do{
        cout<<"enter student name: ";
        cin>>name;

        cout <<"enter grade for "<<name<<" :";
        cin>>grade;

        students.push_back({name,grade});

        cout<<"do you want to enter another student? (y/n): "<<endl;

    }while(option=='y' || option=='Y');

    double totalGrade=0;
    double highestGrade =students[0].grade;
    double lowestGrade=students[0].grade;

    for(const auto& students : students){
        totalGrade+=students.grade;
        if(students.grade > highestGrade){
            highestGrade=students.grade;
        }else lowestGrade=students.grade;
    }
    double averageGrade = totalGrade/students.size();

    cout<<"average Grade -->"<<averageGrade<<endl;
    cout<<"highest Grade: "<<highestGrade<<endl;
    cout<<"lowest Grade: "<<lowestGrade<<endl;

    return 0;

 }
