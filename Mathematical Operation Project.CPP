#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define PI 22/7.0
enum Code{code0,code1,code2,code3,code4,code5,code6,code7,code8,code9,code10,code13};
void Main_menu()
{
  cout<<"\n **#**#** Main Menu **#**#**";
  cout<<"\n------------------------------";
  cout<<"\n1. Basic Operation (+,-,*,/).";
  cout<<"\n2. Square And Square root.";
  cout<<"\n3. Cube And Cube root. ";
  cout<<"\n4. Multiplication Table ";
  cout<<"\n5. Area. ";
  cout<<"\n6. Volume. ";
  cout<<"\n7. Even - ODD Numbers. ";
  cout<<"\n8. Fibonacci Series. ";
  cout<<"\n9. Factorial and Factors. ";
//  cout<<"\n10.  ";
 // cout<<"\n11.  ";
  //cout<<"\n12. Cyphor. ";
  cout<<"\n10. Exit. ";
  cout<<"\n________________________________________" ;

}
class B_P
{
  public :
  double a,b,c;
  void Add_two()
     {
       system("cls");
       cout<<"\n\t***** Addition of Two Numbers *****";
       cout<<"\n\t   A = ";
       cin>>a;
       cout<<"\t   B = ";
       cin>>b;
       cout<<"\t----------------";
       cout<<"\n\t A+B = "<<a+b;
       getch();
     }
  void Add_Three()
    {
       system("cls");
       cout<<"\n\t***** Addition of Three Numbers *****";
       cout<<"\n\t    A = ";
       cin>>a;
       cout<<"\t    B = ";
       cin>>b;
       cout<<"\t    C = ";
       cin>>c;

       cout<<"\t----------------";
       cout<<"\n\tA+B+C = "<<a+b+c;
       getch();
    }

