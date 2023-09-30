#include<iostream>
using namespace std;
int main()
{
	char name[100];
	int n,i,grade[100];
	float total_grade=0.0;
	int max_element;
	cout<<"Enter the number of students:";
	cin>>n;
	for( i=0;i<n;i++)
	{
		cout<<"Enter the name of the student "<<(i+1)<<": ";
		cin>>name;
		cout<<"Enter the grade of the student "<<(i+1)<<": ";
		cin>>grade[i];
	
		total_grade+=grade[i];
		
    }
    cout<<" Name_of Student"<<" Grade_of_student"<<endl;
    for(i=0;i<n;i++)
    {
    	cout<<name[i];
    	cout<<"\t\t"<<grade[i];
    	cout<<endl;
    	
	}
	    //Average grade of the student 
	    
		float avg;
		avg=total_grade/n;
		cout<<"Average Grade: "<<avg;
		cout<<endl;
		
		// For highest and lowest grades
		int max=grade[0];
		int min=grade[0];
		for(i=1;i<n;i++)
		{
		   if(grade[i]>max)
		   max=grade[i];
	    }
	    cout<<"Maximum Grade: "<<max<<endl;
	    for(i=1;i<n;i++)
	    {
	    	if(grade[i]<min)
	    	min=grade[i];
		}
		cout<<"Minimum Grade: "<<min<<endl;
	
	
	
}
