#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <windows.h>
// #include <thread> // similar lib as the one below
// #include <chrono> // adding time delays
using namespace std;
/*
no database for demo - using vectors for now
Small management system
school:
    depts: cse , ece , it , ce , me
        years: 1-4
            classes: A1,A2,A3,A4
                student : name , urn , age , book borrowed (yes/no)?which , number
book: name , urn , borrowed (yes , no)
log add system - book , student , dept , year , class
checking up system - similar to above
CRD
update features not yet , will add that in the gui app if there is one
*/
vector<string> schools;
const string green_start = "\033[32m";
const string green_end = "\033[0m";
const string red_start = "\033[31m";
const string red_end = "\033[0m";
void temp_read_data();
void log_data();
void temp_read_data()
{
    cout << red_start;
    for (int i = 0; i < 7; i += 1)
    {
        cout << "\n";
        Sleep(100);
    }

    cout << "------------------------------------" << endl;
    int counter = 1;
    for (const auto &school : schools)
    {
        cout << school;
        Sleep(50);
        cout << " : " << counter << endl;
        counter += 1;
        Sleep(50);
    }
    cout << "------------------------------------";
    for (int i = 0; i < 7; i += 1)
    {
        cout << "\n";
        Sleep(100);
    }
    cout << red_end;
}
void log_data()
{
    int flag = 1;
    string school_name;
    while (flag == 1)
    {
        cout << "\033[32m \nEnter the name of the School\033[0m" << endl;
        getline(cin, school_name);
        // checking if the school alr exists in the vector
        auto temp = find(schools.begin(), schools.end(), school_name);
        if (temp != schools.end())
        {
            cout << "\033[31mSchool already present in the record\033[0m" << endl;
        }
        else
        {
            flag = 0;
        }
    }
    schools.push_back(school_name);
    cout << "**added**" << endl;
    Sleep(200);
}
int main()
{
    int temp;
    while (temp != 3)
    {
        temp = -1;
        cout << green_start << endl;
        cout << "Options: Press" << endl;
        Sleep(100);
        cout << "1 - Adding School Data" << endl;
        Sleep(100);
        cout << "2 - Read Data " << endl;
        Sleep(100);
        cout << "3 - Exit" << endl;
        Sleep(100);
        cout << green_end << endl;
        while (temp > 3 || temp < 1)
        {
            cout << "\n||||[1-3]||||:";
            cin >> temp;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // idk what this is , copied from chat gpt
            // but apparently this line clears the newline character from the buffer
            // solved the bug of not being able to add string characters in the log data function
        }
        switch (temp)
        {
        case 1:
            log_data();
            break;

        case 2:
            temp_read_data();
            break;
        case 3:
            cout << "\nAdios!";
        }
    }
}