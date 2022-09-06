#include <iostream>  
using namespace std;  
 class Account {  
   public:  
   float salary = 600.00;   
 };  
   class Programmer: public Account {  
   public:  
   float bonus = 50.00;    
   };       
int main(void) {  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;    
     cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}  
