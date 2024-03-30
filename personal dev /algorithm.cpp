#include <iostream>
using namespace std;

int main()

{
    /* this is bubble sorting 
    
    int i, j, temp;
    int a[5] = {12,25,39,43,57};
    cout << "input list ...\n" ;

    for(i=0; i<5; i++){

        cout << a[i]<< "\t";

    }

    cout << endl;

    for (i = 0;i<5;i++){
        for (j=i+1; j<5; j++){
            if (a[j]< a[i]){

                temp = a [i];
                a[i] = a [j];
                a[j] = temp; 

            };
        }
    }

    cout << "sorted \n";

    for (i = 0; i <5; i++){
        cout << a[i] << "\t";
    }

    return 0; 

    */

   //  this will be the the number reading 

   int data[] = {1234, 5678, 9012, 3456, 7890};

   int size = sizeof(data) / sizeof(data[0]);

   cout << "going throgh array" << endl;

   for (int i = 0; i < 5; i++){
          for (int j = 0; j < 4; j++){
              if (data[i][j] == 1){
                     data.delete();
                     return -1;
              }
          }
   }
}