  void Sub_Two()
     {
       system("cls");
       cout<<"\n\t***** Substraction of Two Numbers *****";
       cout<<"\n\t   A = ";
       cin>>a;
       cout<<"\t   B = ";
       cin>>b;
       cout<<"\t----------------";
       cout<<"\n\t A-B = "<<a-b;
       getch();
     }
  void Sub_Three()
    {
       system("cls");
       cout<<"\n\t***** Substraction of Three Numbers *****";
       cout<<"\n\t    A = ";
       cin>>a;
       cout<<"\t    B = ";
       cin>>b;
       cout<<"\t    C = ";
       cin>>c;

       cout<<"\t----------------";
       cout<<"\n\tA-B-C = "<<a-b-c;
       getch();
    }
  void Mul_Two()
     {
       system("cls");
       cout<<"\n\t***** Multiplication of Two Numbers *****";
       cout<<"\n\t   A = ";
       cin>>a;
       cout<<"\t   B = ";
       cin>>b;
       cout<<"\t----------------";
       cout<<"\n\t A*B = "<<a*b;
       getch();
     }
  void Mul_Three()
    {
       system("cls");
       cout<<"\n\t***** Multiplication of Three Numbers *****";
       cout<<"\n\t    A = ";
       cin>>a;
       cout<<"\t    B = ";
       cin>>b;
       cout<<"\t    C = ";
       cin>>c;

       cout<<"\t----------------";
       cout<<"\n\tA*B*C = "<<a*b*c;
       getch();
    }
   void Div_Two()
     {
       system("cls");
       cout<<"\n\t***** Division of Two Numbers *****";
       cout<<"\n\t   A = ";
       cin>>a;
       cout<<"\t   B = ";
       cin>>b;
       cout<<"\t----------------";
       cout<<"\n\t A/B = "<<a/b;
       getch();
     }
  void Div_Three()
    {
       system("cls");
       cout<<"\n\t***** Division of Three Numbers *****";
       cout<<"\n\t    A = ";
       cin>>a;
       cout<<"\t    B = ";
       cin>>b;
       cout<<"\t    C = ";
       cin>>c;

       cout<<"\t----------------";
       cout<<"\n\t(A/B)/C = "<<(a/b)/c;
       getch();
    }
};
int Basic_op()
{
   B_P BO;
   int c1;
   reapeat:
   system("cls");
   cout<<"\n\t***** Basic Operaions ****** ";
   cout<<"\n1. Addition . ";
   cout<<"\n2. Substraction. ";
   cout<<"\n3. Multiplication. ";
   cout<<"\n4. Division. ";
   cout<<"\n5. Main Menu. ";
   cout<<"\n6. Exit";
   cout<<"\n-----------------------------------";
   cout<<"\n\tEnter code : ";
   cin>>c1;
   switch(c1)
    {
      case code0: cout<<"Ivalid";
		 exit(0);
      case code1: again :
		  system("cls");
		  cout<<"\t ***^** ADDITION **^***";
		  cout<<"\n1. Addition of Two Number. ";
		  cout<<"\n2. Addition of Three Number. ";
		  cout<<"\n3. Basic Operation. ";
		  cout<<"\n4. Main Menu. ";
		  cout<<"\n5. Exit";
		  cout<<"\n-----------------------------------";
		  cout<<"\n\tEnter code : ";
		  cin>>c1;
		  switch(c1)
		{
		  case code0: cout<<"Ivalid";
		   exit(0);
		   case code1:BO.Add_two();
			       break;
		   case code2: BO.Add_Three();
			       break;
		   case code3: goto reapeat;
		   case code4: return 0;
		   case code5:exit(0);
		   default : cout<<"\nInvalid ";
		 }goto again;
    case code2 : Again :
		  system("cls");
		  cout<<"\t ***^** SUBSTRACTION **^***";
		  cout<<"\n1. Substraction of Two Number. ";
		  cout<<"\n2. Substration of Three Number. ";
		  cout<<"\n3. Basic Operation. ";
		  cout<<"\n4. Main Menu. ";
		  cout<<"\n5. Exit";
		  cout<<"\n-----------------------------------";
		  cout<<"\n\tEnter code : ";
		  cin>>c1;
		  switch(c1)
		{
		  case code0: cout<<"Ivalid";
		   exit(0);
		   case code1:BO.Sub_Two();
			       break;
		   case code2: BO.Sub_Three();
			       break;
		   case code3: goto reapeat;
		   case code4: return 0;
		   case code5:exit(0);
		   default : cout<<"\nInvalid ";
		 }goto Again;
    case code3 : MAgain :
		  system("cls");
		  cout<<"\t ***^** MULTIPLICATION **^***";
		  cout<<"\n1. Multiplication of Two Number. ";
		  cout<<"\n2. Multiplication of Three Number. ";
		  cout<<"\n3. Basic Operation. ";
		  cout<<"\n4. Main Menu. ";
		  cout<<"\n5. Exit";
		  cout<<"\n-----------------------------------";
		  cout<<"\n\tEnter code : ";
		  cin>>c1;
		  switch(c1)
		{
		  case code0: cout<<"Ivalid";
		   exit(0);
		   case code1:BO.Mul_Two();
			       break;
		   case code2: BO.Mul_Three();
			       break;
		   case code3: goto reapeat;
		   case code4: return 0;
		   case code5:exit(0);
		   default : cout<<"\nInvalid ";
		 }goto MAgain;

    case code4 :DAgain :
		  system("cls");
		  cout<<"\t ***^** DIVISION **^***";
		  cout<<"\n1. Division of Two Number. ";
		  cout<<"\n2. Division of Three Number. ";
		  cout<<"\n3. Basic Operation. ";
		  cout<<"\n4. Main Menu. ";
		  cout<<"\n5. Exit";
		  cout<<"\n-----------------------------------";
		  cout<<"\n\tEnter code : ";
		  cin>>c1;
		  switch(c1)
		{
		  case code0: cout<<"Ivalid";
		   exit(0);
		   case code1:BO.Div_Two();
			       break;
		   case code2: BO.Div_Three();
			       break;
		   case code3: goto reapeat;
		   case code4: return 0;
		   case code5:exit(0);
		   default : cout<<"\nInvalid ";
		 }goto DAgain;
    case code5 : return 0;
    case code6 :exit(0);
    default :cout<<"Invalid Code";
    }
  goto reapeat;
}
class Squar
{
  double n,i,f,t;
  public :
   void sqr1()
    {
      system("cls");
      cout<<" ***** Square of a  Number *****";
      cout<<"\n\n\t   Number : ";
      cin>>n;
      cout<<"\n\t  Square "<<" = "<<n*n;
      getch();
    }
  void sqr2();
  void sqr3();
   void sqrt1()
    {
      system("cls");
      cout<<" ***** Square Root of a  Number *****";
      cout<<"\n\n\t   Number : ";
      cin>>n;
      cout<<"\n   Square Root"<<" = "<<sqrt(n);
      getch();
    }
  void sqrt2();
  void sqrt3();

};
void Squar :: sqr2()
 {
   system("cls");
   cout<<"\n\t\t******* Square of 1 to 30 Numbers ********";
   cout<<"\n\nSquare from 1 to 10\tSquare from 11 to 20\tSquare from 21 to 30";
   cout<<"\n\nNumber  Square \t\tNumber  Square \t\tNumber  Square ";
   cout<<"\n____________________\t____________________\t____________________";
    for(i=1;i<=10;i++)
     {
      cout<<"\n   "<<i<<"  =  "<<i*i<<"\t\t   "<<i+10<<"  =  "<<(i+10)*(i+10)<<"\t\t   "
      <<i+20<<"  =  "<<(i+20)*(i+20);
     }
 getch();
}
void Squar :: sqr3()
  {
    system("cls");
    cout<<"\n******* Square Upto 10 Numbers  from Start ********";
    cout<<"\n Start  : ";
    cin>>f;
    end:
    cout<<"End ("<<f<<" To "<<f+9<<" ) : ";
    cin>>t;
    if(t<=f+9&&t>=f)
     {
      cout<<"\n\t\tSquare from "<<f<<" to "<<t;
      cout<<"\n\n\t\tNumber  Square ";
      cout<<"\n\t\t____________________";
      for(i=f;i<=t&&i<=f+9;i++)
       {
	cout<<"\n\t\t   "<<i<<"  =  "<<i*i;
       }
     }
   else
    {
     goto end;
    }
   getch();
}
void Squar :: sqrt2()
 {
   system("cls");
   cout<<"\n\n\t\t******* Square Root from 1 to 30 Numbers ********";
   cout<<"\n\nSquare Root 1 to 10\tSquare Root  11 to 20\tSquare  Root  21 to 30";
   cout<<"\n\nNumber  Square Root \tNumber  Square Root \tNumber  Square Root ";
   cout<<"\n____________________\t____________________\t____________________";
   for(i=1;i<=10;i++)
    {
      if(i==1||i==4||i==9||i==6)
	{
	  if(i==6)
	   {
	    cout<<"\n   "<<i<<"  =  "<<sqrt(i)<<"\t   "<<i+10<<"  =  "<<sqrt(i+10)<<"\t\t   "
	    <<i+20<<"  =  "<<sqrt(i+20);
	   }
	  else
	   {
	    cout<<"\n   "<<i<<"  =  "<<sqrt(i)<<"\t\t   "<<i+10<<"  =  "<<sqrt(i+10)<<"\t   "
	    <<i+20<<"  =  "<<sqrt(i+20);
	   }
	}
      else
       {
	 cout<<"\n   "<<i<<"  =  "<<sqrt(i)<<"\t   "<<i+10<<"  =  "<<sqrt(i+10)<<"\t   "
	 <<i+20<<"  =  "<<sqrt(i+20);
       }
  }
 getch();
}
void Squar :: sqrt3()
  {
    system("cls");
    cout<<"\n******* Square Root Upto 10 Numbers  from Start ********";
    cout<<"\n Start  : ";
    cin>>f;
    end:
    cout<<"End ("<<f<<" To "<<f+9<<" ) : ";
    cin>>t;
    if(t<=f+9&&t>=f)
     {
      cout<<"\n\t\tSquare Root from "<<f<<" to "<<t;
      cout<<"\n\n\t\tNumber  Square Root";
      cout<<"\n\t\t____________________";
      for(i=f;i<=t&&i<=f+9;i++)
       {
	cout<<"\n\t\t   "<<i<<"  =  "<<sqrt(i);
       }
     }
   else
    {
     goto end;
    }
   getch();
}


