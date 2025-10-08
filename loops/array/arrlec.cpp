 #include <iostream>
// using namespace std;

 int main() {
     int arr[5] = {1, 6, -2, -1, 9};
     int maxsum = 0;

     for (int i = 0; i < 5; i++) {
         int curSum = 0;
         for (int j = i; j < 5; j++) {
            curSum = curSum + arr[j];
             if (curSum > maxsum) {
                 maxsum = curSum;  
             }
         }
     }

       cout<< maxsum;

     return 0;


 }
