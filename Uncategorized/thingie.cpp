#include <iostream>
#include <fstream> 
#include <string> 
#include <algorithm> 
#include <cctype>

using namespace std;
int ordnum;
string usure, priceok, goagain, carpchose, FileOutput;
float SqM , price;
ofstream myFile;


void RED()
    {
        cout<<"You have chosen red are you sure (yes or no) \n";
        cin>>usure;
        transform(usure.begin(), usure.end(), usure.begin(), ::tolower);
    }
void BLUE()
    {
        cout<<"You have chosen blue are you sure (yes or no) \n";
        cin>>usure;
        transform(usure.begin(), usure.end(), usure.begin(), ::tolower); 
    }
void GREEN()
    {
        cout<<"You have chosen green are you sure (yes or no)\n";
        cin>>usure;
        transform(usure.begin(), usure.end(), usure.begin(), ::tolower); 
    }
void WrongCarpNum() 
    {
        cout<<"What colour carpet do you want\n1.Red(£100 per square meter)\n2.Blue(£150 per square meter)\n3.Green(£200 per square meter)\nPlease input either the word (Red) the word (Blue) or the word (Green) ";
        cin>>carpchose;
        transform(carpchose.begin(), carpchose.end(), carpchose.begin(), ::tolower); 
        if (carpchose == "red")
        {
            RED();
            SquareMeterRedo1:
            if (usure == "yes")
            {
                cout<<"Ok how many square meters of carpet do you want\n";
                cin>>SqM;
                if (SqM < 1)
                {
                    cout<<"The amount of square meters must be at least one or more please input the amount of square meters again.\n";
                    goto SquareMeterRedo1;
                }
                price = SqM * 100;
                cout<<"Ok the price of your carpet will be £"<<price<<".";
            }
            
            else if (usure == "no")
            {
                cout<<"\nOk please try again\n\n\n\n\n\n\n\n\n";
                WrongCarpNum();
            }
            
            else
            
            {
                cout<<"You have made a mistake please try again please answer with yes or no.\n\n";
                RED();
                goto SquareMeterRedo1;
            }
        }
        
        else if (carpchose == "blue")
        {
            BLUE();
            SquareMeterRedo2:
            if (usure == "no")
            {
                cout<<"Ok please try again\n\n\n\n\n\n\n\n\n";
                WrongCarpNum();
            }
        else if (usure == "yes")
            {
                cout<<"Ok how many square meters of carpet do you want\n";
                cin>>SqM;
                if (SqM < 1)
                {
                    cout<<"The amount of square meters must be at least one or more please input the amount of square meters again.\n";
                    goto SquareMeterRedo2;

                }
                price = SqM * 150;
                cout<<"Ok the price of your carpet will be £"<<price<<".";
            }
            else
            
            {
                cout<<"You have made a mistake please try again please answer with yes or no\n\n";
                BLUE();
                goto SquareMeterRedo2;
            }
        }
        
        else if (carpchose == "green")
        {
            GREEN();
            SquareMeterRedo3:
            if (usure == "no")
            {
                cout<<"Ok please try again\n\n\n\n\n\n\n\n\n";
                WrongCarpNum();
            }
            else if (usure == "yes")
            {
                cout<<"Ok how many square meters of carpet do you want\n";
                
                cin>>SqM;
                if (SqM < 1)
                {
                    cout<<"The amount of square meters must be at least one or more please input the amount of square meters again.\n";
                    goto SquareMeterRedo3;
                }
                price = SqM * 200;
                cout<<"Ok the price of your carpet will be £"<<price<<".";
            }
            else
            {
                cout<<"You have made a mistake please try again please answer with a yes or a no\n\n";
                GREEN();
                goto SquareMeterRedo3;
            }
        }
        else
        
        {
            cout<<"You have made a mistake when saying what carpet you want we do not have a carpet colour linked to the word "<<carpchose<<"\n\nPlease try again.\n";
            WrongCarpNum();
        }
    }
int main()
{
    restart:
    cout<<"The Magic Carpet Company";
    myFile.open("ORDERS.txt",std::ios_base::app);
    cout<<"\n\nWhat is your order number (No mistakes allowed) ";
    cin>>ordnum;
    WrongCarpNum();
    myFile<<"\n\nThe order "<<ordnum<<" consists of the following information \n\n The carpet colour ("<<carpchose<<"). \n\n The amount of carpet ordered in square meters is ("<<SqM<<") \n\n The price is £"<<price<<"\n\n\n______________________________________________";
    cout<<"\nThe order "<<ordnum<<" consists of the following information \n\nThe carpet colour ("<<carpchose<<"). \n\nThe amount of carpet ordered in square meters is ("<<SqM<<") \n\nThe price is £"<<price<<".";
    ifstream myFile("ORDERS.txt");
    cout<<"\n\nDo you want to go again?(anything but the word yes will terminate the program)\n\n";
    cin>>goagain;
    transform(usure.begin(), usure.end(), usure.begin(), ::tolower); 
    cout<<"\n\n\n\n\n";
    while (goagain == "yes")
    {
        goto restart;
    }
return 0;
}
