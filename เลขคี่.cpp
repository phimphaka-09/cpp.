#include <iostream>
using namespace std;
int loop_num = 1;
int fixed_loop;


void getLoop(){
    cout << "enter num of loop ; ";
    cin >> fixed_loop;
    
    
}

int main() {
    cout << "odd program" << endl;
    getLoop();
    while(loop_num <= fixed_loop){
        
        if(loop_num % 2 ){
            cout << "number : " << loop_num << endl;
        }
        else{
            
        }
        loop_num++;
    }
    }
