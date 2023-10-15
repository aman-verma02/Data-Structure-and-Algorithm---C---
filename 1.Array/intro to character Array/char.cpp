#include <iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        char temp=ch-'A';
    }


}
int checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while (s<=e){
        if (a[s]!=a[e]){
            return 0;

    }
    else
    {
        s++;
        e--;

    }
    

}
return 1;
}
int reversename(char name[], int n) {
    int s=0;
    int e =n-1;
    while(s<=e){
    swap (name[s++],name[e--]);
    
}
}
int getlength(char name[]){
    int count =0;
    for (int i = 0; name[i]!='\0'; i++){
        count++;

    }
    return count;

}

int main(){
      char name[20];
      cout<< "enter the name"<< endl;
      cin >> name;


     cout <<" your name "<<name<<endl;
     int len = getlength(name);
     cout << "length : "<< len <<endl;  
    reversename(name, len);
     cout <<"reverse name"<< endl;

     cout << name<< endl;
     cout <<" palidrone or not "<< checkPalindrome(name,len)<<endl;
    return 0;
}