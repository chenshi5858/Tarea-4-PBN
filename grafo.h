#include <vector>


class Grafo{
private:
    int n_nodos, n_arcos=0;
    std::vector<int> nodos;
    //std::vector<std::vector<int>> matriz;
    std::vector<std::vector<int>> lista_adyacencias;
    std::vector<std::vector<int>> lista_a_matriz();


public:
    Grafo(int n);
    void add_arco(int d, int h);
    int add_nodo();
    bool hay_arco(int d, int h);
    bool hay_camino(int d, int h);
    void mostrar_atributos();
    bool verificar_lista_a_matriz();
    bool verificar_matriz_a_lista();
    



};