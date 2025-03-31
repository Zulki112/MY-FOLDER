#include <iostream>
#include <array>
using namespace std;



int main() {
     array<int, 10> scores;



    int highest = scores[0];
    int lowest = scores[0];
    int sum = 0;


    for (int i=0; i<10; i++) {
        cout<< "Score " << (i+1)<< ": " <<endl;
        cin>> scores [i];

    }

    for (int score : scores)
        {
        if (score > highest) highest = score;
        if (score < lowest) lowest = score;
            sum += score;
        }


    double average = (sum * 1.0) / scores.size();

        cout<< "   RESULTS   " <<endl;
        cout << "Highest Score: " << highest << endl;
        cout << "Lowest Score: " << lowest << endl;
        cout << "Average Score: " << average << endl;

    return 0;
}