int Square()
{
   Squar sq;
   int c1;
   again :
   system("cls");
   cout<<"\n\t***** SQUARE and SQUARE ROOT *****";
   cout<<"\n1. Square of a Number. ";
   cout<<"\n2. Square From 1 to 30 ";
   cout<<"\n3. Square Upto 10 numbers From starting Number. ";
   cout<<"\n4. Square Root of a Number. ";
   cout<<"\n5. Square Root From 1 to 30 ";
   cout<<"\n6. Square Root Upto 10 Numbers From starting number. ";
   cout<<"\n7. Main Menu. ";
   cout<<"\n8. Exit";
   cout<<"\n-----------------------------------";
   cout<<"\n\tEnter code : ";
   cin>>c1;
   switch(c1)
   {
     case code0: cout<<"Invalid";
       exit(0);
     case code1: sq.sqr1();
		 break;
     case code2: sq.sqr2();
		 break;
     case code3: sq.sqr3();
		 break;
     case code4: sq.sqrt1();
		 break;
     case code5: sq.sqrt2();
		 break;
     case code6: sq.sqrt3();
		 break;
     case code7: return 0;
     case code8: exit(0);
     default : cout<<"\n INVALID";
    }goto again;
}

class Cube
{
  double n,i,f,t;
  public :
   void cube1()
    {
      system("cls");
      cout<<" ***** Cube of a  Number *****";
      cout<<"\n\n\t   Number : ";
      cin>>n;
      cout<<"\n\t  Cube "<<" = "<<pow(n,3);
      getch();
    }
   void cube2();
   void cube3();
   void cbrt1()
    {
      system("cls");
      cout<<" ***** Cube Root of a  Number *****";
      cout<<"\n\n\t   Number : ";
      cin>>n;
      cout<<"\n        Cube Root"<<" = "<<pow(n,1.0/3.0);
      getch();
    }
  void cbrt2();
  void cbrt3();
};
void Cube :: cube2()
 {
   system("cls");
   cout<<"\n\t\t******* Cube of 1 to 30 Numbers ********";
   cout<<"\n\nCube from 1 to 10\t Cube from 11 to 20\t  Cube from 21 to 30";
   cout<<"\n\nNumber   Cube \t\tNumber    Cube \t\tNumber    Cube ";
   cout<<"\n____________________\t____________________\t____________________";
    for(i=1;i<=10;i++)
     {
      cout<<"\n   "<<i<<"  =  "<<pow(i,3)<<"\t\t   "<<i+10<<"  =  "<<pow(i+10,3)<<"\t\t   "
      <<i+20<<"  =  "<<pow(i+20,3);
     }
 getch();
}
void Cube :: cube3()
  {
    system("cls");
    cout<<"\n******* Cube Upto 10 Numbers  from Start ********";
    cout<<"\n Start  : ";
    cin>>f;
    end:
    cout<<"End ("<<f<<" To "<<f+9<<" ) : ";
    cin>>t;
    if(t<=f+9&&t>=f)
     {
      cout<<"\n\t\tCube  from "<<f<<" to "<<t;
      cout<<"\n\n\t\tNumber  Cube ";
      cout<<"\n\t\t____________________";
      for(i=f;i<=t&&i<=f+9;i++)
       {
	cout<<"\n\t\t   "<<i<<"  =  "<<pow(i,3);
       }
     }
   else
    {
     goto end;
    }
   getch();
}
void Cube :: cbrt2()
 {
   system("cls");
   cout<<"\n\t\t******* Cuberoot of 1 to 30 Numbers ********";
   cout<<"\n\nCuberoot from 1 to 10\tCuberoot from 11 to 20\tCuberoot from 21 to 30";
   cout<<"\n\nNumber Cuberoot \t  Number  Cuberoot   \t  Number  Cube root ";
   cout<<"\n____________________\t____________________\t____________________";
    for(i=1;i<=10;i++)
     {
       if(i==1||i==8)
       {
	cout<<"\n"<<i<<" = "<<pow(i,1.0/3.0)<<"\t\t\t  "<<i+10<<" = "<<pow(i+10,1.0/3.0)<<"\t\t  "
	<<i+20<<"  =  "<<pow(i+20,1.0/3.0);
       }
      else
       {
	cout<<"\n"<<i<<" = "<<pow(i,1.0/3.0)<<"\t\t  "<<i+10<<" = "<<pow(i+10,1.0/3.0)<<"\t\t  "
	<<i+20<<"  =  "<<pow(i+20,1.0/3.0);
       }
     }
 getch();
}
void Cube :: cbrt3()
  {
    system("cls");
    cout<<"\n******* Cube root Upto 10 Numbers  from Start ********";
    cout<<"\n Start  : ";
    cin>>f;
    end:
    cout<<"End ("<<f<<" To "<<f+9<<" ) : ";
    cin>>t;
    if(t<=f+9&&t>=f)
     {
      cout<<"\n\t\tCube root  from "<<f<<" to "<<t;
      cout<<"\n\n\t\tNumber  Cube root ";
      cout<<"\n\t\t____________________";
      for(i=f;i<=t&&i<=f+9;i++)
       {
	cout<<"\n\t\t   "<<i<<"  =  "<<pow(i,1.0/3.0);
       }
     }
   else
    {
     goto end;
    }
   getch();
}

