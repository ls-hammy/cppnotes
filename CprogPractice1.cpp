#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<cstring>
using namespace std;
//int main()
//{
//
//	/*
//	int a, b, temp;
//	cout << "Enter first number: " << endl;
//	cin >> a;
//	cout << "Enter second number: " << endl;
//	cin >> b;
//
//	temp = a; //value of a is assigned to temp variable and a is left empty
//	a = b; //now value of b is assigned to a
//	b = temp; //now the value to temp is assigned to b
//
//	cout << "Swapped value 1= " << a << endl;
//	cout << "Swapped value 2= " << b << endl;
//	*/
//
//
//	/*
//	int year;
//	cout << "Enter your birthday to check if it's a leap year: " << endl;
//	cin >> year;
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		cout << year << " is a leap year." << endl;
//	else
//		cout << year << " is not a leap year." << endl;
//	*/
//
//	/*
//	int n,till;
//	cout << "Enter the number you want the table of: " << endl;
//	cin >> n;
//	cout << "Enter the times you want it to multiply: " << endl;
//	cin >> till;
//
//	for (int i = 1; i <= till; i++)
//		cout << n << " x " << i << " = " << n * i << endl;
//	*/
//
//	/*
//	int n, fact = 1;
//	cout << "Enter the number you want the factorial of: " << endl;
//	cin >> n;
//	for (int i = n; i >= 1; i--)
//		fact = fact * i;
//	cout << "Factorial of "<< n <<" is " << fact;
//	*/
//
//	/*
//	char ch;
//	cout << "Enter a character to check if it's a vowel or a consonant." << endl;
//	cin >> ch;
//	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//		cout << ch << " is a vowel." << endl;
//	else
//		cout << ch << " is a consonant." << endl;
//	*/
//
//	/*
//	int num, reversed=0, remainder;
//	cout << "Enter a number to reverse it: " << endl;
//	cin >> num;
//
//	while (num != 0)
//	{
//		remainder = num % 10;
//		reversed = reversed * 10 + remainder;
//		num = num / 10;
//
//	}
//	cout << "Reversed number= " << reversed << endl;
//	*/
//
//
//	//// Declare a variable to store the 3-digit number
//	//int number;
//
//	//// Prompt the user to enter a 3-digit number
//	//cout << "Enter a 3-digit number: ";
//	//cin >> number;
//
//	//// Extract the digits using modulus and division operators
//	//int firstDigit = number / 100;         // Extract the first digit
//	//int secondDigit = (number / 10) % 10;  // Extract the second digit
//	//int thirdDigit = number % 10;          // Extract the third digit
//
//	//// Display the digits separately
//	//cout << "The first digit is: " << firstDigit << endl;
//	//cout << "The second digit is: " << secondDigit << endl;
//	//cout << "The third digit is: " << thirdDigit << endl;
//
//	//// Calculate the sum of the digits
//	//int sum = firstDigit + secondDigit + thirdDigit;
//
//	//// Display the sum of the digits
//	//cout << "The sum of the digits is: " << sum << endl;
//
//
////// Declare a variable
////int x = 5;
//
////// Demonstrate pre-increment
////cout << "Initial value of x: " << x << endl;
////cout << "Using pre-increment (++x): " << ++x << endl; // Increments x first, then prints it
////cout << "Value of x after pre-increment: " << x << endl;
//
////// Reset x to 5
////x = 5;
//
////// Demonstrate post-increment
////cout << "Initial value of x: " << x << endl;
////cout << "Using post-increment (x++): " << x++ << endl; // Prints x first, then increments it
////cout << "Value of x after post-increment: " << x << endl;
//
//
//
////int number, firstDigit, secondDigit, thirdDigit;
//
////// Prompt the user to enter a 3-digit number
////cout << "Enter a 3-digit number: ";
////cin >> number;
//
////// Check if the number is a 3-digit number
////if (number < 100 || number > 999) {
////	cout << "Please enter a valid 3-digit number." << endl;
////	return 1; // Exit the program with an error code
////}
//
////// Extract the digits
////firstDigit = number / 100;         // Extract the first digit
////secondDigit = (number / 10) % 10;  // Extract the second digit
////thirdDigit = number % 10;          // Extract the third digit
//
////// Check if the first and third digits are the same
////if (firstDigit == thirdDigit) {
////	cout << number << " is a palindrome." << endl;
////}
////else {
////	cout << number << " is not a palindrome." << endl;
////}
//
//
//
//
////int age;
////cout << "Enter your age: " << endl;
////cin >> age;
////string result = (age >= 18) ? "Eligible" : "Not eligible";
////cout << "You are " << result << " to vote." << endl;
////
////return 0;
//
//
//
//
//	/*int temp;
//	cout << "Enter the temperature in centigrade: ";
//	cin >> temp;
//
//	string message = (temp < 0) ? "Freezing weather" :
//		(temp <= 10) ? "Very Cold weather" :
//		(temp <= 20) ? "Cold weather" :
//		(temp <= 30) ? "Normal in Temp" :
//		(temp <= 40) ? "It's Hot" :
//		"It's Very Hot";
//
//	cout << message << endl;*/
//
//
//
//	/*int si, principle, rate, time;
//	cout << "Enter the principle amount: ";
//	cin >> principle;
//	cout << "Enter the rate of interest: ";
//	cin >> rate;
//	cout << "Enter the time period: ";
//	cin >> time;
//	si = (principle * rate * time) / 100;
//	cout << "Simple Interest= " << si << endl;*/
//
//	
//	/*int n, flag=0;
//	cout << "Enter a number to check if it's a prime number: ";
//	cin >> n;
//	for (int k = 2; k < n; k++)
//	{
//		if (n % k == 0)
//			flag = 1;
//			break;
//	}
//	if (flag == 0)
//	cout << "Is prime" << endl;
//	else
//	cout << "Not prime" << endl;*/
//
//
//
//
//	/*int n = 10,sum=0;
//	for (int i = 1; i <= 10; ++i)
//	{
//		sum = sum + i;
//	}
//	cout << sum;*/
//
//
//
//	//int a = 5, b = 3, c, d;
//
//	//// Pre-increment and post-increment
//	//c = ++a + b++;
//	//cout << "After c = ++a + b++:" << endl;
//	//cout << "a = " << a << endl; // a = 6
//	//cout << "b = " << b << endl; // b = 4
//	//cout << "c = " << c << endl; // c = 9
//
//	//// Reset values
//	//a = 5;
//	//b = 3;
//
//	//// Pre-decrement and post-decrement
//	//d = --a - b--;
//	//cout << "After d = --a - b--:" << endl;
//	//cout << "a = " << a << endl; // a = 4
//	//cout << "b = " << b << endl; // b = 2
//	//cout << "d = " << d << endl; // d = 1
//
//
//
//
//		//int a = 5, b = 3;
//
//		//// Using post-increment in a for loop
//		//cout << "Using post-increment (a++):" << endl;
//		//for (int i = 0; i < 3; i++) {
//		//	cout << "Iteration " << i + 1 << ": a = " << a++ << endl;
//		//}
//		//cout << "Value of a after loop: " << a << endl;
//
//		//// Reset value of a
//		//a = 5;
//
//		//// Using pre-decrement in a for loop
//		//cout << "Using pre-decrement (--b):" << endl;
//		//for (int i = 0; i < 3; i++) {
//		//	cout << "Iteration " << i + 1 << ": b = " << --b << endl;
//		//}
//		//cout << "Value of b after loop: " << b << endl;
//
//		//// Reset value of b
//		//b = 3;
//
//		//// Using pre-increment in a for loop
//		//cout << "Using pre-increment (++a):" << endl;
//		//for (int i = 0; i < 3; i++) {
//		//	cout << "Iteration " << i + 1 << ": a = " << ++a << endl;
//		//}
//		//cout << "Value of a after loop: " << a << endl;
//
//		//// Using post-decrement in a for loop
//		//cout << "Using post-decrement (b--):" << endl;
//		//for (int i = 0; i < 3; i++) {
//		//	cout << "Iteration " << i + 1 << ": b = " << b-- << endl;
//		//}
//		//cout << "Value of b after loop: " << b << endl;
//	
//
//
//	//int calls;
//	//double t_bill;
//
//	//cout << "Enter the number of calls: ";
//	//cin >> calls;
//
//	//if (calls > 0 && calls <= 100) {
//	//	t_bill = 200;
//	//}
//	//else if (calls > 100 && calls <= 150) {
//	//	calls = calls - 100; // Subtract the first 100 calls
//	//	t_bill = 200 + calls * 0.6;
//	//}
//	//else if (calls > 150 && calls <= 200) {
//	//	calls = calls - 150; // Subtract the first 150 calls
//	//	t_bill = 200 + 50 * 0.6 + calls * 0.5;
//	//}
//	//else if (calls > 200) {
//	//	calls = calls - 200; // Subtract the first 200 calls
//	//	t_bill = 200 + 50 * 0.6 + 50 * 0.5 + calls * 0.4;
//	//}
//	//else {
//	//	cout << "Invalid number of calls." << endl;
//	//	return 1; // Exit the program with an error code
//	//}
//
//	//cout << "Total bill = Rs. " << t_bill << endl;
//
////float temp;
////cout << "Enter the temperature in centigrade: ";
////cin >> temp;
////cout << "It is " << (temp < 0 ? "Freezing weather" : //if
////	temp >= 0 && temp <= 10 ? "Very Cold weather" : //else if
////	temp > 10 && temp <= 20 ? "Cold weather" : //else if
////	temp > 20 && temp <= 30 ? "Normal in Temp" : //else if
////	temp > 30 && temp <= 40 ? "Its Hot" : "Its Very Hot") << endl; //else if and else
//
////int a, b, c;
////cout << "Enter First number: " << endl;
////cin >> a;
////cout << "Enter Second number: " << endl;
////cin >> b;
////cout << "Enter Third number: " << endl;
////cin >> c;
////int smallest = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
////cout << "Smallest number is: " << smallest << endl;
//
////int n, k, flag = 0;
////cout << "Enter a number";
////cin >> n;
////for (k = 2; k < n; k++)
////{
////	if (n % k == 0)
////	{
////		flag = 1;
////		break;
////	}
////}
////	if (flag == 0)
////	{
////		cout << "Is prime";
////	}
////	else
////		cout << "not prime";
//
//
//
////int sum = 0, num;
////cout << "Enter the number" << endl;
////cin >> num;
////int i = 1;
////while (i <= num)
////{
////	sum = sum + i;
////	i = i + 2;
////	
////}
////cout << "Sum=" << sum;
//
//
////int n;
////cin >> n;
////for (int i = 1; i <= n; i++)
////{
////	for (int j = 1; j <= n; j++)
////	{
////		cout << j << " ";
////	}
////	cout<<endl;
////}
//
//
////int n = 4;
////for (int i = 1; i <= n; i++)
////{
////	for (int j = 1; j <= i; j++)
////	{
////		cout << "*" << " ";
////	}
////	cout<<endl;
////}
//
// 
// 
//} //end of main function


