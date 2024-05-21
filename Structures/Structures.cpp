#include <iostream>

using namespace std;

struct car{
    int length;
    int clearance;
    int EngineDisplacement;
    int PowerOfEngine;
    int WheelDiameter;
    string color;
    string GearboxType;
};

void inputdata(car &a) {
    int choice;
    cout << "Enter number to input data\n1-length\n2-clearance\n3-EngineDisplacement\n4-PowerOfEngine\n5-WheelDiameter\n6-color\n7-GearboxType\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter length : ";
        cin >> a.length;
        break;
    case 2:
        cout << "Enter clearance : ";
        cin >> a.clearance;
        break;
    case 3:
        cout << "Enter EngineDisplacement : ";
        cin >> a.EngineDisplacement;
        break;
    case 4:
        cout << "Enter PowerOfEngine : ";
        cin >> a.PowerOfEngine;
        break;
    case 5:
        cout << "Enter WheelDiameter : ";
        cin >> a.WheelDiameter;
        break;
    case 6:
        cout << "Enter color : ";
        cin >> a.color;
        break;
    case 7:
        cout << "Enter GearboxType : ";
        cin >> a.GearboxType;
        break;
    default:
        cout << "Error, input correct number!";
    }
}


void showdata(car &a) {
    int choice;
    cout << "Enter number to show data\n1-length\n2-clearance\n3-EngineDisplacement\n4-PowerOfEngine\n5-WheelDiameter\n6-color\n7-GearboxType\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "length : "<< a.length;
        break;
    case 2:
        cout << "clearance : " << a.clearance;
        break;
    case 3:
        cout << "EngineDisplacement : " << a.EngineDisplacement;
        break;
    case 4:
        cout << "PowerOfEngine : " << a.PowerOfEngine;
        break;
    case 5:
        cout << "WheelDiameter : " << a.WheelDiameter;
        break;
    case 6:
        cout << "color : " << a.color;
        break;
    case 7:
        cout << "GearboxType : " << a.GearboxType;
        break;
    default:
        cout << "Error, input correct number!";
    }
}




int main()
{
    car MyCar;
    inputdata(MyCar);
    showdata(MyCar);
}