int Cub()
{
   Cube cb;
   int c1;
   again :
   system("cls");
   cout<<"\n\t***** CUBE and CUBE ROOT *****";
   cout<<"\n1. CUBE of a Number. ";
   cout<<"\n2. CUBE From 1 to 30 ";
   cout<<"\n3. CUBE Upto 10 numbers From starting Number. ";
   cout<<"\n4. CUBE Root of a Number. ";
   cout<<"\n5. CUBE Root From 1 to 30 ";
   cout<<"\n6. CUBE Root Upto 10 Numbers From starting number. ";
   cout<<"\n7. Main Menu. ";
   cout<<"\n8. Exit";
   cout<<"\n-----------------------------------";
   cout<<"\n\tEnter code : ";
   cin>>c1;
   switch(c1)
   {
     case code0: cout<<"Invalid";
       exit(0);
     case code1: cb.cube1();
		 break;
     case code2: cb.cube2();
		 break;
     case code3: cb.cube3();
		 break;
     case code4: cb.cbrt1();
		 break;
     case code5: cb.cbrt2();
		 break;
     case code6: cb.cbrt3();
		 break;
     case code7: return 0;
     case code8: exit(0);
     default : cout<<"\n INVALID";
    }goto again;
}
class Mult
{
  double n,i,j,f,t;
  public :
  void mult1();
  void mult2();
  void mult3();
  void mult4();
  void mult5();
};
void Mult::mult1()
{
  system("cls");
  cout<<"\n\n\t\t  ****** Multiplication Table of a Number  ****** ";
  cout<<"\n\nNumber : ";
  cin>>n;
  cout<<"\nMultiplication Table of "<<n<<" :- ";
  cout<<"\n------------------------------";
  for(i=1;i<=10;i++)
   {
    cout<<"\n  \t\t\t"<<n*i;
   }
  getch();
}
void Mult::mult2()
{
  system("cls");
  cout<<"\n----------------------------------------------------------------------------\n";
  cout<<"\t  ****** Multiplication Table From 1 to 10 Numbers ***** \n";
  cout<<"----------------------------------------------------------------------------\n";

    for(i=1;i<=10;i++)
     {
       cout<<"\n";
	   for(j=1;j<=10;j++)
	{
	  cout<<j*i<<"\t";
	}
     }
  getch();
}
void Mult::mult3()
{
  system("cls");
  cout<<"\n----------------------------------------------------------------------------\n";
  cout<<"\t  ****** Multiplication Table From 11 to 20 Numbers ***** \n";
  cout<<"----------------------------------------------------------------------------\n";

    for(i=1;i<=10;i++)
     {
       cout<<"\n";
	   for(j=11;j<=20;j++)
	{
	  cout<<j*i<<"\t";
	}
     }
  getch();
}
void Mult::mult4()
{
  system("cls");
  cout<<"\n----------------------------------------------------------------------------\n";
  cout<<"\t  ****** Multiplication Table From 21 to 30 Numbers ***** \n";
  cout<<"----------------------------------------------------------------------------\n";

    for(i=1;i<=10;i++)
     {
       cout<<"\n";
	   for(j=21;j<=30;j++)
	{
	  cout<<j*i<<"\t";
	}
     }
  getch();
}
void Mult::mult5()
{
  system("cls");
  cout<<"\n\n   ******* MULTIPLICATION TABLE Upto 10 Numbers From Starting  ********";
  cout<<"\n\n\t\tStart  : ";
  cin>>f;
  end:
  cout<<"\n\t\tEnd ( upto "<<f+9<<" ) : ";
  cin>>t;
  if(t<=f+9&&t>=f)
   {
     if(t==f+9)
      {
       cout<<"\n----------------------------------------------------------------------------\n";
       cout<<"\t  ****** Multiplication Table From "<<f<<" to "<<t<<" Numbers ***** \n";
       cout<<"----------------------------------------------------------------------------\n";
       for(i=1;i<=10;i++)
     	{
	      cout<<"\n";
		  for(j=f;j<=f+9&&j<=t;j++)
	       {
	         cout<<j*i<<"\t";
	       }
	    }
      }
     else
      {
       cout<<"\n----------------------------------------------------------------------------\n";
       cout<<"\t  ****** Multiplication Table From "<<f<<" to "<<t<<" Numbers ***** \n";
       cout<<"----------------------------------------------------------------------------\n";
       for(i=1;i<=10;i++)
       {
	 cout<<"\n";
	 for(j=f;j<=f+9&&j<=t;j++)
	  {
	   cout<<j*i<<"\t";
	  }
       }
    }
   }
  else
   {
     goto end;
   }
  getch();
}

