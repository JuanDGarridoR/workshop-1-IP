# Taller #1 - Introducción a la Programación (C++)

Este proyecto implementa un programa en C++ que resuelve varios ejercicios básicos de introducción a la programación.  
Incluye manejo de estructuras de control, validación de datos, operaciones matemáticas y uso de funciones.

## 📋 Descripción del Programa

El programa muestra un menú principal con **4 puntos**, cada uno correspondiente a un ejercicio diferente:

1. **Punto 1 - Cálculo de nota final (promedio simple)**  
   - Lee tres notas ingresadas por el estudiante.  
   - Calcula y muestra el promedio final.  
   - Valida que las notas estén dentro del rango [0.0 – 5.0].

2. **Punto 2 - Cálculo de nota final (ponderada)**  
   - Solicita el nombre del estudiante.  
   - Lee tres notas:  
     - Práctica → 30%  
     - Teórica → 60%  
     - Participación → 10%  
   - Calcula la nota final ponderada.  
   - Muestra el nombre del estudiante y su nota final.  
   - Valida el rango de notas [0.0 – 5.0].

3. **Punto 3 - Hipotenusa de un triángulo rectángulo**  
   - Lee los dos catetos de un triángulo rectángulo.  
   - Calcula la hipotenusa usando el **Teorema de Pitágoras**.  
   - Valida que los catetos sean mayores que 0.

4. **Punto 4 - Calculadora básica**  
   Implementa una calculadora con las siguientes operaciones:  
   - Suma  
   - Resta  
   - Multiplicación  
   - División  
   - Potencia  
   - Raíz cuadrada  

   ⚠️ Nota: La raíz cuadrada solo solicita un valor (radicando).

## ▶️ Ejecución

### 1. Compilar el programa
```bash
g++ main.cpp -o taller1
