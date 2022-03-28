#include <iostream>

using namespace std;
//print menu
//get input
//if valid, do a thing
//if not valid, repeat
int main()
{
    int choice = 0;
    cout<<"Main Menu"<<endl;
    cout<<"1) Option 1"<< endl;
    cout<<"2) Exit"<< endl;
    cout<< "Choose: ";
    cin>>choice;
    //cout << "You picked "<< choice<<endl;
     if(1==choice){
        cout<< "You picked option 1."<<endl;
    }
    else if (2==choice){
        cout<<"Exiting now. Goodbye!"<<endl;
    }
    else{
        cout<<"Wrong Choice, please try again."<<endl;
    }

    return 0;
}

