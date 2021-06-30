// cpp tutorial 9
// unary operators -pre and post-> increment & dacrement operations


#include<iostream>

using namespace std;

 int main()
  {
      int counter ;
      cout<<" plaese enter a value for counters ->";
      cin>>counter;

      cout<<"value of counter -> "<<counter<<endl;
      cout<<"value of counter ++ -> "<<counter++<<endl;
      cout<<"value of counter after counter ++ -> "<<counter<<endl;

      int times;
      cout<<" plaese enter a value for times ->";
      cin>>times;
      cout<<"value of times -> "<< times <<endl;
      cout<<"value of times-- -> "<< times--<<endl;
      cout<<"value of times after times--  -> "<< times <<endl;

      cout<<" for pre increment and decrement :"<<endl;

      int words;
      cout<<" plaese enter a value for words ->";
      cin>>words;
      cout<<"value of words -> "<< words <<endl;
      cout<<"value of ++words -> "<< ++words<<endl;
      cout<<"value of words after ++words -> "<<words <<endl;

      int letters;
      cout<<" plaese enter a value for letters ->";
      cin>>letters;
      cout<<"value of letters -> "<< letters <<endl;
      cout<<"value of --letters -> "<< --letters<<endl;
      cout<<"value of letters after --letters -> "<<letters <<endl;
  }