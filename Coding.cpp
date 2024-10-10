// 1) if,if-else
// 2) nested
// 3) Else if ladder
// 4) Ternary
// 5) switch



#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if(x % 2 == 0){
        cout << "The number is even";
    }
    else{
        cout << "The number is odd";
    }
}


#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number : ";
    cin >> x;
    if(x % 5 == 0){
        cout << "The number is divaided by 5";
    }
    else{
        cout << "The number is not divaided by 5";
    }
}


//ABSOLUTE :- iska matlab koi bhi number dijiye vo positive hi lana ahi


#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
    if( x >= 0){
        cout<<x;
    }
    else{
        cout<<-x;
    }

}

#include<iostream>
using namespace std;
int main(){
    int cp , sp;
    cout<<"Enter your cost price : \n";
    cin>>cp;
    cout<<"Enter your seling price : \n";
    cin>>sp;
    if( cp > sp ){
        cout<<"you are in the loss "<<cp-sp;
    }
    else if( sp > cp ){
        cout<<" you are in the profite "<<sp-cp;
    }
    else{
        cout<<" No loss No profit";
    }
}


#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
    if( x > 99 && x < 1000){
        cout<<"The are three digist";
    }
    else{
        cout<<"the number are noot three digits";
    }

}

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
    if( x % 3 == 0 && x % 5 == 0){
        cout<<"The number are divigebale by 3 and 5 both digist";
    }
    else{
        cout<<"the number are not divisible";
    }

}


#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
    if( x % 3 == 0 || x % 5 == 0){
        cout<<"The number are divigebale by 3 or 5 any one and both";
    }
    else{
        cout<<"the number are not divisible";
    }

}

#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter a 1st side :";
    cin>>a;
    cout<<"enter a 2nd side :";
    cin>>b;
    cout<<"enter a 3rd side :";
    cin>>c;
    if( ( a + b ) > c && ( b + c ) > a && ( c + a ) > a ){
        cout<<"The tringle is valide";
    }
    else{
        cout<<"the trianglee is invlaide";
    }

}

#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter a 1st number :";
    cin>>a;
    cout<<"enter a 2nd number :";
    cin>>b;
    cout<<"enter a 3rd number :";
    cin>>c;
    if ( a > c && a > b ){
        cout<<" a is greater number";
    }
    else if( b > a && b > c ){
        cout<<"b is greater number";
    }
    else{
        cout<<"c is greater number";
    }

}

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number :";
    cin>>x;
    if( ( x % 3 == 0 || x % 5 == 0 ) and  ( x % 15 != 0)){
        cout<<"The number are divigebale by 3 or 5 any one and both";
    }
    else{
        cout<<"the number are not divisible";
    }

}

//NESTED IF-ELSE


 #include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter a 1st number :";
    cin>>a;
    cout<<"enter a 2nd number :";
    cin>>b;
    cout<<"enter a 3rd number :";
    cin>>c;
    if ( a > c && a > b ){
        cout<<" a is greater number";
    }
    else if( b > a && b > c ){
        cout<<"b is greater number";
    }
    else if( c > a && c > b){
        cout<<"c is greater number";
    }
    else{
        cout<< "The all number are eequaly";
    }

}    

   // USING THE NESTED LOOP AND RUN AGAI THIS CODE THIS TIME WE ARE NOT USING THE ANY MULTYPAL CONDITIONS


 #include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"enter a 1st number :"<<endl;
    cin>>a;
    cout<<"enter a 2nd number :"<<endl;
    cin>>b;
    cout<<"enter a 3rd number :"<<endl;
    cin>>c;
    
    if( a > b){
        if( a > c){
            cout<< a << " a is greatest"<<endl;
        }
        else{
            cout<< c << " c is gratest ";
        }
    }
    else{
       if( b > c ){
        cout<< b <<" b is greatst";
       }
       else{
       cout<< c << " c is greatest";
       }
    }
}    


#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<< " Enter 1st person age ";
    cin>> a;
    cout<< " Enter 2nd person age ";
    cin>> b;
    cout<< " Enter 3rdt person age ";
    cin>> c;

    if( a < b){
        if( a < c){
            cout<< a << " ram is youngest";
        }
        else{
            cout<< c << " Ajay is youngest";
        }
    }
    else{
        if( b < c){
            cout<< b << " Shayam is youngest";
        }
        else{
            cout<< c << " Ajay is youngest";
        }
    }

}


#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<< " Enter 1st person age ";
    cin>> a;
    cout<< " Enter 2nd person age ";
    cin>> b;
    cout<< " Enter 3rdt person age ";
    cin>> c;

   if( a == b && b == c){
    cout<< " all the age is equal";
   }
   else{
    if( a < b){
        if( a < c){
            cout<< a << " ram is youngest";
        }
        else{
            cout<< c << " Ajay is youngest";
        }
    }
    else{
        if( b < c){
            cout<< b << " Shayam is youngest";
        }
        else{
            cout<< c << " Ajay is youngest";
        }
    }
   }
}


#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<< " Enter Your marks : "<<endl;
    cin>> a;
    
    if( a >= 81 && a <= 100 ){
        cout<< "Very Good";
    }
    else if( a >= 61 && a <= 80 ){
        cout<< " Good ";
    }
    else if( a >= 41 && a <= 60){
        cout<< "Average";
    }
    else{
        cout<<"fail";
    }
}


#include<iostream>
using namespace std;
int main(){
    float x , y ;
    cout<< " Enter the point x : ";
    cin>> x;
    cout<< " Enter the point y : ";
    cin>> y;
    
    if( x > 0 && y > 0 ){
        cout<< "this in the 1st quadarent";
    }
    else if(x < 0 && y > 0  ){
        cout<< "this in the 2nd quadarent";
    }
    else if(x < 0 && y < 0  ){
        cout<< "this in the 3rd quadarent";
    }
    else if( x == 0 && y == 0 ){
        cout<< "The line going on the origent";
    }
    else if( x > 0 && y == 0 ){
        cout<< " The point on the x axas";
    }
    else if( x == 0 && y > 0 ){
        cout<< " The point on the y axas";
    }
    else{
        cout<< "the points in the 4th qudrent";
    }


}


              // TERNARY OPERATORE


#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<" Enter a number :";
    cin>>a;
    ( a % 2 == 0 ) ? cout<<"Even" : cout<<"Odd";
}

       //SWITHCH ATATEMENT

       //CALCULATATOR


#include<iostream>
using namespace std;
int mian(){
     int  a;
     cin>>a;
     char op;
     cin>>op;
     int b;
     cin>>b;
     if(op=='+') cout<<a+b;
     
     if(op=='-') cout<<a-b;
     
     if(op=='*') cout<<a*b;
     
     if(op=='/') cout<<a/b;
     

}

#include<iostream>
using namespace std;
int mian(){
    int a;
    cin>>a;
    char op;
    cin>>op;
    int b;
    cin>>b;

    switch(op){
        case '+':
            cout<<a + b<<endl;
            break;
         case '-':
            cout<<a + b<<endl;
            break;
         case '*':
            cout<<a + b<<endl;
            break;
         case '/':
            cout<<a + b<<endl;
            break;
        default:
            cout<<"Invalide Operator"<<endl;
    }
}

   // I am learn some different