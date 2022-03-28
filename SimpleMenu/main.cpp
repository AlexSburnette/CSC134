#include <iostream>

using namespace std;

int main()
{
    int choice;
    cout<<"Main Menu"<<endl;
    cout<<"1) Option 1"<< endl;
    cout<<"2) Exit"<< endl;
    cin>>choice;

    if(1==choice){
        cout<< "Option 1"<<endl;
    }
    else if(2=choice){
        cout<<"Exiting now. Thank you!"<<endl;
    }
    else{
        cout<<"Wrong Choice"<<endl;
    }
    return 0;
}
