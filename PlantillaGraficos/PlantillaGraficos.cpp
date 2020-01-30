// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;
 
void dibujarPoligono()
{
	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.4f, 0.9f);
	
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(0.2f, 0.3f, 0.0f);
	glVertex3f(0.6f, -0.4f, 0.0f);
	glVertex3f(0.4f, -0.6f, 0.0f);
	glEnd();
}

void dibujarTrianguloContinuo() 
{
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, 0.1f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, 0.15f, 0.0f);
	glEnd();
}
void dibujarLineaContinua()
{
	glBegin(GL_LINE_STRIP);
	glColor3f(0.1f, 0.3f, 0.75f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.2f, 0.0f);
	glVertex3f(0.4f, 0.2f, 0.0f);
	glVertex3f(0.2f, 0.3f, 0.0f);
	glEnd();
}

void dibujarLineas()
{
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.4f, 0.6f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, -0.4f, 0.0f);

	glVertex3f(-0.3f, 0.1f, 0.0f);
	glVertex3f(-0.3f, -0.4f, 0.0f);
	glEnd();
}

void dibujarTriangulos()
{
	//Establecemos el tipo de primitiva
	glBegin(GL_TRIANGLES);
	//Establecemos el color			
	glColor3f(0.0f, 0.0f, 1.0f);
	//Enviar los vértices
	glVertex3f(0.7f, -0.7f, 0.0f);
	glVertex3f(-0.7f, 0.0f, 0.0f);
	glVertex3f(0.7f, 0.0f, 0.0f);

	glVertex3f(0.7f, -0.7f, 0.0f);
	glVertex3f(-0.7f, 0.0f, 0.0f);
	glVertex3f(-0.7f, -0.7f, 0.0f);
	//Especificar que dejaremos de dibujar
	glEnd();
}

