#include <iostream>
#include "main.h"
using namespace std;

int main() {
    LinkedList list;

    int value;
    int pos;
    bool add = false;
    char mode;
    list.addValue(1);
    list.addValue(3);
    list.addValue(5);
    list.addValue(7);

    cout << "---ASSIGNMENT PHASE 1--- "<<endl<<endl;
    cout << "Values are predefined in the link list to test on inserting and deleting."<<endl;
    cout << "The initial values are: 1,3,5,7." <<endl;
    cout << "They are added in sequence."<< endl;
    cout << "Initial showing of link list values: " << endl;
    cout << list.popAll() << endl << endl;  // Something wrong with the function, cant seem to solve why it display another "0"

    cout << "Do you wan to (A)dd or (D)elete?(A/D)";
    cin >> mode;
    if (mode == 'A' || mode == 'a' || mode == 'd' || mode == 'D')
    {
        if(mode == 'A' || mode == 'a')
        {
            cout << "Please key in the value to be added: ";
            cin >> value;
            cout << "Please key in the position for it to be added (0=starting): ";
            cin >> pos;
            list.addNodeAtPos(value,pos);
            cout << list.popAll() << endl;
        }
        if(mode == 'd' || mode == 'D')
        {
            cout << list.popAll() << endl;
            cout << "Please key in the position of the link list you wish to delete.(Starting = 0) ";
            cin >> pos;
            list.delNodeAtPos(pos);
            cout << list.popAll() << endl;
        }
    }
    else
        cout << "Please key in either A/D only.";

    return 0;

}
