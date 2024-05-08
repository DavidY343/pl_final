#!/bin/bash

# Creamos el directorio outputs/ si no existe
mkdir -p outputs_frontend_error/
mkdir -p clisp_frontend_error/
# Iteramos por cada subdirectorio en tests/

for dir in frontend_error/*
do
    # Obtenemos el nombre del subdirectorio
    dir_name=$(basename "$dir")

    # Creamos un subdirectorio correspondiente en outputs/
    mkdir -p "outputs_frontend_error/$dir_name"
    mkdir -p "clisp_frontend_error/$dir_name"
    # Iteramos por cada archivo .c dentro del subdirectorio actual
    for file in "$dir"/*.c
    do
        # Obtenemos el nombre base del archivo, incluyendo la extensión .c
        base_name_c=$(basename "$file")

        # Eliminamos la extensión '.c'  
        base_name="${base_name_c%.*}"
        # Redirigimos la entrada desde el archivo .c y guardamos la salida
		echo EL archivo: $base_name debe tener un syntax error asociado
        ./trad4 < "$file" > "outputs_frontend_error/$dir_name/$base_name.l"
        clisp < "outputs_frontend_error/$dir_name/$base_name.l" > "clisp_frontend_error/$dir_name/${base_name}.out"
    done
done

echo "Todas las entradas han sido procesadas, las salidas del trad se han guardado en el directorio outputs_frontend_error/.  y las salidas del back se han guardado en el directorio clisp_frontend_error/."
