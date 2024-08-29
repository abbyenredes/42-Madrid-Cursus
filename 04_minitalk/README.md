<h1 align="center"> Tengamos una pequeña charla </h1>

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
        <li><a href="#prerrequisitos">Prerrequisitos</a></li>
        <li><a href="#Mi-paso-a-paso">Mi paso a paso</a></li>
      </ul>
    </li>
    <li><a href="#Pongamoslo-a-prueba">Pongamoslo a prueba</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
  </ol>
</details>

## Acerca del proyecto
Se trata de aprender a usar señales UNIX creando un pequeño programa de intercambio de datos (incluyendo unicode).

### Estado del proyecto
:construction: Proyecto en construcción :construction:

### Mis herramientas
* Todo sobre señales básicas: [Básico de señales](http://profesores.elo.utfsm.cl/~agv/elo330/2s09/lectures/signals.html).
  
* Aprende mas sobre signal: [función signal](https://www.ibm.com/docs/es/i/7.5?topic=functions-signal-handle-interrupt-signals).
  
* Sobre signation y sus multiples usos: [función signaction](https://pubs.opengroup.org/onlinepubs/009695399/functions/sigaction.html).

* Aprende a manejar las señales UNIX: [Manejo de señales](https://www.infor.uva.es/~fdiaz/so/doc/SO_PR04_20061115.pdf).
  
* Aprende sobre procesos y señales en 1 hora: [Master class señales UNIX](https://www.youtube.com/watch?v=K4zCwlJOflo).


### Empecemos
<table>
  <tr>
    <td>
<p> 
<img height="350" src="https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/04_minitalk/img/01%20streamer.png" align="right">¿Alguna vez estuviste en un live de algún creador de contenido u streamer? 
Si tu respuesta es afirmativa de seguro que le comentaste algo y aparecio en la pantalla de tu streamer. Algo así se siente realizar este proyecto, enviar un mensaje y que en menos de 1 milisegundo este en pantalla.
</p>
    </td>
  </tr>
</table>

#### Prerrequisitos
- [x] crear un programa de comunicación en la forma de un cliente y un servidor.
- [x] Proporcionar un Makefile para ejecutar dichos programas.
- [x] Usar nuestra [libft](https://github.com/abbyenredes/42-Madrid-Cursus/tree/main/00_libft).
- [x] Se permite usar las siguientes funciones:

| Funciones | Descripción |
| ------------- | ------------- |
| Write  | Función de escritura de la libreria unistd.h |
| [ft_printf](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/libft_2.0/ft_printf.c)  | Nuestra función de escritura |
| Signal | Permite a un programa elegir una de varias formas de manejar una señal de interrupción del sistema operativo o de la función raise(). `void (*signal (int signo, void (*func) (int)))(int);` `signo: es el nombre de la señal.` `func: puede ser la constante para usar la acción por defecto, o puede ser una función definida por el programa. El valor retornado es un puntero al manejador previamente instalado para esa señal.` |
| sigemptyset | Iniciar una máscara de señales vacía `int sigemptyset(sigset_t *set);` Los conjuntos de señales se utilizan para manipular grupos de señales utilizados por otras funciones (como sigprocmask()) o para examinar conjuntos de señales devueltos por otras funciones (como sigpending()) `Si tiene éxito, sigemptyset() devuelve 0.` |
| sigaddset  | Añadir una señal específica a una máscara. `int sigaddset(sigset_t *set, int signal);` Las aplicaciones deben llamar a sigemptyset() o sigfillset() al menos una vez para cada objeto de tipo sigset_t antes de cualquier otro uso de ese objeto. `Si la señal se agrega correctamente al conjunto de señales, sigaddset() devuelve 0. Si la señal no es compatible, sigaddset() devuelve -1 y establece errno en EINVAL.` |
| sigaction  | Capturar/manejar señales. `int sigaction(int signum, const struct sigaction *act, struct sigaction *oldact);` Una vez completado exitosamente, sigaction () devolverá 0; de lo contrario, se devolverá -1, se establecerá errno para indicar el error y no se instalará ninguna nueva función de captura de señales. |
| kill  | Enviar una señal. `int kill(pid_t pid, int sig);` Si la operación se completa correctamente, se devolverá 0. De lo contrario, se devolverá -1 y se establecerá errno para indicar el error. |
| getpid  | Función para obtener la identificación del proceso pertenece a la libreria unistd.h  |
| malloc | Función para reservar memoria  |
| Free  | Función para liberar memoria  |
| pause |  Función de la biblioteca estándar de C que hace que el proceso que realiza la llamada se suspenda hasta que se reciba una señal. El proceso permanece bloqueado hasta que se ejecuta un controlador de señal o se ignora la señal.  |
| sleep  | Función en la biblioteca estándar de C que hace que el proceso que llama se duerma durante una cantidad específica de segundos.  |
| usleep  | Función en la biblioteca estándar de C que hace que el proceso que realiza la llamada se suspenda durante una cantidad específica de microsegundos.  |
| exit | Función de la biblioteca estándar de C que finaliza el proceso de llamada inmediatamente. Toma un argumento entero que especifica el estado de salida del proceso. Un valor de 0 indica una finalización exitosa, mientras que los valores distintos de cero indican un error.  |

- [x] Luego de iniciar el servidor debe imprimir su PID.
- [ ] El servidor debe mostrar la cadena con bastante rapidez
- [ ] El servidor debería poder recibir cadenas de varios clientes en fila sin necesidad de reiniciarse.
- [ ] La comunicación entre cliente y servidor debe realizarse únicamente mediante señales UNIX.
- [ ] Sólo podemos utilizar estas dos señales: SIGUSR1 y SIGUSR2.

#### Mi paso a paso

> [!WARNING]
> 
> Todo lo escrito es en base a mi experiencia, cada quien tiene su propio camino y tiempo. Espero que lo tomes como un complemento a tu formación y no como las sagradas escrituras.

El reto del proyecto es programar un servidor que pueda recibir y mostrar mensajes de uno o varios clientes, utilizando solo dos señales UNIX. Debido a esta restricción, deberemos crear un sistema que pueda convertir los caracteres que deseamos enviar en una señal binaria, así como también poder reconvertir la señal en una string.

Vamos a comprender que son las señales y para que sirven:

Son una forma de comunicación entre procesos, un buen ejemplo de señales es el comportamiento de `ctrl + c` a la hora de detener un bucle infinito en la pantalla, su equivalente en UNIX es SIGSTP o señal 20.

Si ejecutamos el comando `kill -l` nos dará el listado de señales de UNIX (un total de 64).

Como ves sirve para detener o activar procesos, en nuestro caso queremos que el cliente envie un texto al servidor como si de un servidor de streaming se tratase y verlo reflejado en la pantalla. Pero para ello vamos a tener que convertir esa señal en binario.

### Enviando señales de humo

Este apartado lo he llamado así porque explicare gráficamente como se hará el cambio de char>ascii>binario y viceversa:

<table>
  <tr>
    <td>
<img height="850" src="https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/04_minitalk/img/Humo.png" align="center">
    </td>
  </tr>
</table>

En una terminal ejecutaremos el programa cliente, el cual debe recibir 2 parametros:

> PID:
> > Es un número único asignado a cada proceso en ejecución en un sistema operativo.
> > Para conocer el PID basta con teclear el comando `ps u`
> > ![show-PID](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/04_minitalk/img/signal.gif)
> >
> > Cada vez que ejecutes un proceso el PID cambiará, algo así como los cvv dinámicos.
> > También para conocer el PID podemos usar la función `getpid()`
> > ![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/04_minitalk/img/getpid.gif)
> >

> String
> > Un texto cualquiera que se vea reflejado en la pantalla del servidor ejemplo "Bayta"
> >

<div>
	<h2 align="left">Planteamiento</h2>
		<!--  (img) -->
	<div>
		<div style="flex: 1; min-width: 150px;">
		<img height="350" src="https://ih1.redbubble.net/image.5298226207.3692/raf,360x360,075,t,fafafa:ca443f4786.jpg" style="max-width: 100%; border-radius: 50%; object-fit: cover;" align="right"/>
	</div>
		<!-- doc (text) -->
	<div style="min-width: 150px; ">
		<p>
	Una vez que el cliente se ha comunicado con el servidor gracias a su PID. Emite el mensaje "Bayta", el mismo que se codifica en ASCII, lo que da como resultado ``66 97 121 116 97``.
      
Pero esto aun no es entendido por el servidor por lo cual debe pasar un segundo proceso que es volverse binario. Nuestro programa debe emitir el mensaje completo así que el servidor debe esperar el mensaje completo y no ponerse a emitir letra por letra.

Por eso usaremos la funcion `sigaction()` el cual capturará la señal completa, aun con la señal completa nuestro programa no debe devolver un binario, eso seria raro. Así que mientras releemos el binario y lo reconvertimos a ASCII usaremos `usleep()` para suspender momentaneamente el programa en lo que realizamos unos pequeños calculos de codificación, también nos ayudamos de `pause()` hasta volver a tener el mensaje "Bayta", con kill emitiremos el mensaje en el servidor, recuerda que no debe tardar demasiado. Bueno quien quiere un café?

Con esto concluimos el apartado señales de humo, para volcarnos realmente en lo que importa codificar.
</p>
	</div>
  </div>
</div>

### Servidor
- [x] Se lanzará primero y emitira su PID.
![](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/04_minitalk/img/getpid__.gif)
> [!NOTE]
> Aún soy novata en enlazar mi propia libreria, así que demomento usare el siguiente comando:
> ```
> gcc server.c libft/ft_printf.c -L./libft -lft -o server
> ```

- [x] Solo se puede usar señales SIGUSR1, SIGUSR2.
> SIGUSR1 y SIGUSR2
> > Es una señal definida por el usuario para ser usada en programas de aplicación.
> > En este caso lo usaremos como si de un bit se tratara, recuerdas el ejemplo de Bayta, la letra B corresponde al ASCII 66 y en binario es igual a 01000010. ¿Y si a SIGUSR1 le damos el valor de 1 y a SIGUSR2 el valor 0?
> > Nos queda algo así : `SIGUSR2 SIGUSR1 SIGUSR2 SIGUSR2 SIGUSR2 SIGUSR2 SIGUSR1 SIGUSR2` 8 bits en señales de UNIX.
> > Pero esto no queda así, te mostraré como operar a nivel binario:
> > ![binario](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/04_minitalk/img/calculo-Binario.png)

- [X] Mostrar la string rápido <=0,00001 seg.

Mi programa tarda uslepp(500) en mostrar el mensaje.

- [ ] Ser capaz de recibir distintos mensajes de otros clientes sin reiniciar.

### Cliente
- [X] Tomar como parámetros PID y string.

Para el PID usaremos nuestra famosa función [ft_atoi](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/00_libft/ft_atoi.c), que convierte carácteres en números, y otra función que nos convierta nuestra string a binaria, la mia la llamaré ft_binary_conversion (aplico un poco de clean code).
- [X] Comunicar la string pasada como parámetro al servidor.
## Pongamoslo a prueba

![](link)

## Roadmap

![](link)

# Good Luck
![](link)
