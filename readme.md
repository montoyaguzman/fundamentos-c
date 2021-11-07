# Compilar

Es el proceso de validar la sintaxis mediante el interprete (compilador)
y obtener un archivo ejecutable a partir del codigo fuente.

# Compile with gcc

gcc -o execFileName srcFile.c

# Compile with clang

clang -o execFileName srcFile.c

# Run

./execFileName

# Keywords de C

| Tipo     |        |          |          |
| -------- | ------ | -------- | -------- |
| auto     | double | int      | struct   |
| break    | else   | long     | switch   |
| case     | enum   | register | typedef  |
| char     | extern | return   | union    |
| continue | for    | signed   | void     |
| do       | if     | static   | while    |
| default  | goto   | sizeof   | volatile |
| const    | float  | short    | unsigned |

# Longitudes de datos

| Tipo          | Tamaño   | Rango                          |
| ------------- | -------- | ------------------------------ |
| char          | 1 byte   | -128 a 127                     |
| unsigned char | 1 byte   | -0 a 255                       |
| signed char   | 1 byte   | -128 a 127                     |
| int           | 2 bytes  | -2,147,483,648 a 2,147,483,648 |
| unsigned int  | 2 bytes  | 0 a 4,294,967,296              |
| signed int    | 2 bytes  | -2,147,483,648 a 2,147,483,648 |
| short         | 2 bytes  | -32,768 a 32,767               |
| float         | 4 bytes  | -3.4E-38 a 3.4E+38             |
| long          | 4 bytes  | -2,147,483,648 a 2,147,483,647 |
| double        | 8 bytes  | 2.3E-308 a 1.7E+308            |
| long double   | 16 bytes | 3.4E-4932 to 1.1E+4932         |
