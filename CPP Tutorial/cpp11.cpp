// cpp tutorial 11
// precedance of the operator 
// + , -, *, /,% .

#include<iostream>
using namespace std;

int main()
{
    int a=5, b=10;
    cout<<"let a=5, b=10 : "<<endl;

    cout<<"(b-a+b*2/10%3) -> "<<(b-a+b*2/10%3)<<endl;

  /* How this above expression is done 
  precedence -> arithmetic operators 
        1-> * , / , % (multiply ,divide, modulus)
        2-> + , - ( addition , subtraction )
        

        a=5 , b=10

        b-a+b*2/10%3
        =10-5+10*2/10%3   
        
        -> *,/,% -> same level of precedance then which is done first ,
        -> depending on associativity
        -> associativity left to right 
        -> oder will be " *, /, %"
        =10-5+(10*2)/10%3
        =10-5+20/10%3
        =10-5+(20/10)%3
        =10-5+2%3
        =10-5+(2%3)
        =10-5+2

        // -> " -,+ " both have same precedance level , then associativity   L-> R
        // then order will be -> (-,+) 
        =10-5+2  
        =(10-5)+2
        =5+2
        =7

    */

//precedance priority 
// 1 st - (),[], -> , . , ++, -- 
   

  


}

