/* Archivos
-FILE*
-fopen 
-lectura o escritura
-fclose

FILE*fopen(nombre_archivo,especificacion)

"r": abre un archivo para lectura. EL archivo tiene que existir
"w": abre un archivo para escritura. Se crea el archivo si no existe o se sobreescribe
"a": abre un archivo de escritura al final del contenido.Si no existe el archivo lo crea
"r+": Abre un archivo de lectura y escritura. El archivo tiene que existir
"w+": Crea un archivo para lectura y escritura.Si no existe lo crea o se sobreescribe
"r+b":Abre un archivo en modo binario para su actualizacion(lectura y escritura)
"rb+":Abre un archivo en modo binario para su actualizacion(lectura y escritura)
"rb":Abre un archivo en modo binario para lectura

-feof
-rewind
*/