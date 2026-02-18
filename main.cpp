#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //integer nevenek elirasa
    std::cout << '1-100 ertekek duplazasa' // "" helyett '', nincs ;
    for (int i = 0;) // for ciklus ertekei nincsenek megadva teljesen
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" // ; es i hianya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // ; helyett ,
    {
        atlag += b[i] // nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
