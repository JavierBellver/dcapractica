El proyecto es un simple stdout de saludo con traducción automática de la anterior práctica.

El bisect se ha probado entre el primer commit del proyecto y el tercero de claves SHA1 
0a48c01d09948806f97ecb91d9a3f4bec24b9f03

y

b695a7a0cc348e63912c48d60f04bb3403e8b8ed

encontrando el bisect correctamente el fallo en el commit intermedio de clave 

dc1e0b4bed9e6dd70897b8aac2ecbad35e36c0f3

Con respecto a los hooks se ha preparado el hook por defecto de pre-push el cual no permite subir commits que tengan el acrónimo WIP (Work In Progress) en su mensaje. Se ha comprobado que este funciona sin problema.

Por último el enlace al repositorio es: https://github.com/JavierBellver/dcapractica

