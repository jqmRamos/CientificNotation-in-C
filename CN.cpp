#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    return 0;
}

// this function is lost here? yes 
int hipotenuse(double a, double b){
    return sqrt(pow(a,2) + pow(b,2));
}


void CientificNotation(float a){
    using namespace std;
    int b = 0;
    int fds = 1;
    std::cout << "\nThe Cientific Notation is given by: a*10^b \n" << a;
   
    float n;
    float c = 3.16;
    
    while (fds = 1){
      if (a > 10){
          n = a;
          a = n/10;
      }
      else {
        break;
      }
      b++;
   }
    cout << fixed;
    cout.precision(2);
    cout << "\n" << a  << " * 10^" << b;
  }
