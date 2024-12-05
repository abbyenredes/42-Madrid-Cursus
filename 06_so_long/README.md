# Creemos nuestro primer videojuego 2D

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
        <li><a href="#Prerrequisitos">Prerrequisitos</a></li>
        <li><a href="#Mi-paso-a-paso">Mi paso a paso</a></li>
      </ul>
    </li>
    <li><a href="#Pongamoslo-a-prueba">Pongamoslo a prueba</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
  </ol>
</details>

## Acerca del proyecto

### Estado del proyecto

:construction: Proyecto en construcción :construction:

### Mis herramientas
* Documentación para usar minilibx: [Doc minilibx](https://harm-smits.github.io/42docs/libs/minilibx)
* Guía para optimizar nuestro proyecto: [Lista de verificación](https://42-cursus.gitbook.io/guide/rank-02/so_long/building-the-thing)
* Funciones que vamos a usar de minilibx: [Guía MLX](https://reactive.so/post/42-a-comprehensive-guide-to-so_long/)
* []()
* []()

## Empecemos

### Checklist
- [x] Comprender como funciona y que ofrece minilibx.
- [x] Crear carpeta so_long y subcarpetas src, utils ... para desarrollar el proyecto.
- [x] Crear y configurar Makefile.
- [x] Exporta mi libft-vincularla con el programa.
- [x] Crear nuestro .h.
- [x] Visualizar una ventana.
- [ ] Renderizar una imagen en la ventana.
- [ ] 
- [ ]
### Mi paso a paso

> [!WARNING]
> 
> Todo lo escrito es en base a mi experiencia, cada quien tiene su propio camino y tiempo. Espero que lo tomes como un complemento a tu formación y no como las sagradas escrituras.

#### Entendiendo minilibx
> 1. ¿Qué es minilibx?
> 
> 'Es un API de programación X-Window (X11R6) simple en C.' Esta al menos es la definición que encontramos en la documentación de esta pequeña libreria gráfica que nos permite realizar las tareas más básicas para renderizar algo en pantalla sin necesidad de tener conocimientos de X-Window o Cocoa. Y te preguntaras:

> 2. ¿Qué es X-Window?
>    
> Es un sistema gráfico orientado a la red para Unix. Por ejemplo, se utiliza para conectarse a escritorios remotos. Uno de los ejemplos más comunes de esta implementación sería TeamViewer.

#### Funciones que voy a usar

| Función | Descripción |
| ------------- | ------------- |
| mlx_init | Inicializa la biblioteca MLX. Debe llamarse antes de utilizar cualquier otra función. |
| mlx_new_window | Crea una nueva instancia de ventana. |
| mlx_hook | Registra cualquier gancho definido previamente y escucha. Esto también evita el comportamiento predeterminado de destruir la ventana al crearla.|
| mlx_loop | Le permite escuchar eventos nativos de X11, como movimientos del mouse, pulsaciones de teclas, interacción con ventanas y más... |
| mlx_xpm_file_to_image | Convierte un archivo XPM en un puntero de imagen MLX |
| mlx_put_image_to_window | Pone su imagen en la pantalla en las coordenadas dadas. |
| mlx_destroy_image | Libera la imagen. |
| mlx_destroy_window | Libera la instancia de la ventana. |
| mlx_destroy_display | Libera MLX. |

#### ¿Creando nuestro espacio de trabajo?
Vamos con nuestras buenas prácticas de crear carpetas y subcarpetas para establecer el orden del programa, además que aprovecho para exportar mi [libft]().
> [!IMPORTANT]
>
> Vamos a trabajar con [GNL](), recuerda incluirlo en tu librería.

Usamos el comando ``cp -r Libft ruta_so_long`` para incluir nuestra libft en nuestra carpeta so_long.

Crearemos la carpeta include(aquí irá nuestro .h).

Creamos  src(aquí va a ir nuestro programa), dentro de src va muestra carpeta utils(aquí irán las funciones auxiliares de nuestro programa).

Te dejo el shortcode: ``mkdir include src`` >> ``cd src`` >> ``mkdir utils``

Finalmente creamos nuestro [Makefile]() en el cual agregaremos la regla para vincular minilibx:
``` Makefile 
INCLUDES = -L./mlx -lmlx -lXext -lX11 -lm
```
Creamos también nuestro [so_long.h](), usaremos listas enlazadas para trabajar con minilibx, aquí mi estructura:
```c
ifndef SO_LONG_H
# define SO_LONG_H

#include "../libft/libft.h"
#include "../mlx/mlx.h"
#include <X11/X.h>
#include <X11/keysym.h>

typedef struct s_data
{
	void		*mlx_ptr; // MLX pointer
	void		*win_ptr; // MLX window pointer
	void		*textures[5]; // MLX image pointers (on the stack)
	struct      t_map  *map; // Map pointer (contains map details - preferably kept on the stack)
}	t_data;

#endif
```
Comprobaremos que funciona correctamente creando un main y probando el siguiente código sacado de este [tutorial](https://reactive.so/post/42-a-comprehensive-guide-to-so_long/) :
```C
#include "../include/so_long.h"

int on_destroy(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	exit(0);
	return (0);
}

int on_keypress(int keysym, t_data *data)
{
	(void)data;
	printf("Pressed key: %d\\n", keysym);
	return (0);
}

int main(void)
{
	t_data data;

	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
		return (1);
	data.win_ptr = mlx_new_window(data.mlx_ptr, 600, 400, "bayta's adventure");
	if (!data.win_ptr)
		return (free(data.mlx_ptr), 1);
		
	// Register key release hook
	mlx_hook(data.win_ptr, KeyRelease, KeyReleaseMask, &on_keypress, &data);

	// Register destroy hook
	mlx_hook(data.win_ptr, DestroyNotify, StructureNotifyMask, &on_destroy, &data);

	// Loop over the MLX pointer
	mlx_loop(data.mlx_ptr);
	return (0);
}
```
Tendría que dar el siguiente resultado:
![abrir una ventana](https://github.com/abbyenredes/42-Madrid-Cursus/blob/main/06_so_long/img/open_windows.gif)
## Pongamoslo a prueba

![](link)

## Roadmap

![](link)

# Good Luck
![](link)
