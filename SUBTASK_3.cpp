# include <iostream> // 9. Put a hash so that the header can work
# include <iomanip> // 8. Import ipmanip for the fixed function
using namespace std; // 1. Fixed the stt to std

const int NUM_EXPERIMENTS = 4; //7. Change the number of experiments so It fix 4
const int NUM_READINGS = 3;

int main() {
    int i , j;
    double readingValue, total, average;
    int reading[4]; 

    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        int total = 0;
        cout << "\nEXPERIMENT " << i << endl;
        cout << "================= \n";
        for (j = 1; j <= NUM_READINGS; j++)
        {
            cout << "Enter reading " << j << " value: ";
            cin  >> readingValue; // 2. Change  reading to readingValue
            total = total + readingValue; // 3. Change + to - cause we have to + to get the answer
        }

        average = total / NUM_READINGS;  // 4. Remove the last add a total
        
        // Incorporate evaluation logic directly
        if (average < 100) {  // 6.Fix the logic so it can check if it is smaller than hundered
            cout << "Experiment " << i << " average: "
                 << fixed << setprecision(2)
                 << average << " is Below acceptable range\n";
        }
        else if ( average >= 100 && average <= 300)  // 5. Change Or to and cause we need to check both values.
        {
            cout << "Experiment " << i << " average: "
                 << fixed << setprecision(2) << average 
                 << " is Within acceptable range\n";
        }
        else 
        {
            cout << "Experiment " << i << " average: "
            << fixed << setprecision(2) << average
            << " is Above acceptable range\n";
        }
    }

    return 0;
}