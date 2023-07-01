// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main(void) {
    int x;
    int k = 2;
    int j = 0;

    cout <<"Tamanho do array ";
    cin >> x;
    
    int num[x];
    
for(int y = 0; y <= x; y++){
    num[y] = {y};
    }//Todos elemento em ordem crescente presentes no array na forma n' + 1 = n"

for(int m = 0; m <= x; m++){
cout << "Element in position " << m << " is " << num[m] << "\n";
}

for(int z = 2; z != 0; z++) {
   for(int o = 2; num[z] * o < x; o++){
   
     num[z * o] = {0}; 

   }  
}
    
for(m = 0; m <= x; m++){
cout << "Element in position " << m << " is " << num[m] << "\n";
}
    return 0;
}