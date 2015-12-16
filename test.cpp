#include <iostream>
#include "friend.h"
using namespace std;

int main()
{
   // This is a test for friend class.
   int sum = 0;
   for (int i = 1; i < 10; i++) {
      if (i % 3 == 0 || i % 5 == 0) {
         sum += i;
      }
   }
   cout << "sum : " << sum << endl;
   return 0;
}
