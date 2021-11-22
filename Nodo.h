//
// Created by ezequiel on 22/11/21.
//

#ifndef TP2_ALGORITMOS_2C2021_NODO_H
#define TP2_ALGORITMOS_2C2021_NODO_H
#ifndef NULL
#define NULL 0
#endif


template<class T>
class Nodo
{
private:
    T dato;
    Nodo<T>* siguiente;
public:

    /*  post: Nodo inicializado con dato y siguiente nulo*/
    Nodo(T dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
    /*   post: devuelve el valor del dato.*/
    T obtenerDato()
    {
        return this->dato;
    }

/*   post: cambia el valor del dato.    */
    void cambiarDato(T nuevoDato)
    {
        this->dato = nuevoDato;
    }

    /*    post: devuelve el siguiente Nodo. */
    Nodo<T>* obtenerSiguiente()
    {
        return this->siguiente;
    }

    /*  post: cambia el siguiente Nodo por nuevoSiguiente.*/
    void cambiarSiguiente (Nodo<T>* nuevoSiguiente)
    {
        this->siguiente = nuevoSiguiente;
    }
};

#endif //TP2_ALGORITMOS_2C2021_NODO_H
