# Introduction à GIT (30mn)

Cet UE introduction au C++ s'appuie pricipalement sur des travaux patriques.
Pour faciliter la correction des différents exercices nous allons utiliser un outil 
de versionnage. Nous allons donc travailler ce point technique en partiquant git sur les points suivants:
1. **Cloner un dépôt Git existant.**
2. **Créer et basculer sur une nouvelle branche locale.**
3. **Effectuer des modifications et les committer.**
4. **Mettre à jour votre branche avec les dernières modifications de la branche principale.**


## Etapes à suivre pour les séances de travaux pratiques

### 1. Cloner le Dépôt Git

Commencez par cloner le dépôt Git distant sur votre machine locale.
```bash
git clone https://github.com/sabide/cpp.git
```
Cette commande est à réaliser à la premiére séance seulement. 
Vous importez les énnoncés des exercices de la séances.
C'est un clone de mon répertoire de travail principal.
  
### 2. Naviguer dans le Répertoire du Dépôt

Après le clonage, déplacez-vous dans le répertoire du dépôt cloné.
```bash
cd repository
```

### 3. Créer et Basculer sur une Nouvelle Branche

Pour répondre aux questions vous pouvez créer une branche locale sur laquelle. Par exemple, nommons-la ` v`.
```bash
git checkout -b 00-Outils_pour_le_dev-reponses
```
Cette commande fait deux choses :
- Crée une nouvelle branche nommée `00-Outils_pour_le_dev-reponses`.
- Bascule sur cette branche.
A partir de maintenant vous pouvez editer du code.....

### 4. Ajouter les modifications à l'index

Pour notifier à git que vous avez ajouter des fichiers nouvellement créés à l'index Git; il vous faut taper la commande:

```bash
git add .
```

Cette commande ajoute **tous** les fichiers modifiés. Vous pouvez également ajouter des fichiers spécifiques en remplaçant `.` par le nom du fichier.

### 5. Commiter les modifications

L'opération de commit vous permet de tracer les modifications avec un message descriptif.

```bash
git commit -m "Réponses aux questions de l'exercice"
```
Tous ceci se passe en local sur votre répertoire......

### 6. Pousser la branche locale vers le dépôt distant

Si vous souhaitez partager votre branche avec le dépôt distant, poussez-la.
```bash
git push origin 00-Outils_pour_le_dev-reponses
```
Attention dans le cas de notre UE vous ne pouvez pas pousser  vos modifications sur le dépôt.

### 7. Récupérer la correction
Pour récuperer la solution nous allons fusionner la branche principale (main).
Pour simplifier la mise à jour de la correction, je donnerai les codes sources corrigés dans un sous-répertoire `sol`.
On revient sur la branche pricipale pour récupérer la correction:
```bash
git checkout main
git pull origin main
```
puis vous la fusionner avec avec git merge main


```bash
git checkout main
git pull origin main
```

## Résumé des Commandes Utilisées

Voici un récapitulatif des commandes Git utilisées dans cet exercice :

```bash
# Cloner le dépôt
git clone <URL_DU_DEPOT>

# Naviguer dans le répertoire
cd repository

# Créer et basculer sur une nouvelle branche
git checkout -b 00-Outils_pour_le_dev-reponses

# Ajouter les modifications
git add .

# Commiter les modifications
git commit -m "Réponses aux questions de l'exercice"

# (Optionnel pour le tp) Pousser la branche locale vers le dépôt distant
git push origin 00-Outils_pour_le_dev-reponses 

# Basculer sur la branche principale 
git checkout main

# Tirer la correction (quand je la donne) de la branche principale
git pull origin main

# Basculer de nouveau sur votre branche de travail
git checkout 00-Outils_pour_le_dev-reponses

# Fusionner la branche principale dans votre branche
git merge main

# (Optionnel pour le tp) Pousser les modifications fusionnées
git push origin 00-Outils_pour_le_dev-reponses

```