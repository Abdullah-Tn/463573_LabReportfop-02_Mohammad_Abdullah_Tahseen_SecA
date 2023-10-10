#include<iostream>
using namespace std; 
int main()
{
	float a; 
	cout<<"Task 1:- "<<endl;
	
	cout<<"  Please enter your obtained score"<<endl;
	cin>>a;
	
	if(a<0)
	{cout<<"Invalid score entered."<<endl;
	}
	else if(a>100)
	{cout<<"Invalid score entered."<<endl;
	}
	else if(a>=90)
	{cout<<"You have obtained an A-Grade."<<endl;
	}
	else if(a>=75)
	{cout<<"You have obtained a B-Grade. "<<endl;
	}
	else if(a>=60)
	{cout<<"You have obtained a C-Grade."<<endl;
	}
	else if(a>=45)
	{cout<<"You have obtained a D-Grade"<<endl;
	}
	else if(a<45)
	{cout<<"You have obtained an F-Grade"<<endl;
	}
	else
	{cout<<"Invalid Score entered."<<endl;
	}
	//end of task1
	cout<<"Task 2:- "<<endl;
	int b;
	cout<<" Enter input integer "<<endl;
	cin>>b;
	//the % operation, gives the remainded of any number when divided by some other number.
	if(b % 2 == 0)
	{
		if(b % 5 == 0)
		{cout<<"The provided integer is both even and divisble by 5"<<endl;}
		else
	    {cout<<"The provided integer is only even and not divisible by 5."<<endl;}
		
	}

	else if(b % 5 == 0 )
	{cout<<" The provided integer is only divisible by 5 and not even"<<endl;
	}
	else
	{cout<<" The provided integer is nor even neither divisible by 5"<<endl;
	}
	//end of task 2
	
	cout<<"Task 3:-"<<endl;
	int c; 
	cout<<"Please enter a year"<<endl; 
	cin>>c;
	
	if(c % 4 == 0)
	{cout<<"The provided year is a leap year"<<endl;
	}
	//By definition of a leap year "a year, occurring once every four years, which has 366 days". 
	//As it is every 4 years, so each leap year should be a multiple of 4.
	else if(c<=0)
	{cout<<"INVALID YEAR ENTERED"<<endl;
	}
	//As the AD  calender year can't be in negatives or 0
	else 
	{cout<<"The year provided by the user is not a leap year"<<endl;
	}
	
	//end of task 3
	
	float G, A; 
	
	cout<<"TASK 4 :-     "<<endl;
	            
	cout<<"Please enter your GPA "<<endl;
	cin>>G;
	
	cout<<"Please enter your attendence percentage"<<endl;
	cin>>A;
	
    if((G<0||G>4) && (A<0||A>100))
	{cout<<"Invalid GPA and Attendence entered"<<endl;
	} 
	//the above conditional statement covers all constraints that make the program invalid using gate AND gates and OR gates
    else if(G>4 || G<0)
	{cout<<"Invalid GPA entered"<<endl;
	}
	else if (A>100 || A<0)
	{cout<<"Invalid Attendence percentage entered"<<endl;
	}
	//After the commands to invalid with values entered, the bottom lines deal with assinging the student with a scholarship based on the conditions
	else if(G>=3.5)
	{
		
		if (A>=80)
		{cout<<"The student is eligible for a scholarship"<<endl;
		}
		
		else 
		{cout<<"The student is not eligible for a scholarship due to low Attednence"<<endl;
		}
	
	}
	else if(G<3.5)
	{
		
	    
		if(A<80)
		{cout<<"The student is not eligible for a scholarship due to both low Attendence and low GPA"<<endl;
		}
		
		else
		{cout<<"The student is not eligible for a scholarship due to low GPA"<<endl;
		}
		
	}

	//end of task 4
	
	

    char character; 
    cout<<"Task 5:-"<<endl;
	
	cout<<"Enter the character "<<endl;
	cin>>character;
	//by using char we can assign any letter to "character" whether capital or lower case 
	//or gates make it so that the statement if anyone of the conditions is true, henceforth covering all the consonants.
	// == sign is used to check if character is equal to the given letter or not. 
	if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
	{cout<<"Your character is a lowercase vowel"<<endl;
	}

	else if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
	{cout<<"Your character is an uppercase vowl"<<endl;
	}
	
	else
	{cout<<"Your character is a consonant"<<endl;
	}

	return 0;
}