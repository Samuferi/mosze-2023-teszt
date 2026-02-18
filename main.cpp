#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //integer nevenek elirasa
    std::cout << "1-100 ertekek duplazasa" << std::endl; // "" helyett '', nincs ; nincs endline
    for (int i = 1; i <= N_ELEMENTS; i++) // for ciklus ertekei nincsenek megadva teljesen, i 1-tol indul, <=
    {
        b[i-1] = i * 2; // i 1-es kezdoerteke miatt ki kell vonni 1 et a tomb indexeleshez
    }
    for (int i = 0; i < N_ELEMENTS; i++) // for ciklus maximuma hibas
    {
        std::cout << "Ertek: " << b[i]<< std::endl;  // ; es i hianya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // kezdoertek
    for (int i = 0; i < N_ELEMENTS; i++) // ; helyett ,
    {
        atlag += b[i]; // nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
