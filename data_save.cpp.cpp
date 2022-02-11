#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,mark[n];
    float sum,per[i],math[n],eng[n],pps[n],bee[n],physics[n],egd[n];
	string name[100];
    string chname;
    char ch;
    cout <<"enter how many student data you have to enter"<<endl ;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter the student name : ";
        cin >> name[i];  
		cout<<"enter marks both theory + practicle"<<endl;
        cout << "enter mathematics marks of "<<name[i]<<" : ";
        cin>>math[i];
        sum+=math[i];
        cout<<endl;
        cout << "enter pps marks of "<<name[i]<<" : ";
        cin>>pps[i];
        sum+=pps[i];
        cout<<endl;
        cout << "enter physics marks of "<<name[i]<<" : ";
        cin>>physics[i];
        sum+=physics[i];
        cout<<endl;
        cout << "enter EGD marks of "<<name[i]<<" : ";
        cin>>egd[i];
        sum+=egd[i];
        cout<<endl;
        cout << "enter BEE marks of "<<name[i]<<" : ";
        cin>>bee[i];
        sum+=bee[i];
        cout<<endl;
        cout << "enter English marks of "<<name[i]<<" : ";
        cin>>eng[i];
        sum+=eng[i];
        cout<<endl;
        per[i]=sum/6;
        sum=0;
        
		  
    }
    cout<<"do want to see the student list \n  press 'y' for yes or press 'n' for no : ";
    cin>>ch;
    if (ch=='y')
    { 
        
        for (i = 0; i <n; i++)
        {
        	cout<<endl;
            cout<<name[i]<<"  PPS:"<<pps[i]<<"  Math:"<<math[i]<<"  BEE:"<<bee[i]<<"  EGD:"<<egd[i]<<"  Physics:"<<physics[i]<<"  English:"<<eng[i]<<endl; 
        }
        
    }
    else
    cout<<endl;
    cout<<"do want to search any student data \n  press 'y' for yes or press 'n' for no : ";
    cin>>ch;
    if(ch=='y')
    {
    	cout<<endl;
       cout<<"enter the student name which you want search : ";
       cin>>chname;
       for (i = 0; i < n; i++)
       {
           if (name[i] == chname)
           {
           	cout<<endl;
               cout<<name[i]<<"  PPS:"<<pps[i]<<"  Math:"<<math[i]<<"  BEE:"<<bee[i]<<"  EGD:"<<egd[i]<<"  Physics:"<<physics[i]<<"  English:"<<eng[i];
           }
           cout<<endl;
           
       }
       
    }
    else
    cout<<endl;
    cout<<"do you want to see percentage of all student \n  press 'y' for yes or press 'n' for no : ";
    cin>>ch;
    cout<<endl;
    if(ch=='y'){
       for(i=0;i<n;i++){
       	cout<<"percentage of "<<name[i]<<" is "<<per[i]<<"%"<<endl;
	   }
	}
	else goto end;
     end : return 0;
}

