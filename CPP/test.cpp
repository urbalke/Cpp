


#include <iostream>
using namespace std;

struct zadanie
{
    int operacja;
    struct zadanie *next;
    struct zadanie *prev;
};

void wstaw_poczatek(struct zadanie **head, int nowa_operacja)
{

    // zajecie pamieci dla pierwszego obiektu
    struct zadanie *nowe_zadanie = new zadanie;

    // definiowanie obiektu

    nowe_zadanie->operacja = nowa_operacja;

    // ustawienie nowego int w miejsce next w pamieci
    nowe_zadanie->next = (*head);

    // ustawienie null w przed struktura
    nowe_zadanie->prev = NULL;

    // jeśli wartość wskaźnika head nie jest NULL to natepne prev bedzie nowa operacja
    if ((*head) != NULL)
        (*head)->prev = nowe_zadanie;

    // head wskaze nwoa operacje
    (*head) = nowe_zadanie;
}

void wstaw_po(struct zadanie *poprzednie_zadanie, int nowa_operacja)
{

    //sprawdzenie czy poprzednia wartosc wskaznika nie pokazuje na NULL
    if (poprzednie_zadanie == NULL)
    {
        cout << "Nie ma nizej zadnej operacji";
    }
    // zajecie pamieci dla nowej operacji
    struct zadanie *nowe_zadanie = new zadanie;

    // definiowanie obiektu
    nowe_zadanie->operacja = nowa_operacja;

    //polaczenie  next nowego obiektu z next otrzymanego w funkcji
    nowe_zadanie->next = poprzednie_zadanie->next;

    //ustawienie w poprzednim zadaniu nowej wartosci
    poprzednie_zadanie->next = nowe_zadanie;
    // jak damy stecz to wracamy do wskaznika poprzedniego zadania
    nowe_zadanie->prev = poprzednie_zadanie;

    // jezeli wskaznik nowego zadania na next bedzie null, to nowe zadanie ma ustawic prev jako nowe zadanie
    if (nowe_zadanie->next != NULL)
        nowe_zadanie->next->prev = nowe_zadanie;
}

void wstaw_koniec(struct zadanie **head, int nowa_operacja)
{
    // zajecie pamieci dla nowej operacji
    struct zadanie *nowe_zadanie = new zadanie;

    // zataczamy kolo
    struct zadanie *last = *head;

    nowe_zadanie->operacja = nowa_operacja;

    nowe_zadanie->next = NULL;

    if (*head == NULL)
    {
        nowe_zadanie->prev = NULL;
        *head = nowe_zadanie;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    nowe_zadanie->prev = last;
    return;
}

void wyswietlListe(struct zadanie *miejsce)
{
    struct zadanie *last;

    while (miejsce != NULL)
    {
        cout << miejsce->operacja << " <===> ";
        last = miejsce;
        miejsce = miejsce->next;
    }
    if (miejsce == NULL)
        cout << "NULL";
}

int main()
{
    struct zadanie *head = NULL;

    wstaw_koniec(&head, 20);
    wstaw_koniec(&head, 24);
    wstaw_koniec(&head, 25);
    wstaw_poczatek(&head, 21);
    wstaw_poczatek(&head, 24);
    wstaw_poczatek(&head, 26);
    wstaw_poczatek(&head, 28);
    wstaw_koniec(&head, 6);
    wstaw_poczatek(&head, 61);
    wstaw_poczatek(&head, 5);

    cout << "Działa tak: " << endl;

    wyswietlListe(head);
    return 0;
}
