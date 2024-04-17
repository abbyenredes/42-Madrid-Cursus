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
  </ol>
</details>

## Acerca del proyecto

Ser capaz de configurar nuestro propio sistema operativo utilizando reglas estrictas, además de aprender a usar maquinas virtules que pueden ayudarnos más adelante
a poder crear entornos para realizar tareas de simulación o hacking ético.

### Estado del proyecto
**:white_check_mark: Proyecto finalizdo :white_check_mark:**

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

> [!TIP]
> Un grandioso compi ya realizo un tutorial sobre esto, así que espero que te sea de ayuda >> [tutorial](https://github.com/gemartin99/Born2beroot-Tutorial)

![MV](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/img/MV.jpg)

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
![debian vs rocky](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/img/debian%20vs%20rocky.jpg)

Como no tengo experiencia en administración de sistemas me voy por la vieja confiable y uso Devian en este proyecto. Recuerda descargar la última versión estable de este sistema operativo. El archivo que obtendremos es de tipo .iso, lo que significa que es un clon exacto del cd(imagen-archivo)del sistema operativo de debian, este archivo contiene todo lo necesario para su instalación.

> [!NOTE]
> Recuerda hacerlo en tu carpetas sgoinfre, si vas a realizar el bonus debes darle 30GB de espacio en lugar de 12GB, también has de realizar las particiones manualmente.

#### ¿Qué son las particiones de volumenes lógicos(LVM)?

Es un software(programa) que crea una o más regiones de almacenamiento, de modo que se puedan administrar por separado.
En Debian se designan así: sdXN --> donde X = nombre de ese espacio en el disco. N = número de la partición en ese disco.
Ejemplo: sda3 --> para la tercera partición del disco a.
Entonces pensemos en LVM como particiones dinamicas, esto quiere decir que nosotros podemos crear/dimensionar/eliminar "particiones". 
![particiones LVM](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/img/fraccionamiento%20con%20LVM.jpg)

> [!note]
> para ver las particiones ejecuta el comando ```lsblk```

Recuerda seguir el tutorial para instalar perfectamente tu maquina virtual. Una vez que la tengas vuelve aquí para seguir aprendiendo sobre este proyecto.

Después de esto vamos a aprender acerca de AppArmor y de paso conoceremos un poquito de SELinux y una comparativa de ambos.
AppArmor se podria decir que es el conserje o portero de nuestra maquina virtual, que controla que zonas comunes pueden usar los propietarios y visitantes y cuales no(en este caso los programas serian esos visitantes), SELinux es un conserje muy extricto que dependiendo de las ordenes que le digamos, pondra mas o menos restricciones.
![Apparmor](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/img/MAC.jpg)

> [!note]
> ejecuta el comando ```aa-status``` para comprobar que se esta ejecutando.
#### Vamos a instalar nuestra maquina virtual

#### Usando ATP
También conocido como el instalador de paquetes, lo vamos a usar mucho desde instalar ssh hasta nuestro editor de texto de confianza(vim-nano).
![ATP](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/img/APT.jpg)

### Comandos que vas a usar:

#### Crear usuarios y grupos:

Añadir usuario:
```sudo adduser tester40```

Cambiar nombre de usuario:
```sudo usermod -l tester42 tester40```

Borrar usuario:
```sudo deluser --remove-home tester42```

Agregar un nuevo grupo:
```sudo addgroup 42madrid```

Agregar un usuario a x grupo:
```sudo adduser tester42 42madrid```

Borrar un usuario de x grupo:
```sudo deluser --remove tester42 42madrid```

Comprobar a que grupos pertenece x usuario:
```sudo groups tester42```

Agregar usuario a sudo:
```adduser tester42 sudo```


#### ssh

Comprobar que esta instalado:
```which ssh```

Comprobar que esta activo en el puerto 4242:
```sudo service ssh status```
o
```sudo systemctl status ssh```

Conectarse desde la terminal real:
```ssh tester42@localhost -p 4242```


#### UFW

Comprobar que existe:
```dpkg -s ufw```

Comprobar que esta activo:
```sudo service ufw status```
o
```sudo systemctl status ufw```

Ver puertos activos:
```sudo ufw status```

Agregar x puertos:
```sudo ufw allow 4242```

Borrar x puerto:
```sudo ufw delete allow 4242```



#### Hostname

Cambiar hostname:
```sudo nano /etc/hostname```

Cambiar hosts:
```sudo nano /etc/hosts```


#### Política de contraseñas para root y tu user(user42)

Cambiar las políticas de contraseñas
Para min dias ```change -m 2 user42```
Para max dias ```change -M 30 user42```
Para el aviso de la expiración de contraseña ```change -E 7 user42```

visualizar las políticas de contraseñas
```change -l root```


#### Crontab

Modificar crontab:
```sudo crontab -u root -e```

Parar crontab:
```sudo /etc/init.d/cron stop```

Iniciar crontab:
```sudo /etc/init.d/cron start```


## Pongamoslo a prueba

### iniciando la maquina virtual

![init](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/doc/init2.gif)

### Servicios activos

![serv](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/doc/servi2.gif)

### Creando un nuevo usuario

![user](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/doc/user3.gif)

### Usando la conexión ssh en nuestra terminal real

![ssh](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/doc/ssh2.gif)

### Agregando puertos a ufw

![ufw](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/doc/ufw2.gif)

### Modificando cron

![cron](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/doc/cron2.gif)

### Bonus wordpress

![init](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/doc/wordpress2.gif)

### Bonus openlite

![init](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/01_Born2beroot/doc/openlite.gif)


### Mucha suerte creando tu maquina virtual

![lucky](https://i.pinimg.com/originals/5b/6c/5a/5b6c5ab5d7ce92792c21ac7566775568.gif)
