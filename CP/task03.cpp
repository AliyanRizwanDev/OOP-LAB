#include <iostream>
using namespace std;

Class Customer
{
   string name;
   int age;
   
   void setname(string n)
   {
       name = n;
   }
   
   string getname()
   {
       return name;
   }
   
   void setname(int a)
   {
       age = a;
   }
   
   int getname()
   {
       return age;
   }
   
   
   void display()
   {
       cout << name<< endl;
       cout << age << endl;
   }
};

Class Account
{
    string acctype;
    string accname;
    
    void setname(string an)
   {
       accname = an;
   }
   
   string getname()
   {
       return accname;
   }
   
   void setname(string at)
   {
       acctype = at;
   }
   
   string getname()
   {
       return acctype;
   }
   
    void display()
    {
        cout << accname << endl;
        cout << acctypen << endl;
    }
};

Class RBI
{
    public:
        double interestrate;
        double withdrawal;
        float minimumInterestRate = 4;
        double maximumWithdrawl = 50000;
        double p,r,n;

    double setinterestrate(double ir)
    {
        interestrate = ir;
        
   if(obj.minimumInterestRate <= interestrate)
   {
        interestrate=(p+r)/n*t;
        return interestrate;
   }
   else
   {
       cout << "Not elligible" << endl;
   }
   
   
   double setwithdrawal(double wl)
   {
       withdrawallimit = wl;
   if (obj.maximumWithdrawl >= withdrawal)
   {
       withdrawallimit -= interestrate;
   }
   else
   {
       cout << "Not elligible" << endl;
   }
   }
};
    
};
    Class SBI: public RBI
    {
        double setinterestrate(double ir)
    {
        interestrate = ir;
        
   if(obj.minimumInterestRate <= interestrate)
   {
        interestrate=(p+r)/n*t;
        return interestrate;
   }
   else
   {
       cout << "Not elligible" << endl;
   }
   double setwithdrawal(double wl)
   {
       withdrawallimit = wl;
   if (obj.maximumWithdrawl >= withdrawal)
   {
       withdrawallimit -= interestrate;
   }
   else
   {
       cout << "Not elligible" << endl;
   }
 
    }
    };
    
    Class ICICI: public RBI
    {
        double setinterestrate(double ir)
    {
        interestrate = ir;
        
   if(obj.minimumInterestRate <= interestrate)
   {
        interestrate=(p+r)/n*t;
        return interestrate;
   }
   else
   {
       cout << "Not elligible" << endl;
   }
   
   double setwithdrawal(double wl)
   {
       withdrawallimit = wl;
   if (obj.maximumWithdrawl >= withdrawallimit)
   {
       withdrawallimit -= interestrate;
   }
   else
   {
       cout << "Not elligible" << endl;
   }
 
    };
    
int main()
{
    RBI r;
    SBI s;
    ICICI i;
    
    s.setname("ali");
    s.setage(19);
    s.display();
    s.setacctype("master");
    s.setaccno(21-abcd-11);
    s.display();
    s.setinterestrate(4);
    s.setwithdrawal(5000);
    s.display();
    
    i.setname("rizwan");
    isetage(19);
    i.display();
    i.setacctype("master");
    i.setaccno(21-abcd-11);
    i.display();
    i.setinterestrate(4);
    i.setwithdrawal(5000);
    i.display();
    
    return 0;
}
    
    