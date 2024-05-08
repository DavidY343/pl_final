#!/bin/bash

# Creamos el directorio outputs/ si no existe
mkdir -p trad_backend/
mkdir -p back_backend/
mkdir -p gforth_backend/
# Iteramos por cada subdirectorio en tests/

for dir in test_backend/*
do
    # Obtenemos el nombre del subdirectorio
    dir_name=$(basename "$dir")

    # Creamos un subdirectorio correspondiente en outputs/
    mkdir -p "trad_backend/$dir_name"
    mkdir -p "back_backend/$dir_name"
	mkdir -p "gforth_backend/$dir_name"
    # Iteramos por cada archivo .c dentro del subdirectorio actual
    for file in "$dir"/*.c
    do
        # Obtenemos el nombre base del archivo, incluyendo la extensión .c
        base_name_c=$(basename "$file")

        # Eliminamos la extensión '.c'  
        base_name="${base_name_c%.*}"
        # Redirigimos la entrada desde el archivo .c y guardamos la salida
        ./trad4 < "$file" > "trad_backend/$dir_name/$base_name.l"
		./back4 <  "trad_backend/$dir_name/$base_name.l"  > "back_backend/$dir_name/${base_name}.f"
		gforth < "back_backend/$dir_name/${base_name}.f" > "gforth_backend/$dir_name/${base_name}.out"
    done
done

echo "Todas las entradas han sido procesadas, las salidas del trad se han guardado en el directorio outputs_backend/.  y las salidas del back se han guardado en el directorio clisp_backend/."