int Multiplication()
{
   Mult M;
   int c1;
   again :
   system("cls");
   cout<<"\n\t***** MULTIPLICATION TABLE *****";
   cout<<"\n1. Multiplication Table of a Number. ";
   cout<<"\n2. Multiplication Table From 1 to 10 ";
   cout<<"\n3. Multiplication Table From 11 to 20 ";
   cout<<"\n4. Multiplication Table From 21 to 30 ";
   cout<<"\n5. Multiplication Table Upto 10 numbers From starting Number. ";
   cout<<"\n6. Main Menu. ";
   cout<<"\n7. Exit";
   cout<<"\n-----------------------------------";
   cout<<"\n\tEnter code : ";
   cin>>c1;
   switch(c1)
   {
     case code0: cout<<"Invalid";
       exit(0);
     case code1: M.mult1();
		 break;
     case code2: M.mult2();
		 break;
     case code3: M.mult3();
		 break;
     case code4: M.mult4();
		 break;
     case code5: M.mult5();
		 break;
     case code6: return 0;
     case code7: exit(0);
     default : cout<<"\n INVALID";
    }goto again;
}
class Area
{
   double a,r,l,b,h;
   public:
    void circle();
    void rectangle();
    void square();
    void cylender();
    void parallelogram();
    void elipse();
    void trapazoid();
};
void Area::circle()
{
  system("cls");
  cout<<"\n\n \t******* Area of Circle ********";
  cout<<"\n\n\tFormula : PI*r*r";
  cout<<"\n\n\t\tRadius : ";
  cin>>r;
  a=PI*r*r;
  cout<<"\n\tArea of Circle : "<<a;
  getch();
}
void Area::rectangle()
{
  system("cls");
  cout<<"\n\n \t******* Area of Rectangle ********";
  cout<<"\n\n\tFormula : Length*Breadth";
  cout<<"\n\n\t\t Length : ";
  cin>>l;
  cout<<"\n\t  Breadth /Width: ";
  cin>>b;
  a=l*b;
  cout<<"\n\tArea of Rectangle : "<<a;
  getch();
}
void Area::square()
{
  system("cls");
  cout<<"\n\n \t******* Area of Square ********";
  cout<<"\n\n\tFormula : Side*Side";
  cout<<"\n\n\t\t  Side : ";
  cin>>r;
  a=r*r;
  cout<<"\n\tArea of Square : "<<a;
  getch();
}
void Area::cylender()
{
  system("cls");
  cout<<"\n\n \t******* Area of Cylender ********";
  cout<<"\n\n\tFormula : (2*PI*r*h)+(2*PI*r*r)";
  cout<<"\n\n\t\tRadius : ";
  cin>>r;
  cout<<"\n\t\t Height: ";
  cin>>h;
  a=(2*PI*r*h)+(2*PI*r*r);
  cout<<"\n\tArea of Cylender : "<<a;
  getch();
}
void Area::parallelogram()
{
  system("cls");
  cout<<"\n\n \t******* Area of Parallelogram ********";
  cout<<"\n\n\tFormula : Breadth*Height";
  cout<<"\n\n\t Breadth/Width : ";
  cin>>l;
  cout<<"\n\t\t Height: ";
  cin>>h;
  a=l*h;
  cout<<"\n\tArea of Parallelogram : "<<a;
  getch();
}
void Area::elipse()
{
  system("cls");
  cout<<"\n\n \t******* Area of Elipse ********";
  cout<<"\n\n\tFormula : PI*a*b";
  cout<<"\n\n\t\ta Axis : ";
  cin>>l;
  cout<<"\n\t\t b Axis: ";
  cin>>h;
  a=PI*l*h;
  cout<<"\n\tArea of Elipse : "<<a;
  getch();
}
void Area::trapazoid()
{
  system("cls");
  cout<<"\n\n \t******* Area of Trapozoid ********";
  cout<<"\n\n\tFormula : ((a+b)/2)*h";
  cout<<"\n\n\t\t a Base : ";
  cin>>l;
  cout<<"\n\t\t  b Base: ";
  cin>>r;
  cout<<"\n\t\th Height: ";
  cin>>h;
  a=(((l+r)/2)*h);
  cout<<"\n\tArea of Trapozoid : "<<a;
  getch();
}

