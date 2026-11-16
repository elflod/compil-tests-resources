# compil-tests-resources

Ressources communes pour les tests de compilation.

<div style="background-color: #8e0000;">

> Merci de garder les fichiers en LF (fin de ligne avec \n seulement) !!!
> 
> Si vous n'êtes pas sûrs de vous, demandez !!!

</div>

Ajoutez-vous dans la section [contributeurs](#contributeurs) si vous commitez sur ce projet.

## Structuration

Ne pas modifier un dossier déjà existant qui a déjà une signification.

Ne pas modifier les extensions de fichiers déjà établies.

```
compil-tests-resources
├── c-files
│   └── $cfile.c
├── outputs
│   └── $cfile.log
└── results
    └── $cfile.txt
```

### c-files

Le dossier c-files contient les fichiers source écrits en C (C--).

### outputs

Le dossier outputs contient les affichages que la machine _msm_ doit produire lorsque le code machine généré lui est fourni.

La présence d'un fichier de logs n'est pas obligatoire pur chaque fichier source.

### results

Le dossier results contient les fichiers de code machine qui doivent être générés par le compilateur.

## Instructions de saut (jump)

Après un `jump` ou un `jumpf`, on écrit le **nom du label** où aller (sans le point). Le label est défini ailleurs dans le code avec un point devant (`.nom`).

| Cas | Instruction | Label après le jump | Rôle |
|---|---|---|---|
| Condition | `jumpf ifend<N>` | `ifend<N>` | Si la condition est fausse, on saute au `else` (ou après le `if` s'il n'y a pas de `else`) |
| Condition | `jump skipelse<N>` | `skipelse<N>` | Fin du bloc `if` : on saute après le `else` |
| Boucle | `jump loop<N>` | `loop<N>` | Retour au début de la boucle |
| Boucle | `jump loopend<N>` (break) | `loopend<N>` | Sortie de la boucle |

### Les numéros (`<N>`)

Il y a **2 compteurs séparés** qui commencent tous les deux à **0** :

- un compteur pour les **conditions** (`labelCond`) : 1er `if` → `ifend0`, 2e `if` → `ifend1`, etc.
- un compteur pour les **boucles** (`labelLoop`) : 1re boucle → `loop0`, 2e boucle → `loop1`, etc.

Chaque nouveau `if` ou nouvelle boucle prend le numéro courant, puis le compteur augmente de 1. Le numéro sert à rendre chaque label unique.

Un `break` utilise le numéro de la boucle dans laquelle il se trouve.


## Contributeurs

- Barret Florian
- Charrier Chloé
- Lavenant Jordan
- Romano Mathéo
- Roussel Marc
