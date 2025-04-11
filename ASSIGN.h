#include<math.h>
// Check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // Count digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == originalNum;
}
//palindrome

int isPalindrome(int num) {
    int reversed = 0;
    int originalNum = num;

    while (num != 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    return reversed == originalNum;
}

// Check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int factorial(int n){
	int result=1;
	if(n<0) return 0;
	for(int i=1;i<=n;i++){
		result*=i;
	}
	return result;
	
}

// Check if number is Strong
int isStrong(int num) {
    int originalNum = num, sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return sum == originalNum;
}
