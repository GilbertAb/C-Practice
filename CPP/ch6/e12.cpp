/*  PSEUDOCODE

    calculate parking charges
    -------------------------------
    A. Initialize variables
    B. Input parking hours
    C. Calculate and print parking hours and charge
    -------------------------------
    A.
    Initialize amount of customers (3)
    Initialize minimum fee ($2.00)
    Initialize hours for minimum fee (3)
    Initialize additional charge ($0.50)
    Initialize maximum charge ($10.0)
    Initialize maximum parking hours to 24 
    Initialize total charge to zero
    Initialize total parking hours to zero
    B.
    Because the program is for 3 customers, Counter controlled repetition 
    While customer counter is less or equal to three
        Prompt the user to enter the hours parked
        Add the hours parked to the total parking hours
        Add the minimum fee to the charge
        If the hours parked are more than 3
            If the hours parked is less than 24
                Multiply the hours parked minus the three hours fee by the additional charge ([hours_p-3]*0.50).
                Then add the result to the charge
            else
                Set charge equal to maximum charge
        Add charge to total charge
*/  

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

float calculateCharges(unsigned int hours_parked);

const unsigned int AMOUNT_CUSTOMERS = 3;
const float MINIMUM_FEE = 2.0;
const unsigned int HOURS_MINIMUM_FEE = 3;
const float ADDITIONAL_CHARGE = 0.50;
const float MAXIMUM_CHARGE = 10.0;
const unsigned int MAXIMUM_PARK_TIME = 24; /*Hours*/

int main() {
    float total_parking_hours = 0.0;
    float total_charge = 0.0;

    std::cout << std::fixed << std::setprecision(2);
    
    for (unsigned int customer_counter = 1; customer_counter <= 3; customer_counter++) {
        float hours_parked = 0.0;
        // Prompt the user to enter the hours parked
        std::cout << "Enter the hours parked: " << std::endl;
        std::cin >> hours_parked;
        // Add hours parked to total parking hours
        total_parking_hours += hours_parked;
        // Calculate charge for a single customer
        float charge = calculateCharges(std::ceil(hours_parked));
        // Print customer's parking hours and charge
        std::cout << "Car\tHours\tCharge" << std::endl;
        std::cout << customer_counter << "\t"<< hours_parked << "\t" << charge << std::endl; 
        // Add customer's charge to total charge
        total_charge += charge;
    }
    // Print total Hours and charge
    std::cout << "\nTotal\t"<< total_parking_hours << "\t" << total_charge << std::endl; 
    return 0;
}

float calculateCharges(unsigned int hours_parked) {
    // Add the minimum fee to the charge
    float charge = MINIMUM_FEE;
        // If the hours parked are more than 3
        if (hours_parked > 3) {
            // If the hours parked is less than 24
            if (hours_parked < MAXIMUM_PARK_TIME) {
                // Multiply the hours parked minus the three hours fee by the additional charge ([hours_p-3]*0.50).
                // Then add the result to the charge
                charge += (hours_parked - HOURS_MINIMUM_FEE) * ADDITIONAL_CHARGE;
            } else {
                // Set charge equal to maximum charge
                charge = MAXIMUM_CHARGE;
            }
        }
    return charge;
}
