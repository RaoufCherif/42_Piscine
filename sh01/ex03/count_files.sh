find . -type f -o -type d | wc -l
echo Bonjour
echo "Fichiers réguliers : $(find . -type f | wc -l)"
echo "Répertoires : $(find . -type d | wc -l)"
