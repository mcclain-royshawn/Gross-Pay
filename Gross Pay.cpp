/*Comment: Write the C++ program to enter an 
1. employee's full name (first name and last name) from the keyboard 
2. age
3. worked hours
4. SSN
from the keyboard and calculate gross pay based of 
1.02 city and print information on screen.
*/

//Header
        #include<iostream>
        using namespace std;
        
//Global Variables
         
         const float RATE=1.02;

//Function Declaration

//Main Function
       int main()
       {
//Local Variables

        string full_name,SSN;
        short age;
        float worked_hours,gross_pay;
        

//Code
           
           cout<<"\n \t\t\t Employee's Gross Pay"<<"\n \t\t Enter your Full Name: ";
           getline(cin,full_name);
           cout<<"\n \t\t Enter your Age: ";
           cin>>age;
           cout<<"\n \t\t Enter your SSN: ";
           cin>>SSN;
           cout<<"\n \t\t Enter your Worked Hours: ";
           cin>>worked_hours;
           
           cout<<"\n\n \t\t\t Your Full Name is: "<<full_name<<"\n\ \t\t\t Your Age is: "<<age<<"\n\ \t\t\t Your SSN is: "<<SSN<<"\n\ \t\t\t Your number of Worked Hours is: "<<worked_hours<<"\n \t\t\t The Rate is: 1.02 \n";
           
           if(worked_hours<40)
           {
                gross_pay=RATE*worked_hours;
           cout<<"Your Gross Pay is: "<<gross_pay;     
                      }
                      
           else //worked_hours>40
                {
                gross_pay=RATE*40+1.5*RATE+(worked_hours-40);             
           
                cout<<"Your Gross Pay is: "<<gross_pay;              
                              }
           
           
      system("pause");
      return 0;     
           }
