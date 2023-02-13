/*
    নিচের প্রতিটি প্যাটার্ন আউটপুট দিবে এমন প্রোগ্রাম লিখ।  (Use for loops)
    1
    22
    333
    4444

    *
    **
    ***
    ****

    1
    2 3
    4 5 6
    7 8 9 10
------------------------------
আমরা for লুপ ব্যাবহার করে ১ থেকে ১০ এর যোগফল বের করেছি। নিচের ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ।
    1+2+3+.....100
    1+3+5+...+29
    50 + 49 + 48 + 47 + …… ( প্রথম ২০টি পদ)
    2 + 5 + 8 + 11 + 14 + …..   (প্রথম ১০টি পদ)
    100 + 97 + 94 + 91 + ….  (0 এর চেয়ে বড় পর্যন্ত)
------------------------------------------------
একটি প্রোগ্রাম লিখ যা ধনাত্মক সংখ্যা ইনপুট দিলে ১ শূন্য ইনপুট দিলে ০, আর নাইলে -১ প্রিন্ট করে।

------------------------------------------------

Type Casting
Nested Loop
Ternery Operator
Switch Case









data type Array_name [3] = {4, 5, 6};
indetation:                 0 1 2 3


*/

// #include<stdio.h>

// int main() {

/*
    Type Casting
    Nested Loop
    Ternery Operator
------------------------------------------
int num1 = -50;

if(num1>0)
{
print("Positive Number");
}
if num1>0 ? positive : negative;
if condition ? true : false;




    Switch Case

    *
    **
    ***
    ****
    *****
---------------------------------
    *
    1 asterisk printed
    * *
    2 asterisk printed
    * * *
    3 asterisk printed
    * * * *
    4 asterisk printed
    * * * * *
    5 asterisk printed
    * * * * *
    * * * *
    * * *
    * *
    *
--------------------------------

Take a input from user and print like a pattern.
*
* *
* * *
* * * *
* * * * *
* * * * *
* * * *
* * *
* *
*
*/

// Switch Case
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    printf("%d %d", a, b);
    char done; // +, -, *, /
    scanf("%c", &done);
    printf("%c", done);
    switch (done)
    {
    case '+':
        sum = a + b;
        printf("%d", sum);
        break;
    case '-':
        sum = a - b;
        printf("%d", sum);
        break;
    case '/':
        sum = a / b;
        printf("%d", sum);
        break;
    case '*':
        sum = a * b;
        printf("%d", sum);
        break;
    default:
        printf("You operator is not correct.");
    }
    //printf("sumation is: %d", sum);

    return 0;
}