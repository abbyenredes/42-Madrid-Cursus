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


## Empecemos

### Prerequisitos
Si estas dando tus primeros pasos en el mundo del código te recomiendo que empieces a tener soltura no solamente en tu terminal, sino también en la lógica. Más adelante este escribiendo una guia sobre ello.
* Es hora de elegir **Team Vim** o **Team Visual studio code** escoge el que más comodo te haga sentir.
* Un cuaderno que no temas manchar, sera tu fiel compañero en esta travesia, ya sea como apuntes o para realizar algún diagrama. Si te gusta más una herramienta online, te recomiendo [evernote](https://evernote.com/es-es), [notion](https://www.notion.so/es-es), también usar github es un plus.
* No temas en pedir ayuda a tus compañeros y avanzar en piña(bolita), así obtienes un buen ritmo de trabajo y no procrastinas.

### Mi paso a paso

> ⚠️**WARNING**
> 
> Todo lo escrito es en base a mi experiencia, cada quien tiene su propio camino y tiempo. Espero que lo tomes como un complemento a tu formación y no como las sagradas escrituras.

Sin más preámbulos comencemos:
Mi primer paso fue generar el archivo [Makefile](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/Makefile), aqui te dejo un resumen que espero sea de ayuda:
![Makefile](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft/docs/El%20arte%20de%20hacer%20un%20Makefile.png)

Empecemos con las funciones:

| Funciones de clasificación de carácteres | Descripción |
| ------------- | ------------- |
| [ft_isalpha](url)  | Comprueba si existe algún carácter *true* tanto para máyusculas(65-90) como para minúsculas(97-122) |
| [ft_isdigit](url)  | Comprueba si existe algún carácter de dígito decimal(48-57) |
| [ft_isalnum](url)  | Comprueba si existe algún carácter para el que isalpha o isdigit sea *true* |
| [ft_isascii](url)  | Comprueba si existe algún carácter *true* en el alfabeto ascii(0-127) |
| [ft_isprint](url)  | Comprueba si existe algún carácter de impresión, incluyendo el espacio(' ')(32-126) |

> Nota:
> Para estas funciones me he ayudado de una tabla ascii en el formato decimal también puedes poner este comando en tu consola ```man ascii```


| Funciones de asignación de mayúsculas y minúsculas | Descripción |
| ------------- | ------------- |
| [ft_toupper](url)  | Convierte una letra minúscula en la correspondiente letra mayúscula |
| [ft_tolower](url)  | Convierte una letra mayúscula en la correspondiente letra minúscula |
