# Analyse Statistique d'un Fichier Texte

> **TP — Théorie des Langages et Compilation**  
> Langage : C 

---

## Description

Ce programme en langage C réalise une **analyse lexicale basique** d'un fichier texte nommé `text`.  
Il illustre les concepts fondamentaux de la théorie des langages : lecture de flux de caractères, reconnaissance de tokens (mots), et comptage de symboles — des opérations qui constituent la base de tout **analyseur lexical (lexer)**.

---

## Fonctionnalités

| Statistique | Description |
|---|---|
| Nombre de lignes | Compte les sauts de ligne `\n` |
| Nombre de mots | Détecte les transitions blanc → non-blanc |
| Nombre de caractères | Compte tous les octets lus (hors EOF) |
| Nombre d'espaces | Compte les espaces stricts `' '` |
| Caractère spécial | Nombre d'occurrences d'un symbole choisi par l'utilisateur |

---

## Structure du projet

```
tp_analyse_texte/
├── analyse_texte.c  
├── text              
└── README.md         
```

---

## Compilation

```bash
gcc exercice_tla_1.c -o analyse_texte
```

---

## Exécution

```bash
./analyse_texte
```

Le programme demande d'abord un caractère spécial à rechercher, puis affiche les statistiques.

**Exemple de session :**
```
Entrez le caractere special a rechercher : ,

===== Résultats de l'analyse =====
Nombre de lignes        : 5
Nombre de mots          : 59
Nombre de caracteres    : 367
Nombre d'espaces        : 54
Occurrences de ','      : 5
==================================
```

---

## Fichier d'entrée

Le fichier doit s'appeler exactement **`text`** (sans extension) et se trouver dans le même répertoire que l'exécutable.

**Créer le fichier :**
```bash
nano text
```


**Analyse lexicale** — Ce programme constitue un mini-lexer qui segmente un flux de caractères en unités significatives, première étape de tout compilateur ou interpréteur.

---

## Auteur

Mohamed Chaker Belhadj Amor  
Université : Eni'Carthage  
Année universitaire : 2025 – 2026
