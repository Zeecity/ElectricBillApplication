    const double RES_BILL_PROC_FEES = 4.53;

    const double RES_BASIC_SERV_COST = 20.50;

    const double RES_COST_PERM_CHANNEL = 7.50;


    const double BUS_BILL_PROC_FEES = 15.03;

    const double BUS_BASIC_SERV_COST = 75.00;

    const double BUS_BASIC_CONN_COST = 5.00;

    const double BUS_COST_PERM_CHANNEL = 50.00;

#include <iostream>

using namespace std;

int main()
{

    int accountNumber;

    char customerType;

    int numOfPremiumChannels;

    int numOfBasicServConn;

    double amountDue;



    cout << "Please enter your account number: " ;
    cin >> accountNumber ;

    cout << "What type of customer are you? enter 'r' for residential or 'b' for business ";
    cin >> customerType ;



    if((customerType == 'r') || (customerType == 'R') )
    {
        cout << "You are a Residential customer" ;

        cout << " Enter the number of premium channels";
        cin >> numOfPremiumChannels ;

        cout << "Enter the number of basic service connections:";
        cin >> numOfBasicServConn ;

        amountDue = RES_BILL_PROC_FEES + RES_BASIC_SERV_COST + (numOfPremiumChannels * RES_COST_PERM_CHANNEL);
        cout << "Bill = $" << amountDue << endl ;



    }else if ((customerType == 'b') || (customerType == 'B') )
    {
        cout << "You are a Business customer" ;

        cout << " Enter the number of premium channels";
        cin >> numOfPremiumChannels;

        cout << "Enter the number of basic service connections:";
        cin >> numOfBasicServConn ;



        if(numOfBasicServConn <= 10)
        {
            amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + ( numOfPremiumChannels * BUS_COST_PERM_CHANNEL) ;

            cout << "Bill = $" << amountDue << endl ;
        }else
        {
                amountDue = BUS_BILL_PROC_FEES + BUS_BASIC_SERV_COST + (numOfBasicServConn - 10) * BUS_BASIC_CONN_COST + numOfPremiumChannels * BUS_COST_PERM_CHANNEL;
                cout << "for " << accountNumber << " " << "Bill = $" << amountDue << endl ;
        }

    }

    return 0;
}
