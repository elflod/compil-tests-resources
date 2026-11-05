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

## Contributeurs

- Barret Florian
- Charrier Chloé
- Lavenant Jordan
- Romano Mathéo
