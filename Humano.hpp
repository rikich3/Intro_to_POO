#include "Humano.cpp"

class Humano{ // define objetos de tipo Humano
    //MIEMBROS
    public:
    /*
    dominio public: tiene un alcanze global, se puede realizar una llamada a estos miembros
    de cualquier lado
    */
   void hearing(string said);
   void decirEdad(); //cuando definimos funciones adentro de la clase, estos ahora son METODOS de la clase
    private:
    /*
    dominio private: estas caracteristicas
    */
   int edad; //cuando definimos variables dentro de la clase, estos ahora son ATRIBUTOS de la clase
   string sentimiento_actual;
   void pensar(string situacion);
}; //parentesis de declaracion