#include<iostream>
using namespace std;
int main(){
    int studentScore=80;
    string StudentRecord = "Jonh Ny";
    float student_score= 75.5;
    const int MAX_BUFFER_SIZE=90;
    cout<<"studentScore (camelCase) = "<<studentScore<<endl;
    cout<<"StudentRecord (PascalCase) = "<<StudentRecord<<endl;
    cout<<"student-score (snake_case) = "<<student_score<<endl;
    cout<<"MAX_BUFFER_SIZE (SCREAMING_SNAKE_CASE) = "<<MAX_BUFFER_SIZE<<endl;
    return 0;
}