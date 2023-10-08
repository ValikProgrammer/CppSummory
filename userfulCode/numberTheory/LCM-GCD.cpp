// *********************
// just use __gcd(a,b) - predefined c++ function
// *********************
// НОД
unsigned int lcm(unsigned int a, unsigned int b) { // least_common_multiple
  return (a*b)/gcd(a,b);
}


// *********************
// OLD OLD OLD
// *********************
// НОК
unsigned int gcd(unsigned int a, unsigned int b) {// greatest_common_divisor
  if (a % b == 0)
    return b;
  if (b % a == 0)
    return a;

  if (a > b)
    return gcd(a%b, b);
  return gcd(a, b%a);
}

// check 
// if a > b 
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int gcd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }

    while (b) {
        a %= b;
        swap(a, b);
    }

    return a;
}
