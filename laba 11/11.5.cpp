#include <iostream>

using namespace std;

int main() { 
    setlocale(LC_ALL, "Russian");
    int a;
    cout<<"Введите a "<<endl;
    cin>>a;
    
    if (a==0){
    cout<<"Это число 0";
}
    else if (a>0) {
    if (a%2==0) {
    cout<<"Число + и чётное";
    }
    else {
        cout<<"Число + и нечётное";
    }
}   
        else if (a<0) {
        if (a%2==0) {
        cout<<"Число - и чётное";
    }
    else {
        cout<<"Число - и нечётное";
    }
    
}

}