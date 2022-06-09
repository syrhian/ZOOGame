#include <iostream>
using namespace std;
void menu() {
    cout << "choisissez une option :" << endl;
    cout << "1.boutique" << endl;
    cout << "2.voir les abitats" <<endl;
    int choice;
    cin >> choice;
    if (choice == 1){
        cout << "choisissez une option :" << endl;
        cout << "1. acheter nourriture"<< endl;
        cout << "2. acheter animaux"<< endl;
        cout << "3. acheter habitat"<< endl;
        cin >> choice;
        switch (choice) {
            case 1:
            case 2:
            case 3: ;
        }
    }
}

void market() {

}

int main(){
    menu();
}