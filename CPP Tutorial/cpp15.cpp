// cpp tutorial 15 
// ternary operator usage learning with a Game -> Guess the number 


#include<iostream>
using namespace std;
 int main()
 {
      int host, guest ; // host , guest are the two people -> going to guess the number entered by other
      cout<<"Host -> ";
      cin>>host;
      system("cls");
      cout<<"Guest -> ";
      cin>>guest;
      (host==guest)?cout<<"Correct Guess , Congratulation !" : cout<<" wrong one , try better next time! ";

     
 }