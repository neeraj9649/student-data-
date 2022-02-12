#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n,mark[n];
    int cho;
    float sum,per[i],math[n],eng[n],pps[n],bee[n],physics[n],egd[n];
    float a;
    char ch;
    char grade[100];
	string name[100];
    string chname;
    cout<<"                                         WELCOME TO NEERAJ's PROJECT"<<endl;
    //taking student data
    cout <<"enter how many student data you have to enter"<<endl ;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter the student name : ";
        cin >> name[i];  
		cout<<"enter marks both theory + practicle"<<endl;
    again1: cout << "enter mathematics marks of "<<name[i]<<" : ";
        cin>>math[i];
        if(math[i]>100){
        	cout<<endl<<"you enterd invlaid number"<<endl;
        	goto again1;
		}else
		cout<<" ";
        sum+=math[i];
        cout<<endl;
    again2: cout << "enter pps marks of "<<name[i]<<" : ";
        cin>>pps[i];
        if(pps[i]>100){
        	cout<<endl<<"you enterd invlaid number"<<endl;
        	goto again2;
		}
		else
		cout<<" ";
        sum+=pps[i];
        cout<<endl;
        again3: cout << "enter physics marks of "<<name[i]<<" : ";
        cin>>physics[i];
        if(physics[i]>100){
        	cout<<endl<<"you enterd invlaid number"<<endl;
        	goto again3;
		}else
		cout<<" ";
        sum+=physics[i];
        cout<<endl;
        again4: cout << "enter EGD marks of "<<name[i]<<" : ";
        cin>>egd[i];
        if(egd[i]>100){
        	cout<<endl<<"you enterd invlaid number"<<endl;
        	goto again4;
		}else
		cout<<" ";
        sum+=egd[i];
        cout<<endl;
        again5: cout << "enter BEE marks of "<<name[i]<<" : ";
        cin>>bee[i];
        if(bee[i]>100){
        	cout<<endl<<"you enterd invlaid number"<<endl;
        	goto again5;
		}else
		cout<<" ";
        sum+=bee[i];
        cout<<endl;
        again6: cout << "enter English marks of "<<name[i]<<" : ";
        cin>>eng[i];
        if(eng[i]>100){
        	cout<<endl<<"you enterd invlaid number"<<endl;
        	goto again6;
		}else
		cout<<" ";
        sum+=eng[i];
        cout<<endl;
        per[i]=sum/6;
        sum=0;	  
    }  
    //calculating grade
    for(i=0;i<n;i++){
	a=per[i];
	if(a>=85)
	grade[i]='A';
	else if(a>=70 && a<85)
	grade[i]='B';
	else if (a>=55 && a<70)
	grade[i]='C';
	else if(a>=40 && a<55)
	grade[i]='D';
	else
	grade[i]='e';
}
start: cout<<"press "<<"1. for see all student list"<<endl<<"      2. for search student data"<<endl<<"      3. for see percentage and grade of all student"<<endl<<"      4. for search student percentage and grade"<<endl<<"      5. for exit"<<endl;
    cin>>cho;
    //printing student data
    if (cho==1)
    {  
        for (i = 0; i <n; i++)
        {
        	cout<<endl;
            cout<<name[i]<<"  PPS:"<<pps[i]<<"  Math:"<<math[i]<<"  BEE:"<<bee[i]<<"  EGD:"<<egd[i]<<"  Physics:"<<physics[i]<<"  English:"<<eng[i]<<endl; 
        }
       cout<<"do you want to perform another task 'y' for yes or 'n' for no : ";
       cin>>ch;
       if(ch=='y')
       goto start;
       else
       goto exit;
    }
    //searching of student data
    else if(cho==2)
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
           
           else
           cout<<endl<<"no student found of entered data";
       }
       cout<<"do you want to perform another task 'y' for yes or 'n' for no : ";
       cin>>ch;
       if(ch=='y')
       goto start;
       else
       goto exit;
    }
//printing of student percentage
    else if(cho==3){
       for(i=0;i<n;i++){
       	if(per[i]>=33)
       	cout<<name[i]<<" pass with "<<per[i]<<"%"<<" with grade: "<<grade[i]<<endl;
       	else
       	cout<<name[i]<<" fail and got percentage "<<per[i]<<"%" <<endl;
	   }
	   cout<<"do you want to perform another task 'y' for yes or 'n' for no : ";
       cin>>ch;
       if(ch=='y')
       goto start;
       else
       goto exit;
	}
	//searching percentage of a specific person
    else if(cho==4)
    {
    	cout<<endl;
       cout<<"enter the student name which you want search : ";
       cin>>chname;
       for (i = 0; i < n; i++)
       {
           if (name[i] == chname)
           {
           	cout<<endl;
               cout<<name[i]<< "  get percentage : "<<per[i]<<"  with grade : "<<grade[i]<<endl;
           }
           else
           cout<<"no student is there"<<endl;
       }
       cout<<"do you want to perform another task 'y' for yes or 'n' for no : ";
       cin>>ch;
       if(ch=='y')
       goto start;
       else
       goto exit;
    }   
	else if(cho==5)
	goto  exit;
    else
    {
	cout<<"                                 choose the number given below"<<endl;
	goto start;
    }
	exit: cout<<endl<<"                                Thenk you Come Again ";
    return 0;
}



