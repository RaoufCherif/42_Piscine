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



exit le fichier et changer les permission afin que le fichier soit executable.

pour executer le script tapper la commande suivante : 
`bash nomDuFichier` 
