<h1 align="center"> Creemos nuestro propio printf </h1>

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
Se trata de replicar la famosa función printf.
Para más adelante usarla a medida, según los requerimientos del proyecto.

### Estado del proyecto
**:white_check_mark: Proyecto finalizdo :white_check_mark:**

### Mis herramientas

* Gestión del tiempo: [Toggl](https://chrome.google.com/webstore/detail/toggl-track-productivity/oejgccbfbmkkpaidnkphaiaecficdnfn)
* Controlador de versiones: Git + una carpeta extra en github.
* Diccionario de C: [C estándar](https://www.popularlibros.com/libro/programacion-c-estandar_169422) yo lo consegui en mi biblioteca de confianza.
* Libro-curso de c/c++: [curso de progamación c/c++](https://anayamultimedia.es/libro/manuales-imprescindibles/c-cmasmas-curso-de-programacion-miguel-angel-acera-garcia-9788441539372/) también de mi biblioteca de confianza.
* Documentación sobre printf: [UC3M](https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html), [los secretos de printf](https://algoritmos9511.gitlab.io/_downloads/1957137bc70fc4a237497050cfc49c7f/los-secretos-de-printf.pdf), [funcion prinf en c](https://www.pcresumen.com/menu-software/36-lenguajes-de-programacion/c/113-la-funcion-printf-en-c)
* Acerca de las variables variádicas: [Var_](https://barcelonageeks.com/funciones-variadicas-en-c/)

## Empecemos

### Prerequisitos

Conocer a fondo como se comporta printf, documentarnos acerca de cadena de formato y funciones variádicas.

### Mi paso a paso

> :warning:**WARNING**
> 
> Todo lo escrito es en base a mi experiencia, cada quien tiene su propio camino y tiempo. Espero que lo tomes como un complemento a tu formación y no como las sagradas escrituras.

Sin más preámbulos comencemos:

Primero me documente sobre el comportamiento de prinf, aqui un pequeño resumen:

| Entrada y salida de datos | Descripción |
| ------------- | ------------- |
| [ft_printf](URL)  | Imprime la salida formateada en la salida estándar de acuerdo con el especificador de formato en la cadena de entrada str. Siendo **str**: la cadena de entrada terminada en nulo que contiene el especificador de formato, y **…** – Argumentos opcionales que se formatearán según el especificador de formato. |


| Especificador de formato | Indican a las funciones variadicas el tipo de argumento con el que irá a trabajar. |
| ------------- | ------------- |
| %c | Imprime un solo carácter. |
| %s | Imprime una string (como se define por defecto en C). |
| %p | El puntero void * dado como argumento se imprime en formato hexadecimal. |
| %d | Imprime un número decimal (base 10). |
| %i | Imprime un entero en base 10. |
| %u | Imprime un número decimal (base 10) sin signo. |
| %x | Imprime un número hexadecimal (base 16) en minúsculas. |
| %X | Imprime un número hexadecimal (base 16) en mayúsculas. |
| %% | Para imprimir el símbolo del porcentaje. |

| Flags | Descripción |
| ------------- | ------------- |
| # | El valor se convierte a un formato alternativo si se define éste para la conversión seleccionada. Los formatos alternativos para las conversiones se describen junto con la conversión correspondiente. |
| + | Inicia siempre la salida con el signo + o − para los valores numéricos. Por defecto sólo aparece el signo − para los valores negativos. |

| Funciones variádicas | Descripción |
| ------------- | ------------- |
| va_start | Esto permite el acceso a los argumentos de la función variádica. |
| va_arg |Éste accede al siguiente argumento de la función variádica. |
| va_copy | Esto hace una copia de los argumentos de la función variádica. |
| va_end | Esto finaliza el recorrido de los argumentos de la función variádica. |

> [!NOTE]
> Gracias a las funciones variádicas vamos a poder crear nuestras reglas para elaborar este proyecto.

#### Reutilizar funciones de la libft

Recuerdas nuestra querida [libft](), es momento de reutilizar algunas funciones, mi recomendación personal es que intentemos ponerlas en un solo archivo c, recuerda que la norma establece que no debe haber más de 5 funciones por archivo.

#### Funciones recicladas:

| Funciones | Descripción | Arreglos | Usos |
| ------------- | ------------- | ------------ | ---------- |
| ft_putchar | Escribe un carácter | Aqui le quite el argumento fd  ya que de momento no lo necesito, y en el return sustitui el fd por 1 que es la salida estándar | Principalmenre lo use para que imprima el simbolo de % y para %c, luego es mi función auxiliar para las demas funciones|
| ft_putstr | Escribe una cadena de caracteres | También le quite lo de fd, le agregue una comprobación en caso de que sea nulo, inicie el contador a -1 para asegurarme de imprimir desde la posicion 0 de la cadena hasta el \0, | Para %s y como auxiliar de la funcion para %p |
| ft_putnbr | Escribe un número entero(int) | Agregue un puntero al prototipo, lo cual hace que retire el tipo de dato unsigned. Igual que con los demás elimine el fd sutituyendolo más adelante por mi puntero que me retornará el número en base 10. | Para %d y %i |

#### Funciones nuevas:

| Funciones | Descripción | Usos |
| ------------- | ------------- | ------------ |
| ft_putnbr_unsigned | Escribe un número entero sin signo | Tome de base el putnbr y su uso es para %u |
| ft_putnbr_hex | Escribe un número hexadecimal en base 16 | Tome de base ft_putnbr_unsigned, agregue un argumento en el que especifico los hexadecimales, y cambio la base a 16. Su uso es para %x y %X. | 
| ft_hex_pointer | Escribe un puntero en formato hexadecimal | Tome de base ft_putnbr_hex, al que le agregue el argumento "char c" para poder imprimir un "0x" antes del número, lo uso para %p |


