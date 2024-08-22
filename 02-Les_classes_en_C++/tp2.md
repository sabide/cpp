# TP1 - Les classes - I

## Objectifs

- Implanter une classe simple
- Déclaration des membres public/private
- Implanter un constructeur simple

## Exercice 1 : Introduction aux Classes en C++ avec un Cadre Géométrique (1 heure)

**Objectif :** Cet exercice vise à introduire les concepts de base des classes en C++, notamment les constructeurs sous plusieurs formes, les attributs privés et publics, et les fonctions amies. Le contexte choisi est celui de la géométrie, où nous allons manipuler des points dans un plan cartésien.

## Contexte

Vous allez implémenter une classe `Point` en C++ qui représente un point dans un plan 2D avec des coordonnées \(x\) et \(y\). Cette classe doit permettre :
- La création d'objets `Point` avec différents constructeurs.
- La manipulation des attributs privés et publics, avec une alternative d'accès via des getters retournant des références.
- L'utilisation de fonctions amies pour accéder et modifier les attributs privés.

## 1. Définition de la Classe `Point`

Créez une classe `Point` avec les spécifications suivantes :

### Attributs
- **Privés :**
  - `double x` : Coordonnée en abscisse.
  - `double y` : Coordonnée en ordonnée.

- **Publics :**
  - Aucun.

### Constructeurs
- Un **constructeur par défaut** qui initialise les coordonnées du point à \( (0, 0) \).
- Un **constructeur paramétré** qui prend deux arguments pour initialiser \(x\) et \(y\).
- Un **constructeur de copie** qui initialise un point en le copiant d'un autre point.

### Méthodes
- **Getters et Setters :** Implémentez des méthodes publiques pour accéder et modifier les valeurs des attributs privés.
  - **Option 1 :** Implémentez les getters `getX()` et `getY()` qui retournent des copies des valeurs de `x` et `y`.
  - **Option 2 :** Implémentez les getters `getX()` et `getY()` qui retournent des références (`double&`) aux attributs `x` et `y`, permettant ainsi leur modification directe.

### Fonction Amie
- Une fonction amie `distance(const Point&, const Point&)` qui calcule la distance entre deux points.

## 2. Implémentation de la Classe `Point`

