# Módulo ZMK
## Jogrefer Shield 

Pues básicamente este repositorio es un plantilla para ZMK, donde defino un shield y disposición para un teclado llamado Jogrefer.
Está enfocado a usar un teclado físico construido desde scratch, de momento es la versión 1.

### Versión 1
![Versión 1](https://github.com/user-attachments/assets/995fa708-c95a-420e-bdc5-a55b36bb2165)

La versión 2 está enfocado en: Disminuir la cantidad de teclas. Teclas customizadas e impresas en 3D. Añadir un trackball(der)/(izq)trackpad. Añadir pantalla. Hacer mejoras de estilo y presentación.

### Img Ilustrativa-[Charybdis](https://www.youtube.com/watch?v=Mks7QDxFreY)
![img-ilustrativa-Charybdis](https://github.com/user-attachments/assets/33d1a617-d529-42d1-8a54-6a36b74ffba1)

## Explicación

Se creó esta plantilla editando la plantilla base de ZMK para crear módulos, desde la página de [ZMK Module Creation](https://zmk.dev/docs/development/module-creation).

## Implementación

Hay que linkear el módulo en el config/west.yml del repositorio que va a hacer build. Quedando de esta manera:

```
manifest:
  remotes:
    - name: zmkfirmware
      url-base: https://github.com/zmkfirmware
    - name: zmk-keyboard-jogrefer
      url-base: https://github.com/Jogrefer
  projects:
    - name: zmk
      remote: zmkfirmware
      revision: main
      import: app/west.yml
    - name: zmk-keyboard-jogrefer
      remote: jogrefer
      revision: main
  self:
    path: config
```

For more info on modules, you can read through  through the\
[Zephyr modules page](https://docs.zephyrproject.org/3.5.0/develop/modules.html) and [ZMK's page on using modules](https://zmk.dev/docs/features/modules).\
[Zephyr's west manifest page](https://docs.zephyrproject.org/3.5.0/develop/west/manifest.html#west-manifests) may also be of use.
