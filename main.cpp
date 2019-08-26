/*program ukazuje dzialanie petli switch(tworzenie menu) , tablicy strukur oraz mozliwosci
dostania sie do konkretnej wartosci w tablicy struktur -> zadanie 4 z rozdzialu 6 ksiazki Stephen Prata Jezyk C++ Szkola Programowania */
#include <iostream>


const int strsize=20;
const int ArSize=4;
struct zpdw
{
    char name[strsize];
    char position[strsize];
    char pseudozpdw[strsize]; //pseudonim
    int preferences; //
};

zpdw people[ArSize]
{
    {"Kulasinski", "Elektryk", "Kosa", 0},
    {"Swiatek", "Bankowiec", "Gruby", 2},
    {"Abucewicz", "Elektronik", "Lysy", 1},
    {"Kot", "Monter", "Gitarzysta", 2} 
};
void showmenu();  //prototyp

int main()
{
    showmenu();
    char choice;
    std::cin>>choice;
    while(choice!='Q' && choice!='q') //dla litery q nastepuje zakonczenie programu
    {
        switch(choice)
        {
            case 'a':
            case 'A': for(int i=0; i<ArSize; i++)
            {
                std::cout<<people[i].name<<std::endl;
            }
            break;
            case 'b':
            case 'B': for(int i=0; i<ArSize; i++)
            {
                std::cout<<people[i].position<<std::endl;
            }
            break;
            case 'c':
            case 'C': for(int i=0; i<ArSize; i++)
            {
                std::cout<<people[i].pseudozpdw<<std::endl;
            }
            break;
            case 'd':
            case 'D': for(int i=0; i<ArSize; i++)
            {
                switch(people[i].preferences)
                {
                    case 0: std::cout<<people[i].name<<std::endl;
                    break;
                    case 1: std::cout<<people[i].position<<std::endl;
                    break;
                    case 2: std::cout<<people[i].pseudozpdw<<std::endl;
                    break;
                }
            }
            break;
            default: std::cout<<"Nie ma takiej opcji.";

        }
        std::cout<<"Wybierz jedna z opcji: ";
        std::cin>>choice;
    }
    std::cout<<"Program zakonczy swoje dzialanie. Dziekujemy."<<std::endl;
    return 0;
}

void showmenu()
{
    std::cout<<"Zakon programistow dobrej woli: \n"
            "a. lista wg imion          b. lista wg stanowisk\n"
            "c. lista wg pseudonimow    d. lista wg preferenji\n"
            "q. koniec\n"
            "Wybierz jedna z opcji:";
}
