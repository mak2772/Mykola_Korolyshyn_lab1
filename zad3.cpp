#include <iostream>

using namespace std;



int main()
{
 double m,w; //m-masa, w-wzrost
 double BMI;




 cout<<"Podaj masu ciala w kg: ";
 cin>>m;

 cout<<"Podaj wzrost w m: ";
 cin>>w;

 if (m<=0.0 && w<=0.0 )
 {
   cout<<"Nie mozliwe"<<endl;
   return -1;

 }

 BMI = (m)/(w * w);


 cout<<"BMI ="<<BMI<<endl;



 if(BMI<16.0)
 {
    cout<<"Wyglodzenie"<<endl;

  }

 if(BMI>=16.0 && BMI<=16.99)
  {
   cout<<"Wychudzenie"<<endl;

  }

 if(BMI>=17.0 && BMI<=18.49)
  {
   cout<<"Niedowaga"<<endl;

  }

 if(BMI>=18.5 && BMI<=24.99)
  {
   cout<<"Wartość prawidłowa"<<endl;
  }

  if(BMI>=25.0 && BMI<=29.99)
  {
   cout<<"Nadwaga"<<endl;
  }

  if(BMI>=30.0 && BMI<=34.99)
  {
   cout<<"I stopień otyłości"<<endl;
  }

  if(BMI>=35 && BMI<=39.99)
  {
   cout<<"II stopień otyłości"<<endl;
  }

  if(BMI>=40)
  {
   cout<<"Otyłość skrajna"<<endl;
  }
 return 0;

}