/*This program uses iteration to simulate recursion but it is not recursion in reality*/

//int factorial(int n) {
//    int fact = 1;
//    for (int i = 1; i <= n; ++i) {
//        fact = fact * i;
//    }
//    return fact;
//}
//
//int main() {
//    for (int num = 1; num <= 10; ++num) {
//        cout << "Factorial of " << num << " is " << factorial(num) << endl;
//    }
//    return 0;
//}

//int fact(int num) {
//	int facto = 1;
//	for (int i = 1; i <= num; i++) {
//		facto *= i;
//	}
//	return facto;
//}
//int main() {
//	int number;
//	cout << "Enter a Number to calculate its factorial." << endl;
//	cin >> number;
//	cout<<"The factorial of the number is= "<< fact(number);
//	
//}


/*This program uses Recursion*/

//long long factorial(long long n) {
//    if (n <= 1) {
//        return 1;
//    }
//    else {
//        return n * factorial(n - 1);
//    }
//}
//
//int main() {
//    long long number;
//    cout << "Enter a number: ";
//    cin >> number;
//    cout << "Factorial of the number " << number << " is " << factorial(number) << endl;
//    return 0;
//}



//int sumofdigits(int n) {
//    int sum = 0, remainder = 0;
//    while (n > 0) {
//        remainder = n % 10;
//        sum = sum + remainder;
//        n = n / 10;
//    }
//    return sum;
//}
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cout << "Sum of digits = " << sumofdigits(num) << endl;
//    return 0;
//}


