#include <iostream>
#include <fstream>
using namespace std;
int no_of_seats=0;
int available = 10;
int booked_seats = 0;
 ofstream bus("seat and traveller detaiil");
void show(int booked_seats)
{
    int ch;
    ch = booked_seats;
    if (ch == 0)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.vacant   2.vacant   |" << endl;
        cout << "|  3.vacant   4.vacant   |" << endl;
        cout << "|  5.vacant   6.vacant   |" << endl;
        cout << "|  7.vacant   8.vacant   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 1)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.vacant   |" << endl;
        cout << "|  3.vacant   4.vacant   |" << endl;
        cout << "|  5.vacant   6.vacant   |" << endl;
        cout << "|  7.vacant   8.vacant   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 2)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.vacant   4.vacant   |" << endl;
        cout << "|  5.vacant   6.vacant   |" << endl;
        cout << "|  7.vacant   8.vacant   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 3)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.booked   4.vacant   |" << endl;
        cout << "|  5.vacant   6.vacant   |" << endl;
        cout << "|  7.vacant   8.vacant   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 4)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.booked   4.booked   |" << endl;
        cout << "|  5.vacant   6.vacant   |" << endl;
        cout << "|  7.vacant   8.vacant   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 5)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.booked   4.booked   |" << endl;
        cout << "|  5.booked   6.vacant   |" << endl;
        cout << "|  7.vacant   8.vacant   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 6)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.booked   4.booked   |" << endl;
        cout << "|  5.booked   6.booked   |" << endl;
        cout << "|  7.vacant   8.vacant   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 7)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.booked   4.booked   |" << endl;
        cout << "|  5.booked   6.booked   |" << endl;
        cout << "|  7.booked   8.vacant   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 8)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.booked   4.booked   |" << endl;
        cout << "|  5.booked   6.booked   |" << endl;
        cout << "|  7.booked   8.booked   |" << endl;
        cout << "|  9.vacant   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 9)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.booked   4.booked   |" << endl;
        cout << "|  5.booked   6.booked   |" << endl;
        cout << "|  7.booked   8.booked   |" << endl;
        cout << "|  9.booked   10.vacant  |" << endl;
        cout << "--------------------------" << endl;
    }
    else if (ch == 10)
    {
        cout << "--------------------------" << endl;
        cout << "|  1.booked   2.booked   |" << endl;
        cout << "|  3.booked   4.booked   |" << endl;
        cout << "|  5.booked   6.booked   |" << endl;
        cout << "|  7.booked   8.booked   |" << endl;
        cout << "|  9.booked   10.booked  |" << endl;
        cout << "--------------------------" << endl;
    }
    else
    {
        cout << "invalid input" << endl;
    }
}
void booktickets()
{
    // int no_of_seats;
    
    string name, pickup_city, drop_city;
    cout << "enter your name" << endl;
    cin >> name;
    cout<<"enter no of seats u want to book"<<endl;
    cin>>no_of_seats;
     cout << "enter pickup city" << endl;
    cin >> pickup_city;
    cout << "enter drop city" << endl;
    cin >> drop_city;

    if (no_of_seats > available)
    {
        cout << "not enough seats are available" << endl;
    }
    else
    {
        cout << "seats booked successfully" << endl;
    }
   

    // string add = name + ".txt";
    // ofstream peoples(add);

    // peoples << name << endl;
    // peoples << pickup_city << endl;
    // peoples << drop_city << endl;

    available = available - no_of_seats;
    booked_seats = booked_seats + no_of_seats;

    bus<<name<<endl;
    bus<<no_of_seats<<endl;
    bus<<pickup_city<<endl;
    bus<<drop_city<<endl;

    bus<<endl;
}
int main()
{
    int choice;

    while (true)
    {
        cout << "----------------- arya bus service-----------------" << endl;
        cout << "1.book seats" << endl;
        cout << "2.view details" << endl;
        cout << "3.exit" << endl;

        cout << "enter choice" << endl;
        cin >> choice;
        if (choice == 1)
        {
            booktickets();
            show(booked_seats);
        }
        else if (choice == 2)
        {
            show(booked_seats);
        }
        else if (choice == 3)
        {
            return 0;
        }
        else
        {
            cout << "invalid choice" << endl;
        }
    }
    
}