int AreA()
{
   Area A;
   int c1;
   again :
   system("cls");
   cout<<"\n\t\t***** AREA *****";
   cout<<"\nNote : For Calculation all the units must be same";
   cout<<"\n1. Area of Circle.";
   cout<<"\n2. Area of Rectangle. ";
   cout<<"\n3. Area of Square. ";
   cout<<"\n4. Area of Cylender. ";
   cout<<"\n5. Area of Parallelogram. ";
   cout<<"\n6. Area of Elipse. ";
   cout<<"\n7. Area of Trapozoid. ";
   cout<<"\n8. Main Menu. ";
   cout<<"\n9. Exit";
   cout<<"\n-----------------------------------";
   cout<<"\n\tEnter code : ";
   cin>>c1;
   switch(c1)
   {
     case code0: cout<<"Invalid";
       exit(0);
     case code1: A.circle();
		 break;
     case code2: A.rectangle();
		 break;
     case code3: A.square();
		 break;
     case code4: A.cylender();
		 break;
     case code5: A.parallelogram();
		 break;
     case code6: A.elipse();
		 break;
     case code7: A.trapazoid();
		 break;
     case code8: return 0;
     case code9: exit(0);
     default : cout<<"\n INVALID";
    }goto again;
}

class Volume
{
   double a,r,l,b,h;
   public:
    void sphere();
    void cylender();
    void cube();
    void cuboid();
    void cone();
    void pyramid();
    void rprism();
};
void Volume::sphere()
{
  system("cls");
  cout<<"\n\n \t******* Volume of sphere ********";
  cout<<"\n\n\tFormula : (4*PI*r*r*r)/3";
  cout<<"\n\n\t\tRadius : ";
  cin>>r;
  a=(4*PI*r*r*r)/3;
  cout<<"\n\tVolume of sphere : "<<a;
  getch();
}
void Volume::cylender()
{
  system("cls");
  cout<<"\n\n \t******* Volume of Cylender ********";
  cout<<"\n\n\tFormula : PI*r*r*h";
  cout<<"\n\n\t\tRadius : ";
  cin>>r;
  cout<<"\n\t\t Height: ";
  cin>>h;
  a=PI*r*r*h;
  cout<<"\n\tVolume of Cylender : "<<a;
  getch();
}
void Volume::cube()
{
  system("cls");
  cout<<"\n\n \t******* Volume of Cube ********";
  cout<<"\n\n\tFormula : a*a*a";
  cout<<"\n\n\t\ta Edge : ";
  cin>>r;
  a=r*r*r;
  cout<<"\n\tVolume of Cube : "<<a;
  getch();
}
void Volume::cuboid()
{
  system("cls");
  cout<<"\n\n \t******* Volume of Cuboid ********";
  cout<<"\n\n\tFormula : Length*Breadth*Height";
  cout<<"\n\n\t\t  Length : ";
  cin>>l;
  cout<<"\n\t\t Breadth : ";
  cin>>b;
  cout<<"\n\t\t  Height : ";
  cin>>h;
  a=l*b*h;
  cout<<"\n\tVolume of Cuboid : "<<a;
  getch();
}
void Volume::cone()
{
  system("cls");
  cout<<"\n\n \t******* Volume of Cone ********";
  cout<<"\n\n\tFormula : (PI*r*r*h)/3";
  cout<<"\n\n\t\tRadius : ";
  cin>>r;
  cout<<"\n\t\t Height: ";
  cin>>h;
  a=(PI*r*r*h)/3;
  cout<<"\n\tVolume of Cone : "<<a;
  getch();
}
void Volume::pyramid()
{
  system("cls");
  cout<<"\n\n \t******* Volume of Pyramid ********";
  cout<<"\n\n\tFormula : (l*w*h)/3";
  cout<<"\n\n\t    l Base length : ";
  cin>>l;
  cout<<"\n\t     w Base Width : ";
  cin>>b;
  cout<<"\n\t    h Base Height : ";
  cin>>h;
  a=(l*b*h)/3;
  cout<<"\n\tVolume of Pyramid : "<<a;
  getch();
}
void Volume::rprism()
{
  system("cls");
  cout<<"\n\n \t******* Volume of Rectangular Prism ********";
  cout<<"\n\n\tFormula : Length*Width*Height";
  cout<<"\n\n\t\t  Length : ";
  cin>>l;
  cout<<"\n\t\t   Width : ";
  cin>>b;
  cout<<"\n\t\t  Height : ";
  cin>>h;
  a=l*b*h;
  cout<<"\n\tVolume of Rectangular Prism : "<<a;
  getch();
}

