#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> V(5),W(5);
    vector<int> X(10),Y(10);

    V[0] = "Lucio Battisti";
    V[1] = "Mina";
    V[2] = "Eros Ramazzotti";
    V[3] = "Tiziano Ferro";
    V[4] = "Laura Pausini";

    int i = 0;
    while(i<5){
        cout<<"Inserire il nome del "<<i+1<<" cantante: ";
        cin>>W[i];
        i++;
    }

    i = 0;
    while(i<10){
        X[i] = i+1;
        i++;
    }

    i = 0;
    while(i<10){
        Y[i] = i * 2;
        i++; 
    }

    cout<<"1° "<<V[0]<<" 2° "<<V[1]<<" 3° "<<V[2];

    i = 0;
    while(i<5){
        cout<< i+1 <<"° Elemento di V "<<V[i]<<endl;
        cout<< i+1 <<"° Elemento di W "<<W[i]<<endl;
        cout<< i+1 <<"° Elemento di X "<<X[i]<<endl;
        cout<< i+1 <<"° Elemento di Y "<<Y[i]<<endl;
        i++;
    }

    i = 0;
    while(i<10){
        if(i%2==0){
            cout<<i<<"° Elemento pari "<<X[i]<<endl;
        }
        i++;
    }

    i = 0;
    while(i<10){
        if(i%2!=0){
            cout<<i<<"° Elemento dispari "<<X[i]<<endl;
        }
        i++;
    }

    i = 0;
    while(i<10){
        if(X[i]%2==0){
            cout<<X[i]<<" è pari"<<endl;
        }
        i++;
    }
    
}

