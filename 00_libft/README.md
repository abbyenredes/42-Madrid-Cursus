<h1 align="center"> Mi primera libreria en C </h1>

<details>
  <summary>¿Que voy a encontrarme?</summary>
  <ol>
    <li>
      <a href="#Acerca-del-proyecto">Acerca del proyecto</a>
      <ul>
        <li><a href="#estado-del-proyecto">Estado del proyecto</a></li>
        <li><a href="#Mis-herramientas">Mis herramientas</a></li>
      </ul>
    </li>
    <li>
      <a href="#Empecemos">Empecemos</a>
      <ul>
        <li><a href="#prerequisitos">Prerequisitos</a></li>
        <li><a href="#Mi-paso-a-paso">Mi paso a paso</a></li>
      </ul>
    </li>
    <li><a href="#Pongamoslo-a-prueba">Pongamoslo a prueba</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
  </ol>
</details>

## Acerca del proyecto
Se trata de replicar funciones tanto de manejo de cadenas como de control de memoria.
Para más adelante usarlas a medida, según los requerimientos del proyecto.

### Estado del proyecto
**:white_check_mark: Proyecto finalizdo :white_check_mark:**

### Mis herramientas

* Gestión del tiempo: [Toggl](https://chrome.google.com/webstore/detail/toggl-track-productivity/oejgccbfbmkkpaidnkphaiaecficdnfn)
* Controlador de versiones: Git + una carpeta extra en github.
* Diccionario de C: [C estándar](https://www.popularlibros.com/libro/programacion-c-estandar_169422) yo lo consegui en mi biblioteca de confianza.
* Canales recomendados para aprender Makefile [Makigas](https://www.youtube.com/watch?v=jI2n8jofuRg&ab_channel=makigas%3Aaprendeaprogramar), [WhileTrueThenDream](https://www.youtube.com/watch?v=0XlVyZAfQEM&t=137s&ab_channel=WhileTrueThenDream)
* Documentación y tutoriales de Makefile [TUTO](https://stackoverflowteams.com/c/42network/questions/1604/1605), [documentación oficial](https://www.gnu.org/software/make/manual/make.html), [mini make](http://informatica.uv.es/iiguia/HP/docs/mini_make.pdf), [wikipedia make](https://es.wikipedia.org/wiki/Make)
* Documentación de funciones: [memset](https://barcelonageeks.com/memset-en-c-con-ejemplos/), [bzero](https://www.delftstack.com/es/howto/c/bzero-in-c/), [memcpy](https://www.codingninjas.com/studio/library/memcpy-c), [memmove](https://www.tutorialspoint.com/c_standard_library/c_function_memmove.htm), [memchr](https://runebook.dev/es/docs/c/string/byte/memchr), [strchr](https://www.javatpoint.com/strchr-function-in-c), [calloc](https://www.tutorialspoint.com/c_standard_library/c_function_calloc.htm), [strmapi](https://velog.io/@jungjaedev/ftstrmapi)
* Documentacion de File descriptor: [fd](https://www.codequoi.com/en/handling-a-file-by-its-descriptor-in-c/)
* Bonus: [listas](https://personales.unican.es/corcuerp/progcomp/slides/Listas_Colas.pdf)(véase pág 21), [listas con imagenes](http://aniei.org.mx/paginas/uam/Descargas/Recursos/Tema_Listas_Enlazadas.pdf).


## Empecemos

### Prerequisitos
Si estas dando tus primeros pasos en el mundo del código te recomiendo que empieces a tener soltura no solamente en tu terminal, sino también en la lógica. Más adelante este escribiendo una guía sobre ello.
* Es hora de elegir: **Team Vim** o **Team Visual studio code**, escoge el que más comodo te haga sentir.
* Un cuaderno que no temas manchar, sera tu fiel compañero en esta travesía, ya sea como apuntes o para realizar algún diagrama. Si te gusta más una herramienta online, te recomiendo [evernote](https://evernote.com/es-es), [notion](https://www.notion.so/es-es), también usar github es un plus.
* No temas en pedir ayuda a tus compañeros y avanzar en piña(bolita), así obtienes un buen ritmo de trabajo y no procrastinas.

### Mi paso a paso

> [!WARNING]
> 
> Todo lo escrito es en base a mi experiencia, cada quien tiene su propio camino y tiempo. Espero que lo tomes como un complemento a tu formación y no como las sagradas escrituras.

Sin más preámbulos comencemos:
Mi primer paso fue generar el archivo [Makefile](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/Makefile), aqui te dejo un resumen que espero sea de ayuda:
![Makefile](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/El%20arte%20de%20hacer%20un%20Makefile.png)

##  Parte 1 - Funciones de libc

| Funciones de clasificación de carácteres | Descripción |
| ------------- | ------------- |
| [ft_isalpha](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isalpha.c)  | Comprueba si existe algún carácter *true* tanto para máyusculas(65-90) como para minúsculas(97-122) |
| [ft_isdigit](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isdigit.c)  | Comprueba si existe algún carácter de dígito decimal(48-57) |
| [ft_isalnum](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isalnum.c)  | Comprueba si existe algún carácter para el que isalpha o isdigit sea *true* |
| [ft_isascii](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isascii.c)  | Comprueba si existe algún carácter *true* en el alfabeto ascii(0-127) |
| [ft_isprint](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isprint.c)  | Comprueba si existe algún carácter de impresión, incluyendo el espacio(' ')(32-126) |

> [!Note]
> Para estas funciones me he ayudado de una tabla ascii en el formato decimal también puedes poner este comando en tu consola ```man ascii```


| Funciones de asignación de mayúsculas y minúsculas | Descripción |
| ------------- | ------------- |
| [ft_toupper](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_toupper.c)  | Convierte una letra minúscula en la correspondiente letra mayúscula |
| [ft_tolower](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_tolower.c)  | Convierte una letra mayúscula en la correspondiente letra minúscula |

| Funciones varias | Descripción |
| ------------- | ------------- |
| [ft_strlen](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strlen.c)  | Recorre una cadena y devuelve su número de carácteres|
| [ft_memset](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_memset.c)  | Se usa para llenar un bloque de memoria con un valor en particular, toma tres argumentos: La dirección de la memoria, byte constante para llenar la memoria y el número de bytes a sobrescribir |
| [ft_bzero](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_bzero.c)  | Pone a 0 n bytes en una región de la memoria, sirve sobretodo para borrarla de los valores basura. A veces, hay struct que contiene múltiples valores de máscara de bits que necesitan ser puestos a cero explícitamente antes de la inicialización de sus miembros. No retorna ningún valor|


| Funciones de copiado | Descripción |
| ------------- | ------------- |
| [ft_memcpy](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_memcpy.c)  | Copia un número específico de bytes de una ubicación de memoria a otra, o lo que es lo mismo, la memoria de origen(src) se copia en la memoria de destino(dst). Se utiliza principalmente para copiar datos de una matriz a otra, esta función nos devuelve el valor de la memoria de destino |
| [ft_memmove](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_memmove.c)  | Copia n carácteres de la memoria de origen(src) a la memoria de destino(dst) . Sin embargo, se asegura de que no estén superpuestos. Por esta razón, si src[] >= dst[] lo copia en orden creciente, pero si src[] < dst[] lo copia en orden descendente, ambas formas devuelven el valor de dst |
| [ft_strlcpy](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strlcpy.c)  | Copia el contenido de la <cadena_fuente> en la <variable_destino>, garantizando que las cadenas están terminada con un NULL y así evitando el desbordamiento de búfer, devuelve el número de bytes copiados en la variable destino. |


| Funciones de concatenación | Descripción |
| ------------- | ------------- |
| [ft_strlcat](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strlcat.c)  | Concatena la <cadena_fuente> en la <variable_destino>, estableciendo la longitud de la cadena de destino, que efectivamente es igual a su tamaño de búfer, y así evitando su desbordamiento, devuelve la suma total de la variable dst y src agregando un byte extra para el carácter nulo|


| Funciones de comparación| Descripción |
| ------------- | ------------- |
| [ft_memcmp](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_memcmp.c)  | Compara los bloques de memoria byte a byte hasta n bytes o hasta encontrar una diferencia. Devolviendo un int >= 0 si objeto s1 > s2/ también al contrario int < 0 si objeto s1 < s2 (Puede usarse para comparar cualquier tipo de datos en la memoria.) |
| [ft_strncmp](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strncmp.c)  | Compara las cadenas de caracteres carácter a carácter hasta n carácteres o hasta encontrar una diferencia. También considera el carácter nulo '\0' como parte de la comparación.. Devolviendo un int >= 0 si objeto terminado en NULL s1 > s2/ también al contrario int < 0 si objeto terminado en NULL s1 < s2 ( es útil para ordenar o buscar cadenas.) |


| Funciones de búsqueda | Descripción |
| ------------- | ------------- |
| [ft_memchr](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_memchr.c)  | Se utiliza para buscar un byte específico en un bloque de memoria. La función recorre los bytes en la memoria desde el principio hasta un máximo de n bytes o hasta que encuentre el byte c, devolviendo un puntero a la ubicación donde lo encontró en la memoria. |
| [ft_strchr](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strchr.c)  | Busca la primera aparición de un carácter específico dentro de la cadena original., recorriendo la string desde el **principio**. Devuelve NULL si no la contiene, o un puntero a la posición en la que se encuentra |
| [ft_strrchr](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strrchr.c)  | Busca cierta letra dentro de una cadena de texto, recorriendo la string desde la **última** aparición. Devuelve NULL si no la contiene, o un puntero a la posición en la que se encuentra |
| [ft_strnstr](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strnstr.c)  | Busca una subcadena (needle) dentro de una cadena más larga (haystack) hasta un máximo de len carácteres. Si encuentra una coincidencia completa, devuelve un puntero a esa posición en haystack; de lo contrario, devuelve NULL. Esta función es útil para buscar subcadenas en una cadena más grande con un límite máximo de búsqueda. |


| Funciones de conversión númerica | Descripción |
| ------------- | ------------- |
| [ft_atoi](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_atoi.c)  | Convierte una serie de cáracteres en un valor entero. |

| Funciones de administración de memoria | Descripción |
| ------------- | ------------- |
| [ft_calloc](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_calloc.c)  | Asigna la memoria solicitada y devuelve un puntero a ella. La diferencia entre malloc y calloc es que malloc no establece la memoria en cero, mientras que calloc establece la memoria asignada en cero. Parámetros(nitems = este es el número de elementos que se asignarán. size = este es el tamaño de los elementos.)|
| [ft_strdup](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strdup.c)  | Permite crear una copia exacta de una cadena de caracteres existente, asignando memoria dinámicamente Esto es útil cuando se desea tener una versión independiente de una cadena para modificarla sin afectar la original |


##  Parte 2 - Funciones adicionales

| Funciones de entrada/salida de carácteres | Descripción |
| ------------- | ------------- |
| [ft_putchar_fd](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_putchar_fd.c)  | Escribe un carácter en el fd especificado. |
| [ft_putstr_fd](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_putstr_fd.c)  | Escribe una cadena en el fd especificado. |
| [ft_putendl_fd](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_putendl_fd.c)  | Escribe una cadena seguida de un salto de linea(\n) en el fd especificado. |
| [ft_putnbr_fd](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_putnbr_fd.c)  | Escribe un número entero(int) en el fd especificado. |


> [!Note]
> fd = file descriptor(el descriptor de archivo donde se escribirá la salida), sirve para escribir entre procesos. Nos ayuda a manejarnos por salidas y
> entradas. Si quieres ampliar esta información visita este [enlace](https://www.codequoi.com/en/handling-a-file-by-its-descriptor-in-c/).


| Funciones de cadena | Descripción |
| ------------- | ------------- |
| [ft_substr](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_substr.c)  | Devuelve un segmento de datos de una cadena de origen más extensa (s: un puntero a la cadena de origen. start: el índice inicial de la subcadena en la cadena de origen. len: la longitud máxima de la subcadena.) |
| [ft_split](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_split.c)  | Crea una subcadena a partir de una cadena determinada. Dividiendo una cadena en una matriz de subcadenas según un carácter delimitador. (s: un puntero a la cadena que se va a dividir. c: el carácter delimitador utilizado para dividir la cadena.) Devuelve una matriz de cadenas asignada dinámicamente que representa las subcadenas divididas. |
| [ft_strtrim](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strtrim.c)  | Recorta los caracteres iniciales y finales de una cadena en función de un conjunto de caracteres determinado. (s1: un puntero a la cadena que se va a recortar. set: puntero al conjunto de caracteres que se van a recortar), se devuelve un puntero a la cadena recortada.|

| Funciones de concatenación de cadenas | Descripción |
| ------------- | ------------- |
| [ft_strjoin](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strjoin.c)  | Concatena dos cadenas en una nueva cadena. Retornando esta nueva cadena.|

| Funciones de conversión de cadenas | Descripción |
| ------------- | ------------- |
| [ft_itoa](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_itoa.c)  | Convierte un número entero en una representación de cadena. |

| Punteros a función | Descripción |
| ------------- | ------------- |
| [ft_striteri](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_striteri.c)  | Aplica una función f a cada carácter de la cadena s, junto con su índice correspondiente. Comprueba si tanto s como f son punteros válidos antes de continuar. Inicializa un contador i para realizar un seguimiento del índice e itera sobre los caracteres de la cadena s, aplicando la función f con el índice y carácter actuales |
| [ft_strmapi](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_strmapi.c)  | Aplica una función f a cada carácter de la cadena s, generando una nueva cadena con los caracteres modificados. Primero determina la longitud de la cadena de entrada y asigna memoria para la nueva cadena. Luego, itera sobre los caracteres de la cadena de entrada, aplicando la función f y almacenando el resultado en la nueva cadena. Se devuelve la cadena modificada resultante. | 

> [!Note]
> punteros a función en este [link](https://jraleman.medium.com/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea)

## Parte bonus

| Listas enlazadas | Descripción |
| ------------- | ------------- |
| [ft_lstnew](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstnew.c)  | Inserta un nodo con dato x en la lista, pudiendo realizarse esta inserción al principio o final de la lista o bien en orden. |
| [ft_lstadd_front](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstadd_front.c)  | Inserta un nodo con dato x al principio de la lista. |
| [ft_lstsize](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstsize.c)  | Cuenta el número de nodos de una lista. |
| [ft_lstlast](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstlast.c)  | Devuelve el último nodo de la lista. |
| [ft_lstadd_back](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstadd_back.c)  | Inserta un nodo con dato x al final de la lista. |
| [ft_lstdelone](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstdelone.c)  | Elimina un único nodo 'lst' de la lista vinculada y libera su contenido usando la función 'del', luego desasigna la memoria para el nodo. |
| [ft_lstclear](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstclear.c)  | Borra toda la lista enlazada a la que apunta 'lst' y desasigna memoria para cada nodo. |
| [ft_lstiter](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstiter.c)  | Itera a través de una lista vinculada 'lst' y aplica la función 'f' al contenido de cada nodo. |
| [ft_lstmap](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_lstmap.c)  | Crea una nueva lista vinculada aplicando una función determinada a cada elemento de una lista vinculada existente. Los elementos transformados resultantes se utilizan para formar una nueva lista. |

## Pongamoslo a prueba

### parte de test

![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/test.gif)

### Comprobamos que Makefile cumple los requerimientos

![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/Makefile.gif)

### Compilando algunas funciones

> [!Note]
> para compilarlo desde otra carpeta uso ```gcc -I ../ main.c -L ../ -lft```
> si es en la misma carpeta ```gcc main.c -L. -lft```

#### strrchr
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/strrchr.gif)

#### strdup
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/strdup.gif)

#### substr
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/substr.gif)

#### strmapi
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/strmapi.gif)

#### split
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/split.gif)

#### lstadd_front
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/lstadd_front.gif)

## Roadmap
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/1.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/2.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/3.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/3.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/4.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/5.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/6.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/7.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/8.jpg)
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/docs/9.jpg)

# Buena suerte con tu primera libreria

![](https://media0.giphy.com/media/Ls9BbFKwDUWxpjbS5l/giphy.gif?cid=ecf05e47a5iyjn37txxbes6m2nmsqbq44xy335jbppdczzag&ep=v1_gifs_search&rid=giphy.gif&ct=g)

