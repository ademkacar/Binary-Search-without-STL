
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;




int A[101];
int head = 1; // head is the firs material of the array
int tail = 101; // is the last material of the array
int query = 1; // the material which we are looking for
int midPoint = 0;

void createArray() {
    for (int i = 0; i <= 99; i++) {
        A[i] = i; // dizinin içine sayı atama fonk.
        
    }
    return;
}
void showArray() {
    for (int a = 0; a <= 99; a++) {
        cout << A[a] << "  ";  // diziyi gösteren fonk.
        
    }
    return;
}

int main()
{
   // int sayac =0;
    createArray();
    //showArray();

    midPoint = (head + tail) / 2; // orta noktayı hesaplama
   /*
  cout << midPoint <<  endl;
  cout << A[midPoint];
  */
    while( A[midPoint] != query) {  // aradığımız eleman a dizisinin orta noktasına eşit değilse devam et (farklı mı, false yaktığında dışa çıktı)
       
        if (query < A[midPoint]) // aradığımız orta noktadan küçükse taili orta noktaya getir.
            tail = midPoint;          
        
        else 
            head = midPoint; // midpoint küçükse başı orta noktaya getir          
        

        midPoint = (head + tail) / 2;
       // midPoint = head + ( abs(head - tail ) / 2);
       // ++sayac;
        //cout << midPoint << endl;
    }
     
   // cout <<"sayac=== "<< sayac << endl;
    cout <<  "aranan elemanin degeri = " << A[midPoint] << endl << "indisi = " << midPoint;


    return 0;
}

