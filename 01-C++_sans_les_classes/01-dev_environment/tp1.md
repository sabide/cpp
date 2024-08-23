# TP1 - Introduction

## Objectifs

- Ecrire un programme basique en C++
%- Commiter et revenir en arrière avec Git
- Compiler un programme constitué de plusieurs fichiers sources
- Utiliser la librairie standard

## Rappels du cours

<details>
<summary>Compilation</summary>

```bash
# Build some source files (= generate object-files)
g++ -c file1.cpp file2.cpp file3.cpp --std=c++17
# Link the object-files into an executable.
g++ -o executable.x file1.o file2.o file3.o
# Execute the binary.
./the_exe
```
</details>

<details>
<summary>Utiliser Git</summary>

```bash
# Clone a repository.
git clone https://url_to_repository
# Move into the repository.
cd repository_folder
# Create and go on a new branch.
git switch -c new_branch
# Stage some changes (= prepare them for commit).
git add file1 file2 folder1
# Commit with a specific message on the current branch.
git commit -m "a message"
# Switch back to an existing branch.
git switch other_branch
# Put the commits of a branch named "work" into the current branch.
git merge work
```
</details>

<details>
<summary>Ecrire dans la console</summary>

```cpp
std::cout << "Value of var_a is:" << var_a << "." << std::endl;
```
</details>

<details>
<summary>Lire depuis la console</summary>

```cpp
std::cin >> var_a;
```
</details>

<details>
<summary>Utiliser un tableau dynamique</summary>

```cpp
auto values = std::vector<int>{ 1, 2, 3 };
auto first = values[0];
values.push_back(4);
```
</details>

<details>
<summary>Utiliser une chaîne de caractères</summary>

```cpp
auto first_name = std::string { "Medor" };
auto last_name = std::string { "TheDog" };
auto full_name = first_name + ' ' + last_name;
```
</details>


## Exercice 1 - Entrée / sortie (30 min)

1. Ouvrez le fichier [main.cpp](ex1/main.cpp) et essayez de comprendre ce que font chacune de ses lignes.

2. Compilez ce programme de manière à générer un executable nommé "hello.x".

3. Lancez le programme. Celui-ci vous demande votre nom, mais affiche toujours en sortie : "hello !".  
Modifiez le programme pour qu'il affiche votre prénom à la place.

4. Créez une nouvelle branche git nommée `tp1` et commitez vos changements dessus avec le message "tp1 - ex1 - q4".

5. Lancez le programme et passez-lui un très long nom (au moins 20 caractères). Que se passe-t-il ?  
Quelle classe de la librairie standard faudrait-il utiliser à la place du tableau de `char` pour stocker le nom de l'utilisateur ?

6. Modifiez le programme afin de réaliser ce changement. Testez et commitez vos modifications.

7. Prenez note des difficultés que vous avez rencontrées durant cet exercice et de comment vous les avez surmontées.
 

## Exercice 2 - Erreur des grands nombres (30 min)

On cherche à calculer la solution du problème de Cauchy suivant 
$$y^\prime(t) = 3 y(t)−1, t \in [0,10]$$
avec la condition initiales données par $y(0) = 13$.
1. Donner la solution exacte de ce problème de Cauchy.
2. On considère à present le même problème mais avec une perutbation de la condition initiale $y_{\epsilon}(0) = 13 + \epsilon$ Calculer à l’aide d’un code en C la différence $y_{\epsilon}(10) − y(10)$. Commenter.

> [!IMPORTANT]
> Pensez à commiter vos changements à la fin de chaque question.
> Ainsi, si vous souhaitez annuler vos modifications pour revenir au code enregistré à la fin de la question précédente, vous pourrez le faire.

## Exercice 3 - Les tableaux (1h)

Dans cet exercice on se propose de manipuler des tableaux de rang 1 (avec 1 seul indice) à l'aide de plusieurs approches.
### Contexte
La dérivation numérique consiste à évaluer une dérivée $f^\prime(x)$ à partir de la donnée $f_i=f(x_i)$.
Les fonctions et les dérivées sont évaluées sur les coordonnées $X=\{x_i = i h, 0 \le i \le n \}$ avec $h=1/n$.
La dérivée seconde peut s'évaluer à l'aide de la relation:
$$
f_i^{\prime\prime} = \frac{f_{i+1}-2f_{i}+f_{i-1}}{h^2}, \quad 0 \lt i \lt n
$$
Dans ce qui suit, on se propose d'implanter cette fonctionnalité avec différentes approches pour la gestion des tableaux.  

0. Ecrire sur papier l'algorithme pour réaliser la fonction demandée.  

### Version pointeurs `type *`
Dans un premier temps on code sans dévalarer de fonctions.

1. Dans un fichier `main.cpp` allouer un tableau de taille $n$ et initialiser ses éléments.
2. Coder le tableau $X=\{x_i = i h, 0 \le i \le n \}$. 
3. Coder le tableau $F=\{f_i = - \sin ( 2\pi x_i )/(4\pi^2), 0 \le i \le n \}$.
4. Coder le tableau $F^{\prime\prime}= \{ f_i^{\prime \prime} =  \left(f_{i+1}-2f_{i}+f_{i-1}\right)/h^2, 0 \lt i \lt n \}$.
5. Calculer l'erreur maximum commise sur l'appoximation de la dérivée.

Une fois votre code fonctionnel utiliser des fonctions pour faciliter la lecture et la modularité de votre code.

### Version `array`
6. Reprendre la question précédente en substituant les pointeurs par le type [`array`](https://en.cppreference.com/w/cpp/container/array).
7. Commenter les différences avec la version pointeur. 

### Version `vector`
8. Reprendre la question précédente en array par [`vector`](https://en.cppreference.com/w/cpp/container/vector).

## Pour terminer

Commitez vos modifications si ce n'est pas déjà fait.  
Revenez sur la branche `master`. Vous devriez voir disparaître tout votre beau travail.  
Si vous souhaitez le retrouver, vous pouvez soit retourner sur la branche `tp1`, soit merger cette branche sur la branche `master`.