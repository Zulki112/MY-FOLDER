#include <iostream>
using namespace std;


const int FLOORS = 5;
const int SPOTS = 20;

int main() {
    int parkingLot[FLOORS][SPOTS] = {0};
    int option;

    do {
            cout << "PARKING LOT PROGRAM" <<endl;
            cout << "1. Check if a parking spot is available" <<endl;
            cout << "2. Find the nearest available parking spot" <<endl;
            cout << "3. Show available spots per floor" <<endl;
            cout << "4. Exit" <<endl;
            cout << "Select option: ";
            cin >> option;

        switch (option) {
            case 1: {
                int floor, spot;
                    cout << "Enter floor number (1-5): ";
                    cin >> floor;
                    cout << "Enter spot number (1-20): ";
                    cin >> spot;

                if (parkingLot[floor - 1][spot - 1] == 0) {
                    cout << "Spot is AVAILABLE." <<endl;
                } else {
                    cout << "Spot is OCCUPIED." <<endl;
            }

            case 2: {
                bool found = false;
                for (int i = 0; i < FLOORS; i++) {
                    for (int j = 0; j < SPOTS; j++) {

                    if (parkingLot[i][j] == 0) {
                    cout << "Nearest available spot: Floor " << (i + 1) << ", Spot " << (j + 1) << endl;
                            found = true;
                            break;
                        }
                    }
                    if (found) break;
                }
                if (!found) {
                    std::cout << "No available parking spots" <<endl;
                }
                break;
            }

            case 3: {
                for (int i = 0; i < FLOORS; i++) {
                    int available = 0;
                    for (int j = 0; j < SPOTS; j++) {
                        if (parkingLot[i][j] == 0) {s
                            available++;
                        }
                    }
                    cout << "Floor " << (i + 1) << ": " << available << " spots available" <<endl;
                }
                break;
            }

            case 4:
                    cout << "Exiting" <endl;
                break;

            default:
                    cout << "Invalid choice, try again" <<endl;
        }
    } while (choice != 4);

    return 0;
}