int VolumE()
{
   Volume V;
   int c1;
   again :
   system("cls");
   cout<<"\n\t\t***** VOLUME *****";
   cout<<"\nNote : For Calculation all the units must be same";
   cout<<"\n1. Volume of Sphere.";
   cout<<"\n2. Volune of cylender. ";
   cout<<"\n3. Voulme of Cube. ";
   cout<<"\n4. Voulme of Cuboid. ";
   cout<<"\n5. Volume of Cone. ";
   cout<<"\n6. Volume of Pyramid. ";
   cout<<"\n7. Voulme of Rectangular Prism. ";
   cout<<"\n8. Main Menu. ";
   cout<<"\n9. Exit";
   cout<<"\n-----------------------------------";
   cout<<"\n\tEnter code : ";
   cin>>c1;
   switch(c1)
   {
     case code0: cout<<"Invalid";
       exit(0);
     case code1: V.sphere();;
		 break;
     case code2: V.cylender();
		 break;
     case code3: V.cube();
		 break;
     case code4: V.cuboid();
		 break;
     case code5: V.cone();
		 break;
     case code6: V.pyramid();
		 break;
     case code7: V.rprism();
		 break;
     case code8: return 0;
     case code9: exit(0);
     default : cout<<"\n INVALID";
    }goto again;
}
class Even_odd
{
   long int N,F,L,i;
   public:
    void check();
    void even1();
    void odd1();
    void even2();
    void odd2();
};
void Even_odd :: check()
{
  system("cls");
  cout<<"\n\t****** Check EVEN or ODD ******";
  cout<<"\n\n\t\t Number : ";
  cin>>N;
  if(N%2==0)
   {
     cout<<"\n\t\tNumber is EVEN ";
   }
  else
   {
    cout<<"\n\t\tNumber is ODD ";
   }
  getch();
}
void Even_odd :: even1()
{
  system("cls");
  cout<<"\n\n\t     ***** List of EVEN Numbers From 1 to 100 ***** \n\n";
   for(i=1;i<=100;i++)
    {
     if(i%2==0)
      {
	cout<<i<<"\t";
      }
    }
  getch();
}
void Even_odd :: odd1()
{
  system("cls");
  cout<<"\n\n\t     ***** List of ODD Numbers From 1 to 100 ***** \n\n";
   for(i=1;i<=100;i++)
    {
     if(i%2!=0)
      {
	cout<<i<<"\t";
      }
    }
  getch();
}
void Even_odd :: even2()
{
  system("cls");
  cout<<"\n\t****** Even Numbers upto Start to END Numdber *****";
  cout<<"\n\n\t\t START Number :";
  cin>>F;
  again:
  cout<<"\n\t   END Number (>START):";
  cin>>L;
  if(F<L)
   {
    cout<<"\n\t***** List of Even Numbers From "<<F<<" to "<<L<<" ***** \n";
     for(i=F;i<=L;i++)
      {
       if(i%2==0)
	{
	  cout<<i<<"\t";
	}
      }
   }
  else
  {
   goto again;
  }
  getch();
}
void Even_odd :: odd2()
{
  system("cls");
  cout<<"\n\t****** ODd Numbers upto Start to END Numdber *****";
  cout<<"\n\n\t\t START Number :";
  cin>>F;
  again:
  cout<<"\n\t   END Number (>START):";
  cin>>L;
  if(F<L)
   {
    cout<<"\n\t***** List of ODD Numbers From "<<F<<" to "<<L<<" ***** \n";
     for(i=F;i<=L;i++)
      {
       if(i%2!=0)
	{
	  cout<<i<<"\t";
	}
      }
   }
  else
  {
   goto again;
  }
  getch();
}

