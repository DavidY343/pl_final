#!/bin/bash

# Creamos el directorio outputs/ si no existe
mkdir -p outputs/

# Iteramos por cada subdirectorio en tests/
for dir in tests/*
do
    # Obtenemos el nombre del subdirectorio
    dir_name=$(basename "$dir")

    # Creamos un subdirectorio correspondiente en outputs/
    mkdir -p "outputs/$dir_name"

    # Iteramos por cada archivo .c dentro del subdirectorio actual
    for file in "$dir"/*.c
    do
        # Obtenemos el nombre base del archivo, incluyendo la extensión .c
        base_name=$(basename "$file")

        # Redirigimos la entrada desde el archivo .c y guardamos la salida
        ./a.out < "$file" > "outputs/$dir_name/$base_name.out"
    done
done

echo "Todas las entradas han sido procesadas y las salidas se han guardado en el directorio outputs/."
