PRUEBAS TRAD
Las pruebas relacionadas con nuestro frontend se encuentran en la carpeta
"test_frontend". Para ejecutarlas, utilizamos el comando "make test_frontend" del
Makefile, el cual llama al script "run_frontend.sh". Las salidas de estos archivos se
almacenan en el directorio "outputs_frontend/". Las salidas de CLISP se guardan en el
directorio "clisp_frontend/", mientras que las salidas del código C se almacenan en
"cout_frontend/".

Contamos con pruebas básicas para identificar errores comunes, pero no están
completamente desarrolladas porque Juan consideró que no eran pruebas de calidad. Por
lo tanto, no continuamos con más pruebas de error. Sin embargo, estas pruebas aún
pueden ejecutarse. Se encuentran en la carpeta frontend_error y se ejecutan con el
comando make "test_frontend_error" del Makefile, el cual llama al script 
"run_frontend_error.sh". Todas las salidas se almacenan en "outputs_frontend_error/", y
las salidas de Clisp se guardan en "clisp_frontend_error/".

PRUEBAS BACK
Para las pruebas de backend, hemos adaptado todas las pruebas anteriores para que
funcionen correctamente. Esto implicó hacer algunos parámetros globales en lugar de
pasarlos por argumento, resolviendo limitaciones no implementadas en el frontend.
Las pruebas relacionadas con nuestro backend se encuentran en la carpeta
"test_backend". Se ejecutan con el comando "make test_backend" del Makefile, que llama
al script "run_backend.sh". Los resultados del frontend se almacenan en "trad_backend/",
las salidas del backend en "back_backend/", las salidas de GForth en "gforth_backend/",
y las salidas de código C se guardan en "cout_backend/". Para simplificar este comentario,
omitiremos las salidas de "trad_backend/" y "back_backend/".

