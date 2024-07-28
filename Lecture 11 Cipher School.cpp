// here in this lecture we are going to learn about while loop and the break statement which we will be using inside the loop 

#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	while(i<=100) // even using the while loop we still need to set the condition everytime the condition gets true , inside it curly bracket code will executed
	{
		cout<<i<<" ";
		i++; // here we are same incrementing after performing every operation just like we did in for loop 
	}
	
	// while loop are generally use when where you dont know when and at how many rounds you want your loop to be run
	
	
	// now after this we want to know about the break statement, this statement use when the user wants to get outside of the loop 
	
	int input;
	
	for(int i=1; i<=100;i++)
	{
		cin>>input;
		
		if(input==65) // here we have set a condition where we are checking the time when the input value will get 65 the loop will get out
		{
			cout<<"congrats you correct the right input"<<endl;
			break; // here we have state the break statment 
		}
	}
	
	return 0;
}
