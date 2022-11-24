#include<iostream>
using namespace std;

 int main()
   {
    int u,mt,in,t;
    float ag;
    cout<<"\nPlease choose the serail number given below of university in which you interested : \n\n     Sr No.| Uninersity\n\n   \t 1- ITU\n   \t 2- FAST-NU\n   \t 3- PUCIT\n   \t 4- NUST\n   \t 5- COMSAT\n   \t 6- Quid-i-Azam University\n   \t 7- UET\n   \t 8- GCU\n   \t 9- UMT\n \t10- LUMS\n \t11- Air University\n \t12- Bahria University\n \t13- BZU\n \t14- Islamia University BWP\n  \t15- UCP";
    cout<<"\nPlease write correct serial number here : ";
    cin>>u;
    
    switch(u)
      {
       case 1://ITU
        cout<<"\nEnter your marks percentage in Matric / O level exams : ";
        cin>>mt;
        cout<<"\nEnter your marks percentage in Inter / A level exams : ";
        cin>>in;  
        
        if( mt>=50 && in>=50 )
          {
        cout<<"\nEnter your marks percentage obtained in ITU entry test : ";
        cin>>t;
        float ag=(mt*(.25))+(in*(.25))+(t*(.50));    
        if(ag>=83)
          cout<<"\nYour aggregate is : "<<ag<<"\nCongratulations you are eligible for following programs :\n\n1- BSCS\n2- BS Computer Engineering\n3- BS Cyber Security\n4- BS Data Siences\n5- BS Electronics\n6- BS Electrical Engineering\n\nPlease pay your admission fee before due date.\n";
        else if(ag<83 && ag>=79)
          cout<<"\nYour aggregate is : "<<ag<<"\nCongratulations you are eligible for following programs :\n\n1- BS Computer Engineering\n2- BS Cyber Security\n3- BS Data Siences\n4- BS Electronics\n5- BS Electrical Engineering\n\nPlease pay your admission fee before due date.\n";
        else if(ag<79 && ag>=77)
          cout<<"\nYour aggregate is : "<<ag<<"\nCongratulations you are eligible for following programs :\n\n1- BS Cyber Security\n2- BS Data Siences\n3- BS Electronics\n4- BS Electrical Engineering\n\nPlease pay your admission fee before due date.\n";
        else if(ag<77 && ag>=74)
          cout<<"\nYour aggregate is : "<<ag<<"\nCongratulations you are eligible for following programs :\n\n1- BS Electronics\n2- BS Electrical Engineering\n\nPlease pay your admission fee before due date.\n";
        else
           cout<<"\nYour aggregate is : "<<ag<<"\nSorry you are not eligible for any programe offered by us.\n";
          }
        else 
         cout<<"\nSorry you are not eligible for any program we offer.";  
        break;

         case 2://FAST-NU
          int c;
          cout<<"\nEnter your marks percentage in Matric / O level exams : ";
          cin>>mt;
          cout<<"\nEnter your marks percentage in Inter / A Level exams : ";
          cin>>in;
          cout<<"\nEnter '1' if you pass Math exam in Inter and enter '0' if you don't : ";
          cin>>c;
          if(mt>=60 && in>=50 && c==1)
           {
            cout<<"\nEnter your marks percentage in FAST-NU test : ";
            cin>>t;
            float ag;
            if(mt>in)
             ag=((mt*(.5))+(t*(.5)));
            else
             ag=((in*(.5))+(t*(.5)));  

            if(ag>=69)
              cout<<"\nYour aggregate is : "<<ag<<"\nCongratulations you are eligible for following programs :\n\n1- BSCS\n2- BS Computer Engineering\n3- BS Cyber Security\n4- BS Data Siences\n5- BS Electronics\n6- BS Electrical Engineering\n7- BS Software Engineering\n8- BS Accounting and Finance\n9- BS Artifial Inteligence\n10-BBA\n11-BS Physics\n12-BS Math\n\nPlease pay your admission fee before due date.\n";
            else if(ag>=64 && ag<69)
              cout<<"\nYour aggregate is : "<<ag<<"\nCongratulations you are eligible for following programs :\n\n1- BS Artificail Inteligence\n2- BS Computer Engineering\n3- BS Cyber Security\n4- BS Data Siences\n5- BS Electronics\n6- BS Electrical Engineering\n7- BS Accounting and Finance\n8- BBA\n9- BS Physics\n10-BS Math\n\nPlease pay your admission fee before due date.\n";
            else if(ag>=59 && ag<64)
              cout<<"\nYour aggregate is : "<<ag<<"\nCongratulations you are eligible for following programs :\n\n1- BS Artificail Inteligence\n2- BS Computer Engineering\n3- BS Cyber Security\n4- BS Data Siences\n5- BS Electronics\n6- BS Accounting and Finance\n7- BBA\n8- BS Math\n9- Bs Physics\n\nPlease pay your admission fee before due date.\n";
            else if(ag>=55 && ag<59)
              cout<<"\nYour aggregate is : "<<ag<<"\nCongratulations you are eligible for following programs : \n\n1- BS Accounting and Finance\n2- BS Math\n3- BS Physics\n4- BBA\n5- BS Electronics\n\nPlease pay your admission fee before due date.\n"; 
            else
              cout<<"\nyour aggregate is : "<<ag<<"\nSorry you are not eligilble for any program we offer.";
           }
          else
           cout<<"\nSorry you are not eligible for any program we offer. First you have to pass your Math exam from any local board within admission year."; 
        break;

         case 3://PUCIT
           cout<<"\nSorry this data is not available yet.";
        break;   
           /*cout<<"\nEnter your marks percentage in Matric : ";
           cin>>mt;
           cout<<"\nEnter your marks percentage in Inter / A Level  : ";
           cin>>in;
           if(mt>=50 && in>=50)
             {
              cout<<"\nEnter your marks percentage in USAT test : "
              cin>>t;
              ag=((mt*(.2))+(in*(.5))+(t*(.3)));

             }*/
           case 4://NUST
            cout<<"\nEnter marks percentage of your Matric / O level exams : ";
            cin>>mt;
            cout<<"\nEnter marks percentage of your Inter / A Level exams : ";
            cin>>in;
            if(mt>=60 && in>=60)
             {
              cout<<"\nEnter your marks in NET test : ";
              cin>>t;
              float test=(t/2);
              ag=((mt*(.10))+(in*(.15))+(test*(.75)));
              cout<<"\nYour aggregate is : "<<ag<<"\nPlease enter your NET test ID : ";
              int id;
              cin>>id;
              cout<<"\nYour merit position is : ......  \n"<<"You are selected for following programs : .......\n";
             }    
            else
             cout<<"\nSorry you are not eligible for any program we offer.";
          break;   

           case 5://COMSAT
             cout<<"\nEnter your marks percentage in Matric / O level exams : ";
             cin>>mt;
             cout<<"\nEnter your marks percentage in Inter / A level exams : ";
             cin>>in;
             if(mt>=50 && in>=50)
               {
                cout<<"\nEnter your percentage marks obtained in NTS-NAT test : ";
                cin>>t;
                if(t>=50)
                {
                ag=((mt*(.1))+(in*(.4))+(t*(.5)));
                }
                else
               { 
                cout<<"\nYou have not obtained enough marks in NTS-NAT test. Sorry you are not eligible for any program we offer."; 
               }
             if(ag>=84.04)
               {
                cout<<"\nYour aggregate is : "<<ag<<"\nConratulations you are selected for following programs : \n\n1- BSCS\n2- BS Software Engineering\n3- BS Computer Engineering4- BS Artificail Inrelligence\n5- BS Data Sciences\n6- BS BS Physics\n7- BS Psychology\n8- BS Acounting and Finance\n9- BBA\n10-BS Cyber Security\n11-BS Electronics\n12-BS English\n13-BS Math\n14-BS Electrical Engineering\n\nPlease pay your admission fee before due date. ";
               }
             else if(ag>=79.53 && ag<=84.04)  
               {
                cout<<"\nYour aggregate is : "<<ag<<"\nConratulations you are selected for following programs : \n\n1- BS Software Engineering\n2- BS Computer Engineering3- BS Artificail Inrelligence\n4- BS Data Sciences\n5- BS BS Physics\n6- BS Psychology\n7- BS Acounting and Finance\n8- BBA\n9- BS Cyber Security\n10-BS Electronics\n11-BS English\n12-BS Math\n13-BS Electrical Engineering\n\nPlease pay your admission fee before due date. ";
               }
             else if(ag>=76 && ag<=79.53)
               {
                cout<<"\nYour aggregate is : "<<ag<<"\nConratulations you are selected for following programs : \n\n1- BS Computer Engineering\n2- BS BS Physics\n3- BS Psychology\n4- BS Acounting and Finance\n5- BBA\n6- BS Electronics\n7- BS English\n8- BS Math\n9- BS Electrical Engineering\n\nPlease pay your admission fee before due date. ";
               }  
             else if(ag>=63 && ag<=76)
               {
                cout<<"\nYour aggregate is : "<<ag<<"\nConratulations you are selected for following programs : \n\n1- BS BS Physics\n2- BS Psychology\n3- BS Acounting and Finance\n4- BBA\n5- BS Electronics\n6- BS English\n7- BS Math\n8- BS Electrical Engineering\n\nPlease pay your admission fee before due date. ";
               }  
             else if(ag>=50.3 && ag<=63)
               {
                cout<<"\nYour aggregate is : "<<ag<<"\nConratulations you are selected for following programs : \n\n1- BS BS Physics\n2- BBA\n3- BS Electronics\n4- BS English\n5- BS Math\n\nPlease pay your admission fee before due date. ";
               }  
             else
               cout<<"\nSorry you are not selected for any program we offer.";  

               
               }
             else
              cout<<"\nSorry you are not eligible for any program we offer.";  
            break;
             
             case 6://Quad-i-Azam University
               {
                cout<<"\nSorry this data is not available yet.";
               }
            break;
              case 7:
              {
                cout<<"\nSorry this data is not available yet.";
              }
            break;
              case 8:
              {
                cout<<"\nSorry this data is not available yet.";
              }
            break;
              case 9:
              {
                cout<<"\nSorry this data is not available yet.";
              }
            break;
              case 10:
              {
                cout<<"\nSorry this data is not available yet.";
              }
            break;
              case 11:
              {
                cout<<"\nSorry this data is not available yet.";
              }
            break;
              case 12:
              {
                cout<<"\nSorry this data is not available yet.";
              }
            break;
              case 13:
              {
                cout<<"\nSorry this data is not available yet.";
              }
            break;
              case 14:
              {
                cout<<"\nSorry this data is not available yet.";
              }
            break;
              case 15:
              {
                cout<<"\nsirry this data us not avialable yet.";
              }

             default:
             {
               cout<<"\nSorry this universty is not in our list yet.";          
             }
      
      }
      
    

  return 0;

   }
