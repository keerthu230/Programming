// cpp tutorial 10
// relational operators
// system("cls"); -> is used to clear the previous output in the monitor

#include<iostream>
using namespace std;

int main()
{
   int a=5 ,b=10;
   cout<<"a+b = "<<a+b<<endl;
   //system("cls");  used to clear the output 

   cout<<" let a=5,b=10 , see what is the output of the follewing expression "<<endl;
   cout<<"(a>b) -> "<<(a>b)<<endl;
   cout<<"(a<b) -> "<<(a<b)<<endl;
   cout<<"(a<=b) -> "<<(a<=b)<<endl;
   cout<<"(a>=b) -> "<<(a>=b)<<endl;

   // till then completed -> < ,> ,<=,>= .

   cout<<"(a!=b) -> "<<(a!=b)<<endl; // both are not equal that is true statement -> returns true (1) . if both are equal , then the statement is false -> retuens false (0)
   cout<<"(a>b)||(a<b) -> "<<((a>b)||(a<b))<<endl; // any one statement true -> return true(1) , both fails-> returns false (0)
   cout<<"(a>b)&&(a<b) -> "<<((a>b)&&(a<b))<<endl; // both statement true -> returns true(1) , any one fails -> returns -> false(0)
   cout<<"(a==b) -> "<<(a<=b)<<endl; // both are equal->  returns true , or returns -> false.
   cout<<" !a -> "<<!a <<endl;
   //system("cls");

   // for any numbers other than 0 it returns false(0) , for 0 -> returns true(1)
   cout<<" !a -> "<<!a <<endl;
   cout<<" !0 -> "<<!0 <<endl;
   cout<<" !1 -> "<<!1 <<endl;
   cout<<" !2 -> "<<!2 <<endl;
   cout<<" !-1 -> "<<!(-1) <<endl;
   cout<<" !-2 -> "<<!(-2) <<endl;

   // completed -> !=, !, ||, && ,== .



   

}