//bool isprime(int n) {
//    if (n <= 1) return false; // 0 and 1 are not prime numbers
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return false; // n is not a prime number
//        }
//    }
//    return true; // n is a prime number
//}
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cout << endl;
//    if (isprime(num)) {
//        cout << "Number is prime." << endl;
//    }
//    else {
//        cout << "Number is composite." << endl;
//    }
//    return 0;
//}



//void fibonacci(int n) {
//    int a = 0, b = 1, next;
//    for (int i = 1; i <= n; i++) {
//        if (i == 1) {
//            cout << a << " ";
//            continue;
//        }
//        if (i == 2) {
//            cout << b << " ";
//            continue;
//        }
//        next = a + b;
//        a = b;
//        b = next;
//        cout << next << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cout << endl;
//    fibonacci(num);
//    return 0;
//}


//// Function to calculate GCD using the Euclidean algorithm
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//int main() {
//    int num1, num2;
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
//    return 0;
//}

//int combinations(int n, int r) {
//	int factn = 1, factr = 1;
//	for (int i = 1; i <= n; i++) {
//		factn = factn * i;
//	}
//	for (int i = 1; i <= r; i++) {
//		factr = factr * i;
//	}
//	int factnr = 1;
//	for (int i = 1; i <= (n - r); i++) {
//		factnr = factnr * i;
//	}
//	int result;
//	result = (factn) / (factr * factnr);
//	return result;
//
//}
//
//int main() {
//	int n, r;
//	cout << "Enter n: ";
//	cin >> n;
//	cout << endl;
//	cout << "Enter r: ";
//	cin >> r;
//	cout << endl;
//	cout << "nCr = " << combinations(n, r);
//
//}


