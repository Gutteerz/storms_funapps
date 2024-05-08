#include <iostream>

using namespace std;

void printMenu() {
    cout << "1. Convert % and amount to equivalent amount in %" << endl;
    cout << "2. calculate end % when mixing two liquids" << endl;
    cout << "0. Exit" << endl;
};

void option1(double strpercent, double strcl, double endpercent) {
    double endcl;
    double ABV;
    ABV = strcl * strpercent;
    endcl = ABV / endpercent;
    cout << "If you have " << strcl << "cl of " << strpercent << "% alcohol, you have " << endcl << "cl of " << endpercent << "% alcohol." << endl;
};

void option2(double drink1percent, double drink1cl, double drink2percent, double drink2cl) {
    double ABV1;
    double ABV2;
    double endpercent;
    ABV1 = drink1cl * drink1percent;
    ABV2 = drink2cl * drink2percent;
    endpercent = (ABV1 + ABV2) / (drink1cl + drink2cl);
    cout << "If you mix " << drink1cl << "cl of " << drink1percent << "% alcohol with " << drink2cl << "cl of " << drink2percent << "% alcohol, you get " << endpercent << "% alcohol." << endl;
};

int main() {
    int choise = -1;
    double strpercent;
    double strcl;
    double endpercent;

    double drink1percent;
    double drink1cl;
    double drink2percent;
    double drink2cl;

    while(choise != 0) {
        printMenu();
        cin >> choise;

        if (choise == 1) {
            cout << "Enter %: " << endl;
            cin >> strpercent;
            cout << "Enter amount in cl: " << endl;
            cin >> strcl;
            cout << "Enter what % you want to convert to: " << endl;
            cin >> endpercent;
            option1(strpercent, strcl, endpercent);
        }
        if(choise == 2) {
            cout << "Enter % of drink 1: " << endl;
            cin >> drink1percent;
            cout << "Enter amount in cl of drink 1: " << endl;
            cin >> drink1cl;
            cout << "Enter % of drink 2: " << endl;
            cin >> drink2percent;
            cout << "Enter amount in cl of drink 2: " << endl;
            cin >> drink2cl;
            option2(drink1percent, drink1cl, drink2percent, drink2cl);
        }
    }
    return 0;
}
