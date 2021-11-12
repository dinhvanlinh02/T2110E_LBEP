#include <iostream>
#include <iomanip>
using namespace std;
int main()
 {
   int n; cout << "Nhap so phan tu n = "; cin >> n;
   int s[n];
   double average = 0;
   cout << "Enter array:\n";
   for (int i = 0; i < n; i++)
    {
      cin >> s[i];
      average += s[i];
   } 
   average /= n;
   cout << "Average : " << fixed << setprecision(1) << average;
}

