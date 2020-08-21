#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
  double meal_cost;
  int tip_percent;
  int tax_percent;
  cin >> tip_percent;
  cin >> meal_cost;
  cin >> tax_percent;
   
   solve(meal_cost, tip_percent, tax_percent);

   return 0;
   }

void solve(double meal_cost, int tip_percent, int tax_percent) {
       
      double tip = (double)((meal_cost*tip_percent)/100);
      double tax = (double)((meal_cost*tax_percent)/100);
      double totalcost = (tip+tax+meal_cost);
      cout << round(totalcost) << endl;
    }