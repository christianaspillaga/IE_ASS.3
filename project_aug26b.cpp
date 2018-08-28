#include <iostream>
using namespace std;

int main()
{
    int total, a, b;
    
   cout<<"\n\n You have a business and you need to compute the total income for the month, input the following values\n\n";
    
   cout<<"\n\n let value a be the total revenue and value b as the total expense\n\n";
    
   
    cout<< "Enter the revenue: ";
    cin>> a;
    
    cout<< "Enter the expenses: ";
    cin>> b;
    
    total= (a-b);

   
    if (total > 0) {
    cout<< "Your Remark is", cout<< total, cout<< "Profit";
        }
  else if (total <= 0){
    cout<< "Your Remark is" , cout<< total, cout<< "Non-profit";
    }
  
  Return: 0;
 
  } 
    

    