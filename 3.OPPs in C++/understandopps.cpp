#include <iostream>
using namespace std;

class student{

    string name;
    public:
    int age;
    bool gender;

    student(){
        cout<<"Default constructor";
    }



    student(string s , int a , bool g ){

        cout << "Parameterized constructor";

        name = s ;
        age = a ;
        gender = g;


    } // Parameterized  constructor

    student(student &a){
        cout<<"copy constructor"<<endl;
        name = a.name;
        age = a.age; 
        gender = a.gender;
    } // Copy constructor





    void setName(){


    }

    void getName(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

    void print(){
        cout<<"Name = "; 
        cout<<name<<endl;
        cout<<"Age= ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }


    bool operator == (student &a){
        if(name == a.name && age ==a.age && gender == a.gender ){
            return true; 
        }
        else{
            return false;
        }
    }

};

int main(){

    student a("aman" , 20 , 0);
    // a.print();

    cout << endl;
    

    student b ("aman" , 19 , 1 );
    cout << endl;

    student c(a);

    if (b==a)
    {
        cout<<"same"<<endl;
        /* code */
    }
    else{
        cout<<"not same"<<endl;
    }
    
 












































    // student arr[3];
    // for (int i = 0; i<3; i++)
    // {
    //     string s ;
    //     cout<< "Name = ";
    //     cin>> s;
    //     arr[i].setName(s);
    //     cout<< "Age = ";
    //     cin>> arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }
    
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].print();

    //     /* code */
    // }
    

    return 0;
}