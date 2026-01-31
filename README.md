Limpia C: Herramienta de Mantenimiento del Sistema

Limpia C es un programa de mantenimiento del sistema escrito en C, diseñado para automatizar tareas comunes de limpieza y optimización en sistemas Windows. Con una interfaz sencilla y funciones intuitivas, esta herramienta permite liberar espacio en disco, mejorar el rendimiento y mantener tu sistema en óptimas condiciones con solo unos clics.

Características principales

Limpieza de archivos temporales: Elimina archivos innecesarios de la carpeta temporal.
Vaciar la papelera de reciclaje: Libera espacio eliminando los archivos de la papelera.
Recreación de la carpeta temporal: Elimina y recrea la carpeta temporal para asegurar su correcto funcionamiento.
Actualización de software: Actualiza todos los paquetes instalados con winget.
Limpiar caché de aplicaciones: Elimina la caché de programas como Google Chrome y Streamio.
Liberar la caché de DNS: Resuelve problemas de conectividad liberando la caché del DNS.
Mostrar servicios innecesarios: Lista servicios del sistema que pueden ser innecesarios o problemáticos.

Este programa pretende ser similar a herramientas como CCleaner o BleachBit, pero con algunas ventajas:

Ligero: Está escrito en C, lo que lo hace rápido y consume pocos recursos.
Personalizable: Puedes agregar o modificar funciones según tus necesidades.
Sin bloatware: A diferencia de algunas herramientas comerciales, este programa no incluye funciones innecesarias ni anuncios.

=================================================================================

¿Qué hacen cada una de las opciones?

2- Limpiar Archivos temporales:

La opción 2 remueve archivos temporales de windows. El comando system("del /f /s /q %TEMP%\\*"); elimina todos los archivos y subcarpetas dentro de la carpeta temporal (%TEMP%) de Windows, liberando espacio en disco al borrar documentos temporales, archivos de instalación y otros datos innecesarios creados por aplicaciones. Gracias a los modificadores /f (fuerza la eliminación), /s (incluye subcarpetas) y /q (modo silencioso).

3- Limpiar cache de Google Chrome:

Cuando el programa borra la caché de Google Chrome, elimina archivos temporales como imágenes, CSS, JavaScript y descargas parciales que el navegador almacena para acelerar la carga de páginas web y reducir el uso de red. Esto no afecta el historial de navegación, las contraseñas guardadas o las configuraciones del navegador, pero puede hacer que las páginas carguen más lentamente la próxima vez, ya que Chrome necesitará descargar los recursos nuevamente. Es una manera rápida de liberar espacio en disco y resolver problemas de rendimiento en el navegador.

En la carpeta %LOCALAPPDATA%\Google\Chrome\User Data\Default\Cache, Google Chrome almacena archivos temporales como imágenes, CSS, JavaScript y partes de páginas web que utiliza para acelerar la carga de sitios visitados y reducir el consumo de datos. Estos archivos no son esenciales para el funcionamiento del navegador, por lo que se pueden eliminar para liberar espacio en disco, aunque esto puede hacer que las páginas carguen más lentamente la próxima vez, ya que Chrome tendrá que descargar los recursos nuevamente.

6-  Liberar la caché de DNS: Resuelve problemas de conectividad liberando la caché del DNS.

La opción liberar caché de DNS ejecuta el comando ipconfig /flushdns, que elimina todas las entradas almacenadas en la caché del DNS (Sistema de Nombres de Dominio) de Windows. Esto puede resolver problemas de conectividad, como sitios web que no cargan correctamente o redirecciones incorrectas, al forzar al sistema a obtener nuevamente las direcciones IP actualizadas de los servidores DNS. Es una operación segura y rápida que no afecta otras configuraciones de red ni la conexión activa.

9- Desactivar servicios no esenciales:

La opción de activar y desactivar servicios innecesarios en Windows permite gestionar los servicios del sistema que consumen recursos pero no son esenciales para el funcionamiento básico del equipo. Ejemplos de servicios que se pueden desactivar incluyen DiagTrack (telemetría), Fax, TapiSrv (telefonía), Spooler (impresión) y Wsearch (búsqueda de Windows). Desactivar estos servicios libera memoria RAM, reduce el uso de CPU y mejora el rendimiento del sistema, aunque puede afectar funciones específicas como impresión o búsquedas rápidas. Esta opción es útil para optimizar el sistema según las necesidades del usuario. 
