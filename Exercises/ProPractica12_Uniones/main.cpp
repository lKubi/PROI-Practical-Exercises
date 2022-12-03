#include <iostream>

using namespace std;

struct tipoLibro {
    int codigo;
    char autor[80];
    char titulo[80];
    char editorial[32];
    int anno;
};

struct tipoRevista {
    int codigo;
    char nombre[32];
    int mes;
    int anno;
};

struct tipoPelicula {
    int codigo;
    char titulo[80];
    char director[80];
    char productora[32];
    int anno;
};

union tipoEjemplar {
    tipoLibro l;
    tipoRevista r;
    tipoPelicula p;
};

void mostrarLibro(tipoLibro l);
void mostrarRevista(tipoRevista r);
void mostrarPelicula(tipoPelicula p);

int main() {

    /* 1. Inicialización de unha variable cada tipo */
    tipoLibro libro = {1, "Luis", "Mi muerte", "Santillana", 2020};
    tipoRevista revista = {2, "Marca", 12, 2019};
    tipoPelicula pelicula = {3, "Star Wars", "Joe", "Warner", 2010};

    /* 2. Visualización tipoLibro, tipoRevista, tipoPelicula: mostrarLibro,
     mostrarRevista, mostrarPelicula */
    mostrarLibro(libro);
    mostrarRevista(revista);
    mostrarPelicula(pelicula);

    /* 3. Variable tipoEjemplar */
    tipoEjemplar ejemplar;
    ejemplar.l = libro;
    mostrarLibro(ejemplar.l);

    ejemplar.r = revista;
    mostrarRevista(ejemplar.r);
}

void mostrarLibro(tipoLibro l){
    cout<<"Libro: " << l.titulo << endl;
}
void mostrarRevista(tipoRevista r){
    cout<<"Revista: " << r.nombre << endl;
}
void mostrarPelicula(tipoPelicula p){
    cout<<"Pelicula: " << p.director << endl;
}