void dibujarCasa()
{
	//Techo
	glBegin(GL_TRIANGLES);
	glColor3f(0.4f, 0.2f, 0.0f);

	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);

	glEnd();

	//Cesped
	glBegin(GL_TRIANGLES);		
	glColor3f(0.0f, 1.0f, 0.0f);
	
	glVertex3f(-1.0f, -0.6f, 0.0f);
	glVertex3f(1.0f, -0.6f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.6f, 0.0f);

	glEnd();

	//Lineas del cesped

	glBegin(GL_LINE_STRIP);
	glColor3f(0.17f, 0.38f, 0.21f);

	glVertex3f(0.5f, -0.8f, 0.0f);
	glVertex3f(0.4f, -0.9f, 0.0f);
	glVertex3f(0.3f, -0.8f, 0.0f);

	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.17f, 0.38f, 0.21f);

	glVertex3f(-0.65f, -0.7f, 0.0f);
	glVertex3f(-0.55f, -0.8f, 0.0f);
	glVertex3f(-0.45f, -0.7f, 0.0f);

	glEnd();

	//Casa
	glBegin(GL_TRIANGLES);
	glColor3f(0.84f, 0.47f, 0.28f);

	glVertex3f(0.4f, 0.0f, 0.0f);
	glVertex3f(-0.4f, -0.7f, 0.0f);
	glVertex3f(0.4f, -0.7f, 0.0f);

	glVertex3f(0.4f, 0.0f, 0.0f);
	glVertex3f(-0.4f, -0.7f, 0.0f);
	glVertex3f(-0.4f, 0.0f, 0.0f);

	//Puerta
	glBegin(GL_TRIANGLES);
	glColor3f(0.45f, 0.31f, 0.22f);

	glVertex3f(0.2f, -0.3f, 0.0f);
	glVertex3f(-0.1f, -0.7f, 0.0f);
	glVertex3f(0.2f, -0.7f, 0.0f);

	glVertex3f(0.2f, -0.3f, 0.0f);
	glVertex3f(-0.1f, -0.7f, 0.0f);
	glVertex3f(-0.1f, -0.3f, 0.0f);

	glEnd();

	//Cerrojo
	glBegin(GL_POLYGON);
	glColor3f(0.4f, 0.2f, 0.0f);

	for(double i=0; i<360.0; i +=9.0)
	{
		glVertex3f((0.03 *cos(i * 3.14159 / 180.0)) + 0.15, (0.015 * sin(i * 3.14159 / 180.0)) - 0.5, 0.0f);
	}
	glEnd();

	//Ventana
	glBegin(GL_TRIANGLES);
	glColor3f(0.69f, 0.97f, 0.96f);

	glVertex3f(0.35f, 0.0f, 0.0f);
	glVertex3f(0.15f, -0.2f, 0.0f);
	glVertex3f(0.35f, -0.2f, 0.0f);

	glVertex3f(0.35f, 0.0f, 0.0f);
	glVertex3f(0.15f, -0.2f, 0.0f);
	glVertex3f(0.15f, 0.0f, 0.0f);

	//dividir entre 255 para el color
	glEnd();

	//Marcos de la ventana
	glBegin(GL_LINES);	
	glColor3f(0.16f, 0.08f, 0.03f);

	glVertex3f(0.15f, 0.0f, 0.0f);
	glVertex3f(0.35f, 0.0f, 0.0f);

	glVertex3f(0.15f, 0.0f, 0.0f);
	glVertex3f(0.15f, -0.2f, 0.0f);

	glVertex3f(0.15f, -0.2f, 0.0f);
	glVertex3f(0.35f, -0.2f, 0.0f);

	glVertex3f(0.35f, -0.2f, 0.0f);
	glVertex3f(0.35f, 0.0f, 0.0f);

	glVertex3f(0.25f, -0.2f, 0.0f);
	glVertex3f(0.25f, 0.0f, 0.0f);

	glVertex3f(0.15f, -0.1f, 0.0f);
	glVertex3f(0.35f, -0.1f, 0.0f);

	glEnd();

	//Tronco
	glBegin(GL_TRIANGLES);
	glColor3f(0.45f, 0.31f, 0.22f);

	glVertex3f(-0.8f, 0.3f, 0.0f);
	glVertex3f(-0.7f, -0.7f, 0.0f);
	glVertex3f(-0.8f, -0.7f, 0.0f);

	glVertex3f(-0.8f, 0.3f, 0.0f);
	glVertex3f(-0.7f, -0.7f, 0.0f);
	glVertex3f(-0.7f, 0.3f, 0.0f);

	glEnd();

	//Arbol
	glBegin(GL_POLYGON);
	glColor3f(0.01f, 0.25f, 0.04f);

	for (double i = 0; i < 360.0; i += 6.0)
	{
		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - 0.75, (0.15 * sin(i * 3.14159 / 180.0)) + 0.0, 0.0f);
	}
	
	glBegin(GL_POLYGON);
	glColor3f(0.01f, 0.25f, 0.04f);

	for (double t = 0; t < 360.0; t += 8.0)
	{
		glVertex3f((0.2 * cos(t * 3.14159 / 180.0)) - 0.65, (0.15 * sin(t * 3.14159 / 180.0)) + 0.1, 0.0f);
	}
	
	glBegin(GL_POLYGON);
	glColor3f(0.01f, 0.25f, 0.04f);

	for (double i = 0; i < 360.0; i += 6.0) 
	{
		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - 0.75, (0.15 * sin(i * 3.14159 / 180.0)) + 0.2, 0.0f);
	}

	glBegin(GL_POLYGON);
	glColor3f(0.01f, 0.25f, 0.04f);

	for (double i = 0; i < 360.0; i += 5.0)
	{
		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - 0.65, (0.15 * sin(i * 3.14159 / 180.0)) + 0.3, 0.0f);
	}
	glEnd();

	//Nubes
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 8.0) 
	{
		glVertex3f((0.08 * cos(i * 3.14159 / 180.0)) - 0.25, (0.065 * sin(i * 3.14159 / 180.0)) + 0.65, 0.0f);
	}

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 7.0) 
	{
		glVertex3f((0.08 * cos(i * 3.14159 / 180.0)) - 0.35, (0.065 * sin(i * 3.14159 / 180.0)) + 0.6, 0.0f);
	}

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 8.0) 
	{
		glVertex3f((0.18 * cos(i * 3.14159 / 180.0)) + 0.65, (0.1 * sin(i * 3.14159 / 180.0)) + 0.5, 0.0f);
	}
	
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 7.0) 
	{
		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) + 0.75, (0.1 * sin(i * 3.14159 / 180.0)) + 0.55, 0.0f);
	}
	glEnd();
	
	//Sol
	glBegin(GL_POLYGON);
	glColor3f(0.98f, 0.96f, 0.01f);

	for (double i = 0; i < 360.0; i += 5.0) 
	{
		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - 0.8, (0.2 * sin(i * 3.14159 / 180.0)) + 0.8, 0.0f);
	}
	glEnd();

	//Rayitos
	glBegin(GL_LINES);

	glVertex3f(-0.55f, 0.9f, 0.0f);
	glVertex3f(-0.45f, 0.93f, 0.0f);

	glVertex3f(-0.55f, 0.8f, 0.0f);
	glVertex3f(-0.4f, 0.8f, 0.0f);

	glVertex3f(-0.55f, 0.73f, 0.0f);
	glVertex3f(-0.45f, 0.7f, 0.0f);

	glVertex3f(-0.6f, 0.67f, 0.0f);
	glVertex3f(-0.55f, 0.6f, 0.0f);

	glEnd();

}

void dibujar()
{
	dibujarCasa();
}

int main()
{
    //Declarar una ventana
	GLFWwindow* window;

	//Si no se pudo iniciar GLFW terminamos ejecucion
	if (!glfwInit())
	{
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW, inicializamos la ventana
	window = glfwCreateWindow(600, 600, "Ventana", NULL, NULL);
	//Si no se pudo crear la ventana, terminamos la ejecucion
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto, se activan las funciones "modernas" (gpu)
	glewExperimental = true;

	GLenum errores = glewInit();
	if (errores != GLEW_OK)
	{
		glewGetErrorString(errores);
	}

	const GLubyte* versionGL = glGetString(GL_VERSION);

	cout << "Version OpenGL: " << versionGL;

	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window))
	{
		//Establecer region de dibujo
		glViewport(0, 0, 600, 600);
		//Establecemos el color de borrado
		//Valores RGBA
		glClearColor(0.49, 0.86, 0.98, 1);
		//Borrar
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		//Actualizar valores y dibujar
		dibujar();

		glfwPollEvents();
		glfwSwapBuffers(window);
	}
	//Despues del ciclo de dibujo, eliminamos venta y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();
}


