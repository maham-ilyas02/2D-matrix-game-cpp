#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

long long orignal(){
    int arr[5][5];
    long long product1 = 1;

    cout << "Enter The Numbers of Player1 :" <<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Matrix of Player1 :" <<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }

    int *p = &arr[0][0];
    for(int i = 0; i < 25; i++){
        product1 = product1 * (*(p + i));
    }

    return product1;
}

long long random(){
    int array[5][5];
    long long product2 = 1;

    cout<<"The Random Numbers of Player2 :" <<endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            array[i][j] = (rand() % 9) + 1; 
            cout << array[i][j] << " ";
        }
        cout<<endl;
    }

    int *p1 = &array[0][0];
    for(int i = 0; i < 25; i++){
        product2 = product2 * (*(p1 + i));
    }

    return product2;
}

void winner(){
    long long p1 =orignal();
    long long p2 =random();

    cout<<"Total Score of Player1: " <<p1<<endl;
    cout<<"Total Score of Player2: " <<p2<<endl;

    if(p1 > p2){
        cout<<"The Winner is Player1" <<endl;
    }
    else if(p1 < p2){
        cout<<"The Winner is Player2" <<endl;
    }
    else{
        cout<<"The Match is Draw" <<endl;
    }
}

int main(){
    srand(time(0)); 
    winner();
    return 0;
}

