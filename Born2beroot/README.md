<h1 align="center"> Mi primera maquina virtual </h1>

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

Ser capaz de configurar nuestro propio sistema operativo utilizando reglas estrictas, además de aprender a usar maquinas virtules que pueden ayudarnos más adelante
a poder crear entornos para realizar tareas de simulación o hacking ético.

### Estado del proyecto
**:construction: Proyecto en construcción :construction:**

### Mis herramientas

* Gestión del tiempo: [Toggl](https://chrome.google.com/webstore/detail/toggl-track-productivity/oejgccbfbmkkpaidnkphaiaecficdnfn)
* Controlador de versiones: Git + una carpeta extra en github.
* Libro de mi biblioteca de confianza [Debian GNU/Linux](https://www.llibrerialagralla.cat/llibre-tecnic/454097-debian-gnulinux-guia-practica.html)
* Documentación oficial : [Debian](https://www.debian.org/doc/manuals/debian-reference/debian-reference.es.pdf)
* Mini tutorial para cambiar las contraseñas [Root](https://www.hostinger.es/tutoriales/cambiar-contrasena-linux) y [User](https://nordpass.com/es/blog/how-to-change-password-linux/)

## Empecemos

### Prerequisitos
* Elegir sistema operativo **Devian** **Rocky**
* Crear al menos 2 particiones cifradas usando LVM.
* Crear un usuario y asignárselo a un grupo.
* El servicio SSH se ejecutará unicamente en el puerto 4242.
* configurar tu sistema operativo con el firewall UFW, (o firewalld en Rocky) dejando solamente el puerto 4242 abierto.
* El hostname de tu máquina virtual debe ser tu login terminado en 42, y debera poder editarse durante la evaluación.
* Implementar una política de contraseñas fuerte.
* Instalar y configurar sudo siguiendo reglas estrictas.
* Crear un script sencillo llamado monitoring.sh. Debe estar desarrollado en bash.

### Mi paso a paso

> [!WARNING]
> 
> Todo lo escrito es en base a mi experiencia, cada quien tiene su propio camino y tiempo. Espero que lo tomes como un complemento a tu formación y no como las sagradas escrituras.

Sin más preámbulos comencemos:

Un grandioso compi ya realizo un tutorial sobre esto, así que espero que te sea de ayuda >> [tutorial](https://github.com/gemartin99/Born2beroot-Tutorial)

> [!NOTE]
> Si vas a realizar el bonus debes configurar tus particiones desde el principio, si no te va a tocar rehacer el proyecto.


![MV](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/doc/MV.jpg)

Para tener un mapa mas claro de este proyecto decidi realizar esta pequeña ilustración, vamos a profundizar en ella:

Empezecemos por el concepto de maquina virtual: Simular mediante software algún recurso tecnologíco fisico, en pocas palabras es como tener varios ordenadores dentro de nuestro equipo. Son muy utiles para la creación y pruebas de software, también lo usamos para aislar un software y allí realizar pruebas de malware y procesos de ciberseguridad. Y mi parte favorita la de optimización de recursos y aquí te contaré una pequeña anecdota, cuando estuve aprendiendo C# el hardware de allí no era muy bueno y usamos virtual box para poder crear programas sin que nuestra ram real explotara.

Una vez comprendido el que y para que, vamos con los tipos:
> Tipo 1: usados para cloud, su gran diferencia es que el hipervisor esta instalado directamente en la capa del kernel, sigue leyendo y lo comprenderas.
>> Vamos con la imagen, mi ejemplo es con un edificio, así lo comprendí mas facil.
>> 
>> 1º tenemos nuestro hardware y el cimiento de todo, también llamado equipo fisico-ordenador.
>> 
>> 2º todo edificio tiene un cuarto de contadores y caldera, este seria nuestro kernel(el motor que hace que funcione nuestro ordenador).
>> 
>> 3º el hipervisor es el administrador de ese edificio, él que vela por que todo funcione como debe y el que cuida que ningun programa use más recursos de lo debido.
>>
>> 4º Y aquí ya estamos dentro de nuestra maquina virtual, imaginala como un piso-departamento.
>>
>> 5º todo piso tiene su propio calentador y contador, este es el kernel de nuestra maquina virtual.
>> 
>> 6º las paredes y pilares son nuestro sistema operativo, ya sabes IOS, Linux, Windows xp...
>> 
>> 7º las habitaciones son los programas y librerias que usaremos en nuestra maquina virtual.
>>

> Tipo 2: usado para entornos de prueba y desarrollo de software (este es el que usaremos en este proyecto), el hipervisor se instala sobre el sistema operativo.
>>
>> 1º tenemos nuestro hardware como ese gran cimiento.
>>
>> 2º nuestro cuarto de contadores como ese kernel que hace que nuestro edificio tenga los servicios basicos.
>>
>> 3º la fachada del edificio también conocido como sistema operativo.
>>
>> 4º nuestro hipervisor que gestiona los recursos.
>>
>> 5º el kernel como la caldera o calentador individual de cada vivienda.
>>
>> 6º las paredes de esas viviendas como el sistema operativo que vamos a utilizar en nuestra maquina virtual, en el caso de este proyecto nuestro querido Debian.
>>
>> 7º las habitaciones como los programas y librerias.
>>

> Contenedores (este tema lo tratare mas adelante cuando llegue a Docker, ahora mismo no es relevante).

#### Elige el sistema operativo de tu maquina virtual
Nos proponen 2 sistemas operativos: Debian y Rocky
![devian vs rocky](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/doc/devian%20vs%20rocky.jpg)

Como no tengo experiencia en administración de sistemas me voy por la vieja confiable y uso Devian en este proyecto. Recuerda descargar la última versión estable de este sistema operativo.

Después de esto vamos a aprender acerca de AppArmor y de paso conoceremos un poquito de SELinux y una comparativa de ambos.
AppArmor se podria decir que es el conserje o portero de nuestra maquina virtual, que controla que zonas comunes pueden usar los propietarios y visitante y cuales no(en este caso los programas serian esos visitantes), SELinux es un conserje muy extricto que dependiendo de las ordenes que le digamos, pondra mas o menos restricciones.
![Apparmor](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/doc/MAC.jpg)

> [!note]
> ejecuta el comando ```aa -status``` para comprobar que se esta ejecutando.
#### Vamos a instalar nuestra maquina virtual

Recuerda hacerlo en tu carpetas sgoinfre, si vas a realizar el bonus debes darle 30GB de espacio en lugar de 12GB, también has de realizar las particiones manualmente.

¿Qué son las particiones de volumenes lógicos(LVM)?

Es la creación de uno o más regiones de almacenamiento, de modo que se puedan administrar por separado.
En Debian se designan así: sdXN --> donde X = nombre de ese espacio en el disco. N = número de la partición en ese disco.
Ejemplo: sda3 --> para la tercera partición del disco a.
Entonces pensemos en LVM como particiones dinamicas, esto quiere decir que nosotros podemos crear/dimensionar/eliminar "particiones". 
![particiones LVM](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/doc/fraccionamiento%20con%20LVM.jpg)

Recuerda seguir el tutorial para instalar perfectamente tu maquina virtual. Una vez que la tengas vuelve aquí para seguir aprendiendo sobre este proyecto.

#### Usando ATP
También conocido como el instalador de paquetes, lo vamos a usar mucho desde instalar ssh hasta nuestro editor de texto de confianza(vim-nano).
![ATP](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/doc/APT.jpg)
#### Crear una cuenta de usuario adicional:

Añadir usuario:
```adduser tester40```
Cambiar nombre de usuario:
```usermod -l tester42 tester40```

Borrar usuario:
```deluser --remove-home tester42```


Cambiar las politicas de contraseñas
```change -m x user```

visualizar las politicas de contraseñas
```change -l root```