1. **Déclarez** et **implémentez** la classe `Point` dans des fichiers séparés (`point.h` pour la déclaration et `point.cpp` pour l'implémentation).

2. **Implémentez les constructeurs :**
   - Le constructeur par défaut.
   - Le constructeur paramétré.
   - Le constructeur de copie.

3. **Implémentez les méthodes :**
   - **Option 1 :** Les getters `getX()` et `getY()` retournent des copies des attributs.
   - **Option 2 :** Les getters `getX()` et `getY()` retournent des références aux attributs `x` et `y`, permettant leur modification directe.
   - Les setters `setX(double)` et `setY(double)` permettent de modifier les valeurs de `x` et `y`.

4. **Implémentez la fonction amie** `distance(const Point&, const Point&)`.

## 3. Exemple d'utilisation dans le `main`

Écrivez un programme dans `main.cpp` qui :

1. Crée un point `p1` en utilisant le constructeur par défaut.
2. Crée un point `p2` en utilisant le constructeur paramétré avec les coordonnées \(x = 3.0\) et \(y = 4.0\).
3. Affiche les coordonnées de `p1` et `p2`.
4. Modifie les coordonnées de `p1` pour \(x = 1.0\) et \(y = 2.0\).
   - **Option 1 :** Utilisez les setters pour modifier les coordonnées de `p1`.
   - **Option 2 :** Modifiez directement les valeurs de `p1` via les getters qui retournent des références.
5. Affiche la distance entre `p1` et `p2` en utilisant la fonction amie `distance`.

# Exercice : Classes et Fonctions Amies en C++

**Objectif :** Cet exercice a pour but de vous familiariser avec le concept de classes et fonctions amies en C++. Vous allez implémenter une classe `Rectangle` qui représente un rectangle dans un plan 2D, et une classe amie `RectangleUtils` qui pourra accéder aux attributs privés de cette classe pour calculer son aire et son périmètre.

## Contexte

Vous allez implémenter une classe `Rectangle` en C++ avec deux attributs privés pour représenter la largeur et la hauteur du rectangle. Vous allez ensuite écrire une classe amie `RectangleUtils` qui fournira des méthodes pour calculer l'aire et le périmètre du rectangle en accédant directement aux attributs privés de `Rectangle`.

## 1. Définition de la Classe `Rectangle`

Créez une classe `Rectangle` avec les spécifications suivantes :

### Attributs
- **Privés :**
  - `double width` : La largeur du rectangle.
  - `double height` : La hauteur du rectangle.

### Constructeurs
- Un **constructeur par défaut** qui initialise la largeur et la hauteur à 0.
- Un **constructeur paramétré** qui prend deux arguments pour initialiser la largeur et la hauteur.

### Méthodes
- **getWidth()** : Retourne la largeur du rectangle.
- **getHeight()** : Retourne la hauteur du rectangle.
- **setWidth(double w)** : Définit la largeur du rectangle.
- **setHeight(double h)** : Définit la hauteur du rectangle.

### Classe Amie
- Créez une classe amie `RectangleUtils` qui contiendra deux méthodes :
  - **calculateArea(const Rectangle&)** : Calcule et retourne l'aire du rectangle.
  - **calculatePerimeter(const Rectangle&)** : Calcule et retourne le périmètre du rectangle.

## 2. Implémentation de la Classe `Rectangle`

1. **Déclarez** et **implémentez** la classe `Rectangle` dans des fichiers séparés (`rectangle.h` pour la déclaration et `rectangle.cpp` pour l'implémentation).

2. **Implémentez les constructeurs :**
   - Le constructeur par défaut.
   - Le constructeur paramétré.

3. **Implémentez les méthodes :**
   - `getWidth()`, `getHeight()`, `setWidth(double w)`, et `setHeight(double h)`.

4. **Déclarez et implémentez la classe amie `RectangleUtils`** pour fournir les méthodes `calculateArea` et `calculatePerimeter`.

## 3. Exemple d'utilisation dans le `main`

Écrivez un programme dans `main.cpp` qui :

1. Crée un rectangle `rect1` en utilisant le constructeur par défaut.
2. Crée un rectangle `rect2` avec une largeur de 4.0 et une hauteur de 5.0 en utilisant le constructeur paramétré.
3. Affiche les dimensions du rectangle `rect2`.
4. Calcule et affiche l'aire de `rect2` en utilisant la méthode `calculateArea` de la classe amie `RectangleUtils`.
5. Calcule et affiche le périmètre de `rect2` en utilisant la méthode `calculatePerimeter` de la classe amie `RectangleUtils`.

## 4. Points Clés à Retenir

- **Classe Amie :** Une classe amie peut accéder directement aux attributs privés d'une autre classe. Elle est déclarée en utilisant le mot-clé `friend` dans la classe d'origine.
- **Encapsulation :** Même avec une classe amie, les attributs restent encapsulés à l'intérieur de la classe d'origine, et l'accès direct n'est possible que pour les classes spécifiquement déclarées comme amies.

## 5. Extensions Possibles

Pour approfondir vos connaissances :
- Ajoutez d'autres méthodes à la classe amie, comme une méthode pour redimensionner le rectangle.
- Implémentez une classe dérivée `Square` (carré) qui hérite de `Rectangle` et où la largeur et la hauteur sont toujours égales.
- Ajoutez des tests pour vérifier que la classe amie `RectangleUtils` fonctionne correctement avec des rectangles de différentes tailles.

Cet exercice est un bon point de départ pour comprendre comment les classes amies peuvent être utilisées pour accéder aux données privées d'une autre classe tout en respectant l'encapsulation.




## Exercice 2 - Une classe polynomes (1h00)

Dans cet exercice on se propose de modéliser les polynômes de degrés $N$ définis sur $\mathbb{R}$.
Un polyôme sera modélisé par un tableau stockant les mônomes.   

1. Définir cette classe polynome.

2. Coder un constructeur.

3. ajouter une fonction membre  évaluant le polynome en $x$ donné. 

4. ajouter une fonction membre retournant une dérivée 

# Problème : Polynômes de Chebyshev en C++

## Contexte

Les polynômes de Chebyshev sont une famille de polynômes orthogonaux qui apparaissent dans divers domaines des mathématiques et de l'ingénierie, notamment dans les méthodes d'approximation, l'analyse numérique, et la résolution des équations différentielles. Ces polynômes sont définis par la relation de récurrence suivante :

$$T_0(x) = 1, \quad T_1(x) = x$$

$$
T_n(x) = 2x \cdot T_{n-1}(x) - T_{n-2}(x), \quad \text{pour } n \geq 2
$$

Le polynôme de Chebyshev de degré $n$ est noté $T_n(x)$.

## Objectif

Vous devez implémenter une classe C++ nommée `ChebyshevPolynomial` qui permet de modéliser et manipuler les polynômes de Chebyshev. Cette classe doit fournir les fonctionnalités suivantes :

1. **Création d'un polynôme de Chebyshev** : Le constructeur de la classe doit prendre un entier `degree` représentant le degré du polynôme de Chebyshev.

2. **Évaluation du polynôme** : La classe doit fournir une méthode `evaluate(double x)` qui évalue le polynôme de Chebyshev en un point `x`.

3. **Obtention des coefficients** : La classe doit fournir une méthode `coefficients()` qui retourne un vecteur contenant les coefficients du polynôme, du terme de plus bas degré au terme de plus haut degré.

4. **Affichage des informations** : La classe doit permettre d'afficher les informations du polynôme, y compris son degré et ses coefficients.

## Exercice

### Partie 1 : Implémentation de la classe `ChebyshevPolynomial`

1. Implémentez la classe `ChebyshevPolynomial` en respectant les fonctionnalités décrites ci-dessus.
2. Assurez-vous que la classe gère correctement les cas particuliers, tels que les polynômes de degré 0 ou 1.

### Partie 2 : Utilisation de la classe

Écrivez un programme C++ qui réalise les opérations suivantes :

1. Demande à l'utilisateur de saisir le degré du polynôme de Chebyshev à modéliser.
2. Crée une instance de la classe `ChebyshevPolynomial` avec le degré spécifié.
3. Évalue le polynôme en un point donné (par exemple, \( x = 0.5 \)) et affiche le résultat.
4. Affiche les coefficients du polynôme.

### Partie 3 : Tests et validation

1. Testez votre programme avec plusieurs degrés de polynômes de Chebyshev (par exemple, 0, 1, 2, 3, 5, etc.).
2. Vérifiez que les résultats obtenus sont corrects, notamment en comparant les coefficients et les valeurs évaluées avec des références mathématiques ou des calculs manuels.

### Exemple de sortie attendue

Si l'utilisateur saisit un degré de 3, le programme pourrait produire une sortie similaire à :


