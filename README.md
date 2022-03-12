# Lab 2 - konstruktor, destruktor

## Uruchomienie

Wykonaj następujące operacje:

```bash
g++ main.cpp Category.cpp Author.cpp Book.cpp -o wynik.out
```
```bash
chmod 777 wynik.out
```
```bash
./wynik.out
```

## Zadania
1. Utwórz konstruktor dla każdej swojej klasy
	* Przećwicz działanie konstruktora na dowolnej klasie bez zależności - np. Author (autor jest niezależny od innych klas)!
    	* Utwórz konstruktor standardowy (bez listy inicjalizacyjnej)
    	* W ciele konstruktora wypisz napis "Wywołano konstruktor"
    	* Utwórz obiekt - np. `Author rowling {"J.K.", "Rowling"};`
    	* Sprawdź działanie konstruktora
    	* Zmień ciało konstruktora w listę inicjalizacyjną (lista jest zdecydowanie nowocześniejszym podejściem)
    	* Czy coś się zmieniło podczas tworzenia obiektu ? (nie - konstruktor jest konstruktorem nadal)
    	* Dodaj konstruktory do pozostałych klas
2. Utwórz destruktor dla każdej swojej klasy
	* Przećwicz działanie destruktora na dowolnej klasie bez zależności - np. Author (autor jest niezależny od innych klas)!
    	* W ciele destruktora wypisz napis "Wywołano destruktor"
    	* Utwórz obiekt - np. `Author rowling {"J.K.", "Rowling"};`
    	* Sprawdź działanie destruktora - kiedy zostaje wywołany ?
    	* Czas na coś trudniejszego ! Jak wywołać destruktor samemu ? Użyj wskaźników:
      		* Tworzenie wskaźnika na obiekt: `Author *rowling = new Author {"J.K.", "Rowling"};`
	  		* Zwalnianie pamięci `delete rowling`
	  		* Widzisz różnicę, że tym razem to Ty panujesz nad tym kiedy obiekt został usunięty ? 
	  		* **Na koniec zadań wróć do tego punktu raz jeszcze i spróbuj wykonać jakąś akcje na usuniętym obiekcie.**
3. Utwórz conajmniej trzy przykładowe obiekty swojej głównej Encji (np. 3 książki w tym przypadku)
4. Dodaj publiczną metodę `show()` w każdej klasie, która wypisze właściwości danej klasy. Np:
  	```
  	Tytuł: Harry Potter
  	Autor: J.K. Rowling
  	Kategoria: Fantasy (Gatunek literacki lub filmowy używający magicznych i innych nadprzyrodzonych form.)
  	```
  	> Uwaga! Metoda `show()` z obiektów niezależnych powinna zostać wywołana w klasie głównej. 

	> (Jako przykład zobacz metodę show z klasy `Book`) 
5. *Tworzymy sklep Twoich "rzeczy" (książek, filmów, gier, psów, samochodów i tak dalej).* Utwórz tablicę conajmniej 3 obieków a następnie przeiteruj w pętli i wypisz każdy z nich.
6. Ostateczny wynik powinien wyglądać mniej więcej tak:

```bash
Półka z książkami:
-------------------
Tytuł: Harry Potter
Autor: J.K. Rowling
Kategoria: Fantasy (Gatunek literacki lub filmowy używający magicznych i innych nadprzyrodzonych form.)
-------------------
Tytuł: The Warded Man
Autor: Peter  Brett
Kategoria: Fantasy (Gatunek literacki lub filmowy używający magicznych i innych nadprzyrodzonych form.)
-------------------
Tytuł: Fantastic Beasts and Where to Find Them
Autor: J.K. Rowling
Kategoria: Fantasy (Gatunek literacki lub filmowy używający magicznych i innych nadprzyrodzonych form.)
-------------------
```

## Zadanie domowe
Przeczyść swój kod - na następne zajęcia Twoje klasy powinny posiadać tylko i wyłącznie:
* prywatne pola
* konstruktor (bez wypisywania komunikatów)
* publiczną metodę `show`
