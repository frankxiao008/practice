#include <iostream>
#include <cstdlib>

using namespace std;
int main(){

    int n, j=0;
    int* p=nullptr;
    
    do{
        cout << "Please enter a positive number:";
        cin >> n;
    }while(n<=0);
    p=(int*)malloc(n*sizeof(int));  

    for(int i=2; i<=n; i++){
        if(i%5==0 || i%7==0)
            p[j++]=i;
    }

    for(int i=0; i<j; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    return 0;
}