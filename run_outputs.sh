#!/bin/bash

# Creamos el directorio resultados/ si no existe
mkdir -p resultados/

# Iteramos por cada subdirectorio en outputs/
for dir in outputs/*
do
    # Obtenemos el nombre del subdirectorio
    dir_name=$(basename "$dir")

    # Creamos un subdirectorio correspondiente en resultados/
    mkdir -p "resultados/$dir_name"

    # Iteramos por cada archivo .out dentro del subdirectorio actual
    for file in "$dir"/*.out
    do
        # Obtenemos el nombre base del archivo, incluyendo la extensión .out
        base_name=$(basename "$file")

        # Ejecutamos clisp con el archivo de entrada y guardamos la salida
        clisp < "$file" > "resultados/$dir_name/${base_name}.result"
    done
done

echo "Todos los archivos Lisp han sido procesados y las salidas se han guardado en el directorio resultados/."
