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
int main()
{
    int a = 0, b = 0, c = 0 ;
    printf("Input[1] ") ; scanf( "%d", &a ) ;
    printf("Input[2] ") ; scanf( "%d", &b ) ;
    printf("Input[3] ") ; scanf( "%d", &c ) ;
    
    if( a > b && a > c ) {
        printf( "%d ", a ) ;
        if( b > c ) printf( "%d %d ", b,c ) ;
        else printf( "%d %d ", c,b ) ;
    }

    else if( b > a && b > c ) {
        printf( "%d ", b ) ;
        if( a > c ) printf( "%d %d ", a, c ) ;
        else printf( "%d %d ", c,a ) ;
    }

    else if( c > b && c > a ) {
        printf( "%d ", c ) ;
        if( b > a ) printf( "%d %d ", b,a ) ;
        else printf( "%d %d ", a,b ) ;
    }

    return 0;
}