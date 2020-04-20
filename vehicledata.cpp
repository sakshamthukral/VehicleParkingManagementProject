#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

/*class parking
{
private:
    int amount;
    char vehicle;
    int number;
    int slipno;
};*/

int main()
{
    int car=0;
    int rickshaw=0;
    int bus=0;
    int x;
    int amount=0,count=0;

    //menu
    while(true)
    {
    cout<<"Press 1 for rickshaw"<<endl;
    cout<<"press 2 for car"<<endl;
    cout<<"press 3 for bus"<<endl;
    cout<<"press 4 to show the whole record"<<endl;
    cout<<"press 5 to delete the entry"<<endl;
    cout<<"enter your choice : ";
    cin>>x;
    cout<<"************************************"<<endl;

    if(x==1)
    {
        if(count<=50)
        {
        rickshaw++;
        amount=amount+100;
        count=count+1;
        }
        else
            {cout<<"parking is full"<<endl;}
    }
    else if(x==2)
    {
        if(count<=50)
    {
        amount=amount+200;
        count=count+1;
        car++;
    }
    else
        {cout<<"parking is full"<<endl;}
    }
    else if(x==3)
    {
        if(count<=50)
    {
        amount=amount+300;
        count=count+1;
        bus++;
    }
    else
    {cout<<"parking is full"<<endl;}
    }
    else if(x==4)
    {
        cout<<"the total amount = "<<amount<<endl;
        cout<<"the total number of vehicles parked = "<<count<<endl;
        cout<<"total number of rickshaws : "<<rickshaw<<endl;
        cout<<"total number of cars : "<<car<<endl;
        cout<<"total number of busses : "<<bus<<endl;
        cout<<"*****************************************************"<<endl;
    }
    else if(x==5)
    {
        amount=0;
        count=0;
        rickshaw=0;
        car=0;
        bus=0;
        cout<<"*********************************************************"<<endl;
        cout<<"RECORD DELETED"<<endl;
        cout<<"*********************************************************"<<endl;
    }
    else
    {
        cout<<"invalid number"<<endl;
    }
    }
return 0;
}
