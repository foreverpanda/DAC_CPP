#include "Student.cpp"

int main(){
    vector<Student> students;
    Student stud = Student(101,"Ramesh",100);
     students.push_back(Student(102, "Suresh", 90));
    students.push_back(stud);
    for(auto i : students){
        i.display();
    }


}