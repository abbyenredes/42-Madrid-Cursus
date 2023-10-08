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
    <li><a href="#licencia">Licencia</a></li>
  </ol>
</details>

## Acerca del proyecto
Se trata de replicar funciones tanto de manejo de cadenas como de control de memoria.
Para más adelante usarlas a medida, según los requerimientos del proyecto.

### Estado del proyecto
**:construction: Proyecto en construcción :construction:**

### Mis herramientas

* Gestión del tiempo: [Toggl](https://chrome.google.com/webstore/detail/toggl-track-productivity/oejgccbfbmkkpaidnkphaiaecficdnfn)
* Controlador de versiones: Git + una carpeta extra en github.
* Diccionario de C: [C estándar](https://www.popularlibros.com/libro/programacion-c-estandar_169422) yo lo consegui en mi biblioteca de confianza.
* Canales recomendados para aprender Makefile [Makigas](https://www.youtube.com/watch?v=jI2n8jofuRg&ab_channel=makigas%3Aaprendeaprogramar), [WhileTrueThenDream](https://www.youtube.com/watch?v=0XlVyZAfQEM&t=137s&ab_channel=WhileTrueThenDream)
* Documentación y tutoriales de Makefile [TUTO](https://stackoverflowteams.com/c/42network/questions/1604/1605), [documentación oficial](https://www.gnu.org/software/make/manual/make.html), [mini make](http://informatica.uv.es/iiguia/HP/docs/mini_make.pdf), [wikipedia make](https://es.wikipedia.org/wiki/Make)
* Documentación de funciones: [memset](https://barcelonageeks.com/memset-en-c-con-ejemplos/), [bzero](https://www.delftstack.com/es/howto/c/bzero-in-c/), [memcpy](https://www.codingninjas.com/studio/library/memcpy-c), [memmove](https://www.tutorialspoint.com/c_standard_library/c_function_memmove.htm), [memchr](https://runebook.dev/es/docs/c/string/byte/memchr), [strchr](https://www.javatpoint.com/strchr-function-in-c), 


## Empecemos

### Prerequisitos
Si estas dando tus primeros pasos en el mundo del código te recomiendo que empieces a tener soltura no solamente en tu terminal, sino también en la lógica. Más adelante este escribiendo una guía sobre ello.
* Es hora de elegir: **Team Vim** o **Team Visual studio code**, escoge el que más comodo te haga sentir.
* Un cuaderno que no temas manchar, sera tu fiel compañero en esta travesía, ya sea como apuntes o para realizar algún diagrama. Si te gusta más una herramienta online, te recomiendo [evernote](https://evernote.com/es-es), [notion](https://www.notion.so/es-es), también usar github es un plus.
* No temas en pedir ayuda a tus compañeros y avanzar en piña(bolita), así obtienes un buen ritmo de trabajo y no procrastinas.

### Mi paso a paso

> ⚠️**WARNING**
> 
> Todo lo escrito es en base a mi experiencia, cada quien tiene su propio camino y tiempo. Espero que lo tomes como un complemento a tu formación y no como las sagradas escrituras.

Sin más preámbulos comencemos:
Mi primer paso fue generar el archivo [Makefile](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/Makefile), aqui te dejo un resumen que espero sea de ayuda:
![Makefile](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/docs/El%20arte%20de%20hacer%20un%20Makefile.png)

##  Parte 1 - Funciones de libc

| Funciones de clasificación de carácteres | Descripción |
| ------------- | ------------- |
| [ft_isalpha](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isalpha.c)  | Comprueba si existe algún carácter *true* tanto para máyusculas(65-90) como para minúsculas(97-122) |
| [ft_isdigit](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isdigit.c)  | Comprueba si existe algún carácter de dígito decimal(48-57) |
| [ft_isalnum](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isalnum.c)  | Comprueba si existe algún carácter para el que isalpha o isdigit sea *true* |
| [ft_isascii](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isascii.c)  | Comprueba si existe algún carácter *true* en el alfabeto ascii(0-127) |
| [ft_isprint](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_isprint.c)  | Comprueba si existe algún carácter de impresión, incluyendo el espacio(' ')(32-126) |

> Nota:
> Para estas funciones me he ayudado de una tabla ascii en el formato decimal también puedes poner este comando en tu consola ```man ascii```


| Funciones de asignación de mayúsculas y minúsculas | Descripción |
| ------------- | ------------- |
| [ft_toupper](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_toupper.c)  | Convierte una letra minúscula en la correspondiente letra mayúscula |
| [ft_tolower](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/ft_tolower.c)  | Convierte una letra mayúscula en la correspondiente letra minúscula |

| Funciones varias | Descripción |
| ------------- | ------------- |
| [ft_strlen](url)  | Recorre una cadena y devuelve su número de carácteres|
| [ft_memset](url)  | Se usa para llenar un bloque de memoria con un valor en particular, toma tres argumentos: La dirección de la memoria, byte constante para llenar la memoria y el número de bytes a sobrescribir |
| [ft_bzero](url)  | Pone a 0 n bytes en una región de la memoria, sirve sobretodo para borrarla de los valores basura. A veces, hay struct que contiene múltiples valores de máscara de bits que necesitan ser puestos a cero explícitamente antes de la inicialización de sus miembros. No retorna ningún valor|


| Funciones de copiado | Descripción |
| ------------- | ------------- |
| [ft_memcpy](url)  | Copia un número específico de bytes de una ubicación de memoria a otra, o lo que es lo mismo, la memoria de origen(src) se copia en la memoria de destino(dst). Se utiliza principalmente para copiar datos de una matriz a otra, esta función nos devuelve el valor de la memoria de destino |
| [ft_memmove](url)  | Copia n carácteres de la memoria de origen(src) a la memoria de destino(dst) . Sin embargo, se asegura de que no estén superpuestos. Por esta razón, si src[] >= dst[] lo copia en orden creciente, pero si src[] < dst[] lo copia en orden descendente, ambas formas devuelven el valor de dst |
| [ft_strlcpy](url)  | Copia el contenido de la <cadena_fuente> en la <variable_destino>, garantizando que las cadenas están terminada con un NULL y así evitando el desbordamiento de búfer, devuelve el número de bytes copiados en la variable destino. |


| Funciones de concatenación | Descripción |
| ------------- | ------------- |
| [ft_strlcat](url)  | Concatena la <cadena_fuente> en la <variable_destino>, estableciendo la longitud de la cadena de destino, que efectivamente es igual a su tamaño de búfer, y así evitando su desbordamiento, devuelve la suma total de la variable dst y src agregando un byte extra para el carácter nulo|


| Funciones de comparación| Descripción |
| ------------- | ------------- |
| [ft_memcmp](url)  | Compara los bloques de memoria byte a byte hasta n bytes o hasta encontrar una diferencia. Devolviendo un int >= 0 si objeto s1 > s2/ también al contrario int < 0 si objeto s1 < s2 (Puede usarse para comparar cualquier tipo de datos en la memoria.) |
| [ft_strncmp](url)  | Compara las cadenas de caracteres carácter a carácter hasta n carácteres o hasta encontrar una diferencia. También considera el carácter nulo '\0' como parte de la comparación.. Devolviendo un int >= 0 si objeto terminado en NULL s1 > s2/ también al contrario int < 0 si objeto terminado en NULL s1 < s2 ( es útil para ordenar o buscar cadenas.) |


| Funciones de búsqueda | Descripción |
| ------------- | ------------- |
| [ft_memchr](url)  | Se utiliza para buscar un byte específico en un bloque de memoria. La función recorre los bytes en la memoria desde el principio hasta un máximo de n bytes o hasta que encuentre el byte c, devolviendo un puntero a la ubicación donde lo encontró en la memoria. |
| [ft_strchr](url)  | Busca la primera aparición de un carácter específico dentro de la cadena original., recorriendo la string desde el **principio**. Devuelve NULL si no la contiene, o un puntero a la posición en la que se encuentra |
| [ft_strrchr](url)  | Busca cierta letra dentro de una cadena de texto, recorriendo la string desde la **última** aparición. Devuelve NULL si no la contiene, o un puntero a la posición en la que se encuentra |
| [ft_strnstr](url)  | Busca una subcadena (needle) dentro de una cadena más larga (haystack) hasta un máximo de len carácteres. Si encuentra una coincidencia completa, devuelve un puntero a esa posición en haystack; de lo contrario, devuelve NULL. Esta función es útil para buscar subcadenas en una cadena más grande con un límite máximo de búsqueda. |


| Funciones de conversión númerica | Descripción |
| ------------- | ------------- |
| [ft_atoi](url)  | Convierte una serie de cáracteres en un valor entero. |

| Funciones de administración de memoria | Descripción |
| ------------- | ------------- |
| [ft_calloc](url)  | C |
| [ft_strdup](url)  | Permite crear una copia exacta de una cadena de caracteres existente,
 asignando memoria dinámicamente Esto es útil cuando se desea tener una versión
 independiente de una cadena para modificarla sin afectar la original |




