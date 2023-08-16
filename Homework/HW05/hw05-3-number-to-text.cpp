/*
    จงแปลงตัวเลขที่ผู้ใช้ป้อนเข้ามาให้กลายเป็นตัวหนังสือ เช่น ผู้ใช้กรอกว่า 3 ให้แสดงผลลัพธ์ว่า Three
    (กำหนดให้สามารถกรอกเลขได้แค่ 0 ถึง 30 เท่านั้น)
    (กำหนดให้ใช้คำสั่ง switch case เท่านั้น)
    
    Test case:
        User input :
            12
    Output:
        Twelve

    Test case:
        User input :
            4
    Output:
        Four
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int num = 0 ;
    printf("Please Enter your number : ") ;
    scanf("%d", &num) ;
    if (num > -1 && num < 31)
    {
        switch (num)
        {
        case 0:
            cout << "Zero" ;
            break;
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "Nine";
            break;
        case 10:
            cout << "Ten";
            break;
        case 11:
            cout << "Eleven";
            break;
        case 12:
            cout << "Twelve";
            break;
        case 13:
            cout << "Thirteen";
            break;
        case 14:
            cout << "Fourteen";
            break;
        case 15:
            cout << "Fifteen";
            break;
        case 16:
            cout << "Sixteen";
            break;
        case 17:
            cout << "Seventeen";
            break;
        case 18:
            cout << "Eighteen";
            break;
        case 19:
            cout << "Nineteen";
            break;
        case 20:
            cout << "Twenty";
            break;
        case 21:
            cout << "Twenty One";
            break;
        case 22:
            cout << "Twenty Two";
            break;
        case 23:
            cout << "Twenty Three";
            break;
        case 24:
            cout << "Twenty Four";
            break;
        case 25:
            cout << "Twenty Five";
            break;
        case 26:
            cout << "Twenty Six";
            break;
        case 27:
            cout << "Twenty Seven";
            break;
        case 28:
            cout << "Twenty Eight";
            break;
        case 29:
            cout << "Twenty Nine";
            break;
        case 30:
            cout << "Thirty";
            break;
        }
    }
    else{
        printf("Error");
    }
    return 0;
}