//void palindrome(int n) {
//    int original = n;
//    int reversed = 0, remainder;
//    while (n != 0) {
//        remainder = n % 10;
//        reversed = reversed * 10 + remainder;
//        n = n / 10;
//    }
//    if (original == reversed) {
//        cout << original << " is a palindrome." << endl;
//    }
//    else {
//        cout << original << " is not a palindrome." << endl;
//    }
//}
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    cout << endl;
//    palindrome(num);
//    return 0;
//}


//// Function to reverse a given char array
//void reverseString(char str[]) {
//    int n = strlen(str);
//    for (int i = 0; i < n / 2; i++) {
//        swap(str[i], str[n - i - 1]);
//    }
//}
//
//int main() {
//    char input[100];
//    cout << "Enter a string: ";
//    cin >> input;
//    reverseString(input);
//    cout << "Reversed string: " << input << endl;
//    return 0;
//}


//float toCelsius(float fahr) {
//    return (5.0 / 9.0) * (fahr - 32);
//}
//
//float toFahrenheit(float celc) {
//    return (9.0 / 5.0) * celc + 32;
//}
//
//int main() {
//    int choice;
//    float fahrenheit = 0, celsius = 0;
//    cout << "Which conversion do you want to apply? (1-2) \n 1. Fahrenheit to Celsius \n 2. Celsius to Fahrenheit" << endl;
//    cin >> choice;
//    switch (choice) {
//    case 1:
//        cout << "Enter the temperature in Fahrenheit: ";
//        cin >> fahrenheit;
//        cout << "Temperature in Celsius: " << toCelsius(fahrenheit) << endl;
//        break;
//    case 2:
//        cout << "Enter the temperature in Celsius: ";
//        cin >> celsius;
//        cout << "Temperature in Fahrenheit: " << toFahrenheit(celsius) << endl;
//        break;
//    default:
//        cout << "Invalid choice entered." << endl;
//    }
//    return 0;
//}



//float simpleinterest(float p, float r, float t) {
//    float si = (p * r * t) / 100;
//    return si;
//}
//
//int main() {
//    float p, r, t;
//    cout << "Enter the principal amount: ";
//    cin >> p;
//    cout << "Enter the rate amount: ";
//    cin >> r;
//    cout << "Enter the time amount: ";
//    cin >> t;
//    cout << "Simple interest = " << simpleinterest(p, r, t) << endl;
//    return 0;
//}


//// Function to check if a given string is a palindrome
//bool isPalindrome(string str) {
//    int n = str.length();
//    for (int i = 0; i < n / 2; i++) {
//        if (str[i] != str[n - i - 1]) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    string input;
//    cout << "Enter a string: ";
//    cin >> input;
//    if (isPalindrome(input)) {
//        cout << input << " is a palindrome." << endl;
//    }
//    else {
//        cout << input << " is not a palindrome." << endl;
//    }
//    return 0;
//}

//// Function to check if a given number is an Armstrong number
//bool isArmstrong(int num) {
//    int originalNum = num;
//    int sum = 0;
//    int numberofdigits = 0;
//
//    // Calculate the number of digits
//    while (num != 0) {
//        num /= 10;
//        numberofdigits++;
//    }
//
//    num = originalNum;
//
//    // Calculate the sum of the digits each raised to the power of n
//    while (num != 0) {
//        int digit = num % 10;
//        sum += pow(digit, numberofdigits);
//        num /= 10;
//    }
//
//    // Check if the sum is equal to the original number
//    return (sum == originalNum);
//}
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//    if (isArmstrong(num)) {
//        cout << num << " is an Armstrong number." << endl;
//    }
//    else {
//        cout << num << " is not an Armstrong number." << endl;
//    }
//    return 0;
//}



//// Function to check if a number is prime
//bool isPrime(int n) {
//    if (n <= 1) return false;
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//// Function to generate all prime numbers up to a given number
//void generatePrimes(int limit) {
//    for (int i = 2; i <= limit; i++) {
//        if (isPrime(i)) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    int limit;
//    cout << "Enter the limit: ";
//    cin >> limit;
//    cout << "Prime numbers up to " << limit << " are: ";
//    generatePrimes(limit);
//    return 0;
//}
