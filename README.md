# Proiect OOP "Formula 1"
## Autor : Vulpoi Gabriel
### Clasele utilizate :
* IntVector - aloca dinamic un vector
* String - aloca dinamic un sir de caractere
* Drivers - clasa care retine cei 2 piloti ai echipei 
* Car - clasa care retine specificatiile masinii sub forma clasei String dar si pretul acesteia sub forma clasei IntVector
* Team - clasa care retine un nume de tip String , o clasa car pentru specificatiile masinii , o clasa Drivers si numarul de oameni din echipa in o clasa de tipul IntVector
 ### Alte functionalitati : constructori de copiere , supraincarcare de operatori .

# Proiect 2 OOP "Snake"
### Am uitat sa scriu documentaia cand l-am facut si am uitat ce continea si unde .
# Proiect 3 OOP "Snake"
### Clasele utilizate :
* Coord - clasa care retine coordonatele x si y pentru cap . X si y sunt smart pointers de tipul unique_ptr .
* Head - clasa pentru capul sarpelui
* Body - clasa pentru corpul sarpelui 
* Snake - clasa care mosteneste atat clasa Head cat si clasa Body
* Vector - clasa care aloca dinamic un vector si este o clasa template
* Food - clasa cu rol de a genera random mancarea (punct bonus)
* GameOver - clasa abstracta cu rol de a afisa sfarsitul jocului
* Output - clasa interfata cu functii pur virtuale cu rol in afisarea jocului

### Design paterns :
* Factory Pattern: Pattern-ul de tip factory poate fi utilizat pentru a crea diferite tipuri de obiecte, cum ar fi elementele de hrană sau obstacolele, într-un mod flexibil și modular. Încapsulează logica de creare a obiectelor și oferă o interfață comună pentru crearea acestor obiecte.
* Observer Pattern: Pattern-ul de tip observer poate fi utilizat pentru a stabili comunicarea între diferitele elemente ale jocului. De exemplu, obiectul șarpe poate fi un observabil care notifică managerul de scor sau interfața grafică de fiecare dată când crește sau intră în coliziune cu ceva. Aceasta permite dezlegarea și extensibilitatea ușoară.
* Command Pattern: Pattern-ul de tip command poate fi utilizat pentru a gestiona intrările utilizatorului și comenzile jocului. Fiecare comandă de intrare, cum ar fi deplasarea șarpelui într-o anumită direcție, poate fi încapsulată ca un obiect de comandă. Aceasta permite personalizarea ușoară și maparea intrărilor la acțiuni de joc.