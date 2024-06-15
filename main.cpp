#include "grafo.h"
#include <iostream>
using namespace std;



int main(){

    Grafo wemo=Grafo(8);

    wemo.add_arco(1,3);
    wemo.add_arco(2,4);
    wemo.add_arco(3,4);
    wemo.add_arco(3,5);
    wemo.add_arco(4,3);
    wemo.add_arco(4,6);
    wemo.add_arco(5,6);
    wemo.add_arco(5,7);
    wemo.add_arco(6,5);
    wemo.add_arco(6,8);

    wemo.add_arco(7,8);
    wemo.add_arco(1,2);
    wemo.add_arco(2,1);
    wemo.add_arco(8,7);
    wemo.add_arco(1,4);
    wemo.add_arco(4,1);
    wemo.add_arco(3,6);
    wemo.add_arco(6,3);
    wemo.add_arco(4,5);
    wemo.add_arco(5,4);
    wemo.add_arco(5,8);
    wemo.add_arco(8,5);
    wemo.add_arco(6,7);
    wemo.add_arco(7,6);
    wemo.add_arco(2,3);
    wemo.mostrar_atributos();
    cout<<"camino de 3 a 8:"<<wemo.hay_camino(3,8)<<endl;
    cout<<"camino de 7 a 8:"<<wemo.hay_camino(7,8)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(1,3)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(2,4)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(3,4)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(3,5)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(4,3)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(5,6)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(5,7)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(6,5)<<endl;
    cout<<"hay arco?????????  "<<wemo.hay_arco(6,8)<<endl;
    return 0;

}