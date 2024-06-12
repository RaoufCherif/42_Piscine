Ce repo a pour but de m'aider à me former dans le langage C.

#SHELL
#Changer les permission 
La table de référence pour chmod  
`r` (read): permission de lecture(valeur numérique: 4); 

`w` (write): permission d'écriture (valeur numérique: 2);

`x` (execute): permission d'exécution (valeur numérique: 1);

rwx (lecture, écriture, exécution) : 7
rw- (lecture, écriture) : 6
r-x (lecture, exécution) : 5
r-- (lecture seule) : 4
-wx (écriture, exécution) : 3
-w- (écriture seule) : 2
--x (exécution seule) : 1
--- (aucune permission) : 0


Commande chmod	Propriétaire	Groupe	Autres	Représentation
chmod 777	rwx	rwx	rwx	-rwxrwxrwx
chmod 755	rwx	r-x	r-x	-rwxr-xr-x
chmod 700	rwx	---	---	-rwx------
chmod 666	rw-	rw-	rw-	-rw-rw-rw-
chmod 644	rw-	r--	r--	-rw-r--r--
chmod 600	rw-	---	---	-rw-------
chmod 555	r-x	r-x	r-x	-r-xr-xr-x
chmod 444	r--	r--	r--	-r--r--r--
chmod 400	r--	---	---	-r---------
chmod 111	--x	--x	--x	--x--x--x
chmod 000	---	---	---	----------

chmod 755 myfile

ls -l 

-rw-rw-r-- 1 codephenix4 codephenix4 10240 juin  10 14:41 exo2.tar
drwx--xr-x 2 codephenix4 codephenix4  4096 juin  10 14:29 test0
-rwx--xr-- 1 codephenix4 codephenix4     0 juin  10 12:45 test1
dr-x---r-- 2 codephenix4 codephenix4  4096 juin  10 12:56 test2
-r-----r-- 1 codephenix4 codephenix4     0 juin  10 12:57 test3
-rw-r----x 1 codephenix4 codephenix4     0 juin  10 12:58 test4
-r-----r-- 1 codephenix4 codephenix4     0 juin  10 12:59 test5
lrwxrwxrwx 1 codephenix4 codephenix4     5 juin  10 14:33 test6 -> test0

#pour créer un lien symbolique (symlin_file)

 ln -s original_file.txt symlink_file

#Utiliser tar pour archive/ zipe fichiers/repertoirs

 tar -cf exo2.tar ex02
 tar -cf test.tar test 

#Créer un fichier bash
extension .sh 
les fichier executbale commence par la ligne suivante:    
`#!/bin/bash`
 
votre code 


exit le fichier et change les permissions afin que le fichier soit exécutable.

Pour exécuter le script, tapez la commande suivante :
`bash nomDuFichier`

#Afficher le contenu d'un fichier avec des espaces et un saut de ligne :
`cat -e nomduFichier`


#Lancer un script bash et afficher le contenu avec des espaces et des sauts de lignes :
`bash nomDuFichier | cat -e `

### Patch() 
#La méthode patch() est utilisée pour mettre à jour un fichier à partir d'un autre fichier, par exemple:

`echo bonjour > a.txt`
`echo Bonjour Mme, Monsieur > b.txt`
`diff --normal a.txt b.txt > ab.diff`
`patch  a.txt ab.diff`
`diff a.txt b.txt`
   
###FIND
#find C'est la commande utilisée pour rechercher des fichiers et des répertoires dans un répertoire spécifié et ses sous-répertoires.
exemple - 1 : 

`find /path/to/search -type f \( -name '#*' -o -name '*~' \)` 

/path/to/search : Ceci est le chemin du répertoire de départ pour la recherche. Vous devez remplacer /path/to/search par le chemin réel du répertoire où vous souhaitez effectuer la recherche.

-type f : Cela restreint la recherche aux fichiers uniquement (f pour files). Si vous souhaitez rechercher des répertoires, vous pouvez utiliser -type d (d pour directories).

\( et \) : Ces parenthèses sont utilisées pour regrouper les conditions de recherche. Les parenthèses sont échappées (\) pour indiquer à la ligne de commande qu'elles font partie de la commande find et non du shell.

-name '#*' : Cette condition correspond aux fichiers dont le nom commence par #. Le * est un caractère générique qui représente zéro ou plusieurs caractères.

-o : C'est l'opérateur OR (ou) utilisé pour combiner plusieurs conditions. Si l'une des conditions est vraie, le fichier sera inclus dans les résultats.

-name '*~' : Cette condition correspond aux fichiers dont le nom se termine par ~. De nouveau, le * est un caractère générique qui représente zéro ou plusieurs caractères. 

exemple 2 : la commande suivante nous permet de chercher un fichier et le supprimer si existe.

`find . -type f -name "*~" -print -delete -o -type f -name "\#*\#" -print -delete`

#Pour afficher la liste des utilisateurs dans la variable d'environnement FT_USER  avec la commande suivante : 
`groups $FT_USER | tr ' ' ','`
 
#Pour afficher les groupes d'utilisateurs sur  une seule ligne séparés par des virgules.
`id -G -n $FT_USER | tr ' ' ',' | tr -d '\n'`

#Find: pour afficher que les noms des fichiers sans les extensions et le path complet ont utilise la commande suivante :  


`find ./  -type f -name "*.tar" -exec basename {} \; | sed 's/\.[^.]*$//'`

Explication de la commande
find /path/to/search -type f -name "*.*" :

find est utilisé pour rechercher des fichiers.
/path/to/search est le répertoire de recherche (remplacez-le par le chemin réel où vous voulez rechercher).
-type f indique que nous recherchons des fichiers (files).
-name "*.*" limite les résultats aux fichiers ayant une extension.
-exec basename {} \; :

-exec exécute une commande sur chaque fichier trouvé.
basename {} extrait le nom de base du fichier (sans le chemin).
{} est remplacé par chaque fichier trouvé.
\; termine la commande -exec.
| sed 's/\.[^.]*$//' :

Le pipe | redirige la sortie de find vers sed.
sed 's/\.[^.]*$//' utilise une expression régulière pour supprimer l'extension de chaque nom de fichier.
s/ démarre une substitution.
\.[^.]*$ correspond à un point suivi de n'importe quel caractère sauf un point (qui représente l'extension du fichier) jusqu'à la fin de la ligne ($).
// remplace l'extension trouvée par une chaîne vide (la supprime).


#Find pour compter les fichiers et les répertoirs :
`find . -type f -o -type d | wc -l`   

#Find pour compter les fichiers  :
`find . -type f | wc -l`

#Find pour compter les répertoirs  :
`find . -type d | wc -l`

#ifconfig  est une commande utilisée pour configurer et afficher les interfaces réseau sur les systèmes Unix et Linux.

`ifconfig | grep -o -E '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'` 

cette commande affiche tous les adresse MAC

Une adresse MAC (Media Access Control address) est un identifiant unique attribué à une interface réseau pour les communications sur le segment physique d'un réseau.

#SKIP
Pour afficher une ligne sur deux à partir de la première ligne de la sortie de ls -l

`ls -l | awk 'NR % 2 == 1'`

Explication de la commande
ls -l : Liste les fichiers et répertoires dans le répertoire courant avec des détails tels que les permissions, le nombre de liens, le propriétaire, le groupe, la taille, la date et le nom.
| (pipe) :  Le symbole | redirige la sortie de ls -l vers awk.
awk 'NR % 2 == 1' : awk est un langage de traitement de texte qui permet de manipuler et analyser des fichiers ligne par ligne.
NR est une variable spéciale d'awk qui représente le numéro de la ligne en cours de traitement.
NR % 2 == 1 signifie que la condition est vraie pour les lignes dont le numéro est impair. Ainsi, awk imprimera seulement les lignes impaires, commençant par la première ligne.