int EVEN_ODD()
{
   Even_odd E;
   int c1;
   again :
   system("cls");
   cout<<"\n\t\t***** EVEN ODD *****";
   cout<<"\n1. Check Number is Even Or Odd.";
   cout<<"\n2. EVEN Numbers From 1 to 100. ";
   cout<<"\n3. ODD Numbers From 1 to 100.  ";
   cout<<"\n4. Even Numbers upto Start to END Number. ";
   cout<<"\n5. ODD Numbers upto Start to END Number. ";
   cout<<"\n6. Main Menu. ";
   cout<<"\n7. Exit";
   cout<<"\n-----------------------------------";
   cout<<"\n\tEnter code : ";
   cin>>c1;
   switch(c1)
   {
     case code0: cout<<"Invalid";
       exit(0);
     case code1: E.check();;
		 break;
     case code2: E.even1();
		 break;
     case code3: E.odd1();
		 break;
     case code4: E.even2();
		 break;
     case code5: E.odd2();
		 break;
     case code6: return 0;
     case code7: exit(0);
     default : cout<<"\n INVALID";
    }goto again;
}


int Fibo()
{
  long int fibo=0,fibo1=0,fibo2=1,i,N;
  system("cls");
  cout<<"\n\t****** FIBONACCI SERIES ******";
  cout<<"\n\t Number : ";
  cin>>N;
  cout<<"\nFiboacci Series :  \n\t\t"<< fibo1<<"\t"<<fibo2;
  for(i=1;i<=N-2;i++)
   {
     fibo=fibo1+fibo2;
     cout<<"\t"<<fibo;
     fibo1=fibo2;
     fibo2=fibo;
   }
  getch ();
  return 0;
}

class Fact
{
   int i,n;
   float fact;
   public:
    void facto();
    void factor();
};
void Fact:: facto()
     {
       fact=1;
       system("cls");
       cout<<"\n\tdd***** Factoral of a Number ******";
       cout<<"\n\n\t   Number = ";
       cin>>n;
       for(i=1;i<=n;i++)
	{
	  fact=fact*i;
	}
	cout<<"\n\tFactorial = ";
	for(i=n;i>=1;i--)
	 {
	   if(i<2)
	    {
	     cout<<i;
	    }
	   else
	    {
	     cout<<i<<"*";
	    }
	 }
	cout<<"\n\t\t  = "<<fact;
	getch();
      }
void Fact::factor()
     {
       int n,i;
       system("cls");
       cout<<"\n\t***** Factors of a Number *****";
       cout<<"\n\t  Number = ";
       cin>>n;
       cout<<"\n\t Factors =";
       for(i=1;i<=n;i++)
       {
	if(n%i==0)
	{
	 cout<<" "<<i;
	}
       }
     getch();
}
int Factorial()
{
   Fact f;
   int c1;
   again :
   system("cls");
   cout<<"\n\t***** FACTORIAL and FACTORS *****";
   cout<<"\n1. Factorial ";
   cout<<"\n2. Factors of Number ";
   cout<<"\n3. Main Menu. ";
   cout<<"\n4. Exit";
   cout<<"\n-----------------------------------";
   cout<<"\n\tEnter code : ";
   cin>>c1;
   switch(c1)
   {
     case code0: cout<<"Invalid";
       exit(0);
     case code1: f.facto();
		 break;
     case code2: f.factor();
		 break;
     case code3: return 0;
     case code4: exit(0);
     default : cout<<"\n INVALID";
    }goto again;
}
main()
{
  int code;
  system("cls");
  again:
  system("cls");
  Main_menu();
  cout<<"\n\tEnter the code : ";
  cin>>code;
  switch(code)
  {
    case code0:cout<<"Invalid ";
	      break;
    case code1: Basic_op();
		break;
    case code2: Square();
		break;
    case code3: Cub();
		break;
    case code4: Multiplication();
		break;
    case code5: AreA();
		break;
    case code6: VolumE();
		break;
    case code7: EVEN_ODD();
		break;
    case code8: Fibo();
		break;
    case code9: Factorial();
		break;
    case code10: return 0;
    default : cout<<"Invaid choice";
  }
  goto again;
}
