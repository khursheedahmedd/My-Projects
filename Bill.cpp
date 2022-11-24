#include<iostream>
using namespace std;

/*this program can get unit of electricty consumed by consumer and give him total bill 
payable including tax.
*/

int main()
  {
    int u;
    string a,b,c;
    b="commercial";
    c="non-commercial";

    cout<<"\nEnter number of units consumed in this month : ";
    cin>>u;

    cout<<"\nEnter consumer type commercial OR non-commercial : ";
    cin>>a;
    
    if(a==b)
      {
        if(u<=300)
        {
            int t=u*15;
            int tx=(t*(.10));
            int gt=t+tx;
          cout<<"\nBill before tax : "<<t;
          cout<<"\nTotal tax on your bill : "<<tx;
          cout<<"\nTotal bill payable including tax : "<<gt;

        }
      else if(u>300)
        {
            int t=u*21;
            int tx=(t*(.15));
            int gt=t+tx;
          cout<<"\nBill before tax : "<<t;
          cout<<"\nTotal tax on your bill : "<<tx;
          cout<<"\nTotal bill payable including tax : "<<gt;

        }  
      }

    if(a==c)
      {
        if(u<=200)
          {
            cout<<"\nTotal bill payable is : "<<u*8;

          }
        else if(u>200)
          {
            int t=u*12;
            int tx=(t*(.06));
            int gt=t+tx;
          cout<<"\nBill before tax : "<<t;
          cout<<"\nTotal tax on your bill is : "<<tx;
          cout<<"\nTotal bill payable including tax : "<<gt;   

          }     

      }    
 return 0;

  }
