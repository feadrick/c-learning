
#include <iostream>
#include <conio.h>
#include<string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int  main()
{
    string member_type="";
    float bill_processing=0;
    float basic_service_fee=0;
    float premium_fee_channel=0;
    float premium_fee=0;
    float additional_connection=0;
    float total_payment=0;
    int account=0;
    int channel,connection=0;
    unputaccount :
    system("clear");
    cout<<"Enter Account Number :";
    cin>>account;
    if(cin.fail()){ //if entered input is not integer
        cout<<"entered input is not a digit";
        cin.clear();
        cin.ignore(10000,'\n');//clear the input
        goto unputaccount; 
    }
    cout<<"\nResidental customer=R\nBusiness Customer=B\n";
    cout<<"Enter customer type :";
    cin>>member_type;
    cout<<"how many channel? :";
    cin>>channel;
            if(member_type.compare("R")==0||member_type.compare("r")==0){
                   bill_processing=4.50;
                   basic_service_fee=20.50;
                   premium_fee_channel=7.50;
                            premium_fee=premium_fee_channel*channel;
                    
               }else if(member_type.compare("B")==0||member_type.compare("b")==0){
                   cout<<"how many connection? :";
                   cin>>connection;
                   bill_processing=15;
                   basic_service_fee=75;
                                basic_service_fee+=(connection-1)*5;
                   premium_fee_channel=50;
                            premium_fee=premium_fee_channel*channel;
                  
               }else{
                   cout<<"\nError encountered";
             }
             total_payment=bill_processing+basic_service_fee+premium_fee_channel;
             cout<<"Total : RM"<<total_payment<<endl;
   getch();
   return 0;
}

