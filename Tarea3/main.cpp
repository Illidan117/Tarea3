#include <iostream>
// ERICK LEVERON
using namespace std;
class Animal{
//En la clase animal se crean los set y Get para luego ser heredadas por las clases Gato y Perro
 public:
     string nombre;
     int edad;
     Animal() //Constructor en blanco
     {
     }
     void setEdad(int age) //Creacion de setEdad
     {
        edad = age;
     }
     int getEdad() //Creacion de getEdad, devuelve edad
     {
         return edad;
     }
     void setNombre(string name) //Creacion de setNombre
     {
         nombre = name;
     }
     string getNombre() //Creacion de getNombre, devuelve nombre
     {
         return nombre;
     }
};
class Gato : public Animal{ //la clase Gato hereda de la clase Animal
 public:
     Gato(int age, string name) //se usan las funciones setEdad y setNombre.
     {
         setEdad(age);
         setNombre(name);
     }
     string maullar() //funcion tipo string que devuelve el texto Miau
     {
        return "miau";
     }
};
class Perro : public Animal //la clase Perro hereda de la clase Animal
{
public:
    Perro(int age, string name) //se usan las funciones setEdad y set Nombre
    {
        setEdad(age);
        setNombre(name);
    }
    string ladrar() //funcion tipo string que devuelve el texto Guau
    {
        return "guau";
    }
};
int main()
{
    Gato cat = Gato(8,"Gato"); //se asignan los valores de edad y nombre.
    cout<<"Nombre: "<<cat.getNombre()<<endl; //se usa la funcion getNombre para imprimir los valores dados
    cout<<"Edad: "<<cat.getEdad()<<endl; //se usa la funcion getEdad para imprimir los valores dados
    cout<<"El Gato dice: "<<cat.maullar()<<endl; //se llama la maullar para comprobar su funcionalidad
    cout<<"-----------------------------"<<endl; //divisor
    Perro dog = Perro(8, "Dog"); //se asignan los valores de edad y nombre.
    cout<<"Nombre: "<<dog.getNombre()<<endl; //se usa la funcion getNombre para imprimir los valores dados
    cout<<"Edad: "<<dog.getEdad()<<endl; //se usa la funcion getEdad para imprimir los valores dados
    cout<<"El Perro dice: "<<dog.ladrar()<<endl; //se llama la ladrar para comprobar su funcionalidad

    return 0;
}
