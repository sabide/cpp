# Implémentation Numérique de la Dérivée Seconde

### Objectif :
- Implémenter numériquement la dérivée seconde d'une fonction en utilisant différentes approches pour la gestion des tableaux en C++ : pointeurs, `std::array`, et `std::vector`.

### Contexte :
La dérivation numérique consiste à évaluer une dérivée seconde \( f''(x) \) à partir des valeurs discrètes \( f_i = f(x_i) \) où les coordonnées sont définies par \( X = \{x_i = ih, 0 \leq i \leq n\} \) avec \( h = 1/n \). La dérivée seconde peut être approchée par la relation suivante :

\[
f''_i = \frac{f_{i+1} - 2f_i + f_{i-1}}{h^2}, \quad 0 < i < n
\]

Dans ce projet, vous allez implémenter cette approximation en utilisant différentes techniques de gestion des tableaux.

## Questions :

1. **Écriture de l'algorithme sur papier** :
   - Écrivez l'algorithme pour calculer la dérivée seconde à la main avant de le coder.
   - Définissez les étapes pour initialiser les tableaux, calculer la dérivée seconde, et estimer l'erreur maximale.

2. **Version avec pointeurs (`*`)** :
   - **Allocation et initialisation des tableaux** :
     - Dans un fichier `main.cpp`, allouez un tableau de taille `n` et initialisez ses éléments.
     - Codez le tableau \( X \) où \( x_i = i \times h \).
     - Codez le tableau \( F \) où \( f_i = -\frac{\sin(2\pi x_i)}{4\pi^2} \).
     - Codez le tableau \( F'' \) où \( f''_i = \frac{f_{i+1} - 2f_i + f_{i-1}}{h^2} \).
   - **Calcul de l'erreur** :
     - Calculez l'erreur maximale commise sur l'approximation de la dérivée seconde.
   - **Refactorisation** :
     - Une fois le code fonctionnel, réorganisez-le en utilisant des fonctions pour améliorer la lisibilité et la modularité.

3. **Version avec `std::array`** :
   - Reprenez l'implémentation précédente en utilisant le type `std::array` à la place des pointeurs.
   - **Comparaison** :
     - Commentez les différences que vous observez entre l'utilisation des pointeurs et celle de `std::array`, en termes de sécurité, de lisibilité, et de gestion des erreurs.

4. **Version avec `std::vector`** :
   - Reprenez l'implémentation précédente en utilisant `std::vector` à la place de `std::array`.
   - **Comparaison** :
     - Comparez les avantages et inconvénients de l'utilisation de `std::vector` par rapport à `std::array` et aux pointeurs.

## Questions de Réflexion :
1. Quelles sont les principales différences entre l'utilisation des pointeurs, des `std::array`, et des `std::vector` en termes de gestion de la mémoire et de sécurité ?
2. Comment la modularité et la lisibilité du code sont-elles affectées par l'utilisation de fonctions et de types de conteneurs plus sûrs comme `std::array` et `std::vector` ?
3. Quelle approche préférez-vous pour ce type de calculs numériques, et pourquoi ?
    