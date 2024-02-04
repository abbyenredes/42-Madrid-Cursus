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


#### Crear una cuenta de usuario adicional:

Añadir usuario:
```adduser tester40```
Cambiar nombre de usuario:
```usermod -l tester42 tester40```

Borrar usuario:
```deluser --remove-home tester42```
