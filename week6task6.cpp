#include<iostream>
using namespace std;

int main(){
    char grade;
    int no_sub,grace_marks,i;
    while(true){

    cout<<"Enter Your Grade (A-C) & (0) To Exit: ";cin>>grade;cout<<endl;

    switch(grade){

    case 'A':
        cout<<"Enter Number of Failed Subjects: ";cin>>no_sub;cout<<endl;
            if(no_sub<=3){
                grace_marks=no_sub*5;
                cout<<"Total Grace Marks Given To Student: "<<grace_marks<<endl;
            }
            else{
                cout<<"No Grace Marks Awarded"<<endl;
            }
             for(i=1;i<40;i++){
            cout<<"*";
        }
            cout<<endl;
            break;
    case 'B':
        cout<<"Enter Number of Failed Subjects: ";cin>>no_sub;cout<<endl;
            if(no_sub<=2){
                grace_marks=no_sub*4;
                cout<<"Total Grace Marks Given To Student: "<<grace_marks<<endl;
            }
            else{
                cout<<"No Grace Marks Awarded"<<endl;
            }
               for(i=1;i<40;i++){
            cout<<"*";
        }
            cout<<endl;
             break;
    case 'C':
        cout<<"Enter Number of Failed Subjects: ";cin>>no_sub;cout<<endl;
            if(no_sub==1){
                grace_marks=no_sub*5;
                cout<<"Total Grace Marks Given To Student: "<<grace_marks<<endl;
            }
            else{
                cout<<"No Grace Marks Awarded"<<endl;
            }
               for(i=1;i<40;i++){
            cout<<"*";
        }
            cout<<endl;
            break;
    case '0':
            cout<<"Program Exited"<<endl;
            return 1;
            break;

    default:
        cout<<"Invalid Input"<<endl;
           for(i=1;i<40;i++){
            cout<<"*";
        }
            cout<<endl;
    }
    }
    return 0;
}
