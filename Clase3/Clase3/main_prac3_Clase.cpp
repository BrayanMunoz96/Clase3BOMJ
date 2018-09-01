//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//

//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;


void InitGL ( GLvoid )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

/*

void prisma(void)
{
	GLfloat vertice [8][3] = { //Todos los puntos para representar un prisma
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

	//El vector normal de cada cara debe ser ortogonal y hacia afuera. así que el orden de los vértices es antihorario

	//Ya tenemos los vertices, ahora dibujamos cada una de las caras
		glBegin(GL_POLYGON);	//Front  
			glColor3f(1.0,0.0,0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			glColor3f(0.0,0.0,1.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			glColor3f(0.0,1.0,0.0);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			glColor3f(1.0,1.0,1.0);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
	
		glColor3f(0.4,0.2,0.6);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			glColor3f(0.8,0.2,0.4);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}
 */
void LetraB(void) {

	GLfloat vertice[30][3] = { //Todos los puntos para representar un prisma

	//Vértices para B

		{1.0 ,0.0, 0.5 },    //Coordenadas Vértice 0 V0
		{5.0 ,0.0, 0.5 },    //Coordenadas Vértice 1 V1
		{ 4.0 ,1.0, 0.5 },    //Coordenadas Vértice 2 V2
		{ 2.5 ,1.0, 0.5 },    //Coordenadas Vértice 3 V3

		{ 1.0 ,4.0, 0.5 },    //Coordenadas Vértice 4 V4
		{ 2.5 ,3.0, 0.5 },    //Coordenadas Vértice 5 V5
		{ 4.0 ,3.0, 0.5 },    //Coordenadas Vértice 6 V6
		{ 5.0 ,4.0, 0.5 },    //Coordenadas Vértice 7 V7

		{ 2.5 ,4.5, 0.5 },    //Coordenadas Vértice 8 V8
		{ 4.0 ,4.0, 0.5 },    //Coordenadas Vértice 9 V9
		{ 3.5 ,4.5, 0.5 },    //Coordenadas Vértice 10 V10
		{ 4.0 ,6.0, 0.5 },    //Coordenadas Vértice 11 V11
		{ 3.5 ,5.5, 0.5 },    //Coordenadas Vértice 12 V12
		{ 2.5 ,5.5, 0.5 },    //Coordenadas Vértice 13 V13
		{ 1.0 ,6.0, 0.5 },    //Coordenadas Vértice 14 V14

//Para B -Z
		{ 1.0 ,0.0, -0.5 },    //Coordenadas Vértice 15 
		{ 5.0 ,0.0, -0.5 },    //Coordenadas Vértice 16 
		{ 4.0 ,1.0, -0.5 },    //Coordenadas Vértice 17 
		{ 2.5 ,1.0, -0.5 },    //Coordenadas Vértice 18 

		{ 1.0 ,4.0, -0.5 },    //Coordenadas Vértice 19
		{ 2.5 ,3.0, -0.5 },    //Coordenadas Vértice 20
		{ 4.0 ,3.0, -0.5 },    //Coordenadas Vértice 21
		{ 5.0 ,4.0, -0.5 },    //Coordenadas Vértice 22

		{ 2.5 ,4.5, -0.5 },    //Coordenadas Vértice 23
		{ 4.0 ,4.0, -0.5 },    //Coordenadas Vértice 24
		{ 3.5 ,4.5, -0.5 },    //Coordenadas Vértice 25
		{ 4.0 ,6.0, -0.5 },    //Coordenadas Vértice 26
		{ 3.5 ,4.5, -0.5 },    //Coordenadas Vértice 27
		{ 2.5 ,5.5, -0.5 },    //Coordenadas Vértice 28
		{ 1.0 ,6.0, -0.5 },    //Coordenadas Vértice 29

	};

	glBegin(GL_POLYGON);	//B abajo  
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);	//B abajo izquierda 
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glEnd();

	glBegin(GL_POLYGON);	//B abajo derecha 
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);	//B abajo Enmedio
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);	//B arriba Enmedio
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[9]);
	glVertex3fv(vertice[10]);
	glEnd();

	glBegin(GL_POLYGON);	//B arriba Izquierda
	glVertex3fv(vertice[14]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[13]);
	glEnd();

	glBegin(GL_POLYGON);	//B arriba Derecha
	glVertex3fv(vertice[12]);
	glVertex3fv(vertice[10]);
	glVertex3fv(vertice[9]);
	glVertex3fv(vertice[11]);
	glEnd();

	glBegin(GL_POLYGON);	//B arriba 
	glVertex3fv(vertice[14]);
	glVertex3fv(vertice[13]);
	glVertex3fv(vertice[12]);
	glVertex3fv(vertice[11]);
	glEnd();


	glBegin(GL_POLYGON);	//B abajo -Z 
	glColor3f(0.0, 1.0, 0.0);
	glVertex3fv(vertice[18]);
	glVertex3fv(vertice[15]);
	glVertex3fv(vertice[16]);
	glVertex3fv(vertice[17]);
	glEnd();

	glBegin(GL_POLYGON);	//B abajo izquierda -Z 
	glVertex3fv(vertice[19]);
	glVertex3fv(vertice[15]);
	glVertex3fv(vertice[18]);
	glVertex3fv(vertice[20]);
	glEnd();

	glBegin(GL_POLYGON);	//B abajo derecha -Z
	glVertex3fv(vertice[21]);
	glVertex3fv(vertice[17]);
	glVertex3fv(vertice[16]);
	glVertex3fv(vertice[22]);
	glEnd();

	glBegin(GL_POLYGON);	//B abajo Enmedio -Z
	glVertex3fv(vertice[19]);
	glVertex3fv(vertice[20]);
	glVertex3fv(vertice[21]);
	glVertex3fv(vertice[22]);
	glEnd();

	glBegin(GL_POLYGON);	//B arriba Enmedio -Z
	glVertex3fv(vertice[23]);
	glVertex3fv(vertice[19]);
	glVertex3fv(vertice[24]);
	glVertex3fv(vertice[25]);
	glEnd();

	glBegin(GL_POLYGON);	//B arriba Izquierda -Z
	glVertex3fv(vertice[29]);
	glVertex3fv(vertice[19]);
	glVertex3fv(vertice[23]);
	glVertex3fv(vertice[28]);
	glEnd();

	glBegin(GL_POLYGON);	//B arriba Derecha -Z
	glVertex3fv(vertice[27]);
	glVertex3fv(vertice[25]);
	glVertex3fv(vertice[24]);
	glVertex3fv(vertice[26]);
	glEnd();

	glBegin(GL_POLYGON);	//B arriba 
	glVertex3fv(vertice[29]);
	glVertex3fv(vertice[28]);
	glVertex3fv(vertice[27]);
	glVertex3fv(vertice[26]);
	glEnd();

	//Caras Laterales
	glBegin(GL_POLYGON);	//B Izquierda
	glColor3f(0.0, 0.0, 1.0);
	glVertex3fv(vertice[29]);
	glVertex3fv(vertice[15]);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[14]);
	glEnd();

	//Caras Laterales
	glBegin(GL_POLYGON);	//B Arriba
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[29]);
	glVertex3fv(vertice[14]);
	glVertex3fv(vertice[11]);
	glVertex3fv(vertice[26]);
	glEnd();

	//Caras Laterales
	glBegin(GL_POLYGON);	//B Derecha Arriba
	glColor3f(0.5, 0.0, 0.0);
	glVertex3fv(vertice[11]);
	glVertex3fv(vertice[9]);
	glVertex3fv(vertice[24]);
	glVertex3fv(vertice[26]);
	glEnd();

	//Caras Laterales
	glBegin(GL_POLYGON);	//B Derecha Abajo
	glColor3f(0.0, 0.5, 0.0);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[16]);
	glVertex3fv(vertice[22]);
	glEnd();
}

void LetraM(void)
{
	GLfloat vertice[32][3] = { //Todos los puntos para representar un prisma
		{ 6.0 ,0.0, 0.5 },    //Coordenadas Vértice 0
		{ 6.5 ,0.0, 0.5 },    //Coordenadas Vértice 1
		{ 6.0 ,6.0, 0.5 },    //Coordenadas Vértice 2
		{ 6.5 ,4.0, 0.5 },    //Coordenadas Vértice 3 

		{ 7.0 ,6.0, 0.5 },    //Coordenadas Vértice 4 
		{ 7.0 ,4.0, 0.5 },    //Coordenadas Vértice 5 

		{ 7.8 ,2.0, 0.5 },    //Coordenadas Vértice 6 
		{ 7.5 ,1.5, 0.5 },    //Coordenadas Vértice 7 

		{ 8.2 ,2.0, 0.5 },    //Coordenadas Vértice 8 
		{ 8.5 ,1.5, 0.5 },    //Coordenadas Vértice 9 

		{ 9.0 ,6.0, 0.5 },    //Coordenadas Vértice 10 
		{ 9.0 ,4.0, 0.5 },    //Coordenadas Vértice 11 

		{ 10.0 ,6.0, 0.5 },    //Coordenadas Vértice 12 
		{ 9.5 ,4.0, 0.5 },    //Coordenadas Vértice 13 

		{ 10.0 ,0.0, 0.5 },    //Coordenadas Vértice 14 
		{ 9.5 ,0.0, 0.5 },    //Coordenadas Vértice 15 



		{ 6.0 ,0.0, -0.5 },    //Coordenadas Vértice 16 
		{ 6.5 ,0.0, -0.5 },    //Coordenadas Vértice 17
		{ 6.0 ,6.0, -0.5 },    //Coordenadas Vértice 18
		{ 6.5 ,4.0, -0.5 },    //Coordenadas Vértice 19

		{ 7.0 ,6.0, -0.5 },    //Coordenadas Vértice 20
		{ 7.0 ,4.0, -0.5 },    //Coordenadas Vértice 21

		{ 7.8 ,2.0, -0.5 },    //Coordenadas Vértice 22
		{ 7.5 ,1.5, -0.5 },    //Coordenadas Vértice 23

		{ 8.2 ,2.0, -0.5 },    //Coordenadas Vértice 24
		{ 8.5 ,1.5, -0.5 },    //Coordenadas Vértice 25

		{ 9.0 ,6.0, -0.5 },    //Coordenadas Vértice 26
		{ 9.0 ,4.0, -0.5 },    //Coordenadas Vértice 27

		{ 10.0 ,6.0, -0.5 },    //Coordenadas Vértice 28
		{ 9.5 ,4.0, -0.5 },    //Coordenadas Vértice 29

		{ 10.0 ,0.0, -0.5 },    //Coordenadas Vértice 30
		{ 9.5 ,0.0, -0.5 },    //Coordenadas Vértice 31

	};
							   
	glBegin(GL_POLYGON);	//M1
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);	//M2
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//M3
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_POLYGON);	//M4
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[9]);
	glVertex3fv(vertice[8]);
	glEnd();

	glBegin(GL_POLYGON);	//M5
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[9]);
	glVertex3fv(vertice[11]);
	glVertex3fv(vertice[10]);
	glEnd();

	glBegin(GL_POLYGON);	//M6
	glVertex3fv(vertice[10]);
	glVertex3fv(vertice[11]);
	glVertex3fv(vertice[13]);
	glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_POLYGON);	//M7
	glVertex3fv(vertice[13]);
	glVertex3fv(vertice[15]);
	glVertex3fv(vertice[14]);
	glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_POLYGON);	//M1 -Z
	glColor3f(0.0, 1.0, 0.0);
	glVertex3fv(vertice[18]);
	glVertex3fv(vertice[16]);
	glVertex3fv(vertice[17]);
	glVertex3fv(vertice[19]);
	glEnd();

	glBegin(GL_POLYGON);	//M2 -Z
	glVertex3fv(vertice[18]);
	glVertex3fv(vertice[19]);
	glVertex3fv(vertice[21]);
	glVertex3fv(vertice[20]);
	glEnd();

	glBegin(GL_POLYGON);	//M3 -Z
	glVertex3fv(vertice[20]);
	glVertex3fv(vertice[21]);
	glVertex3fv(vertice[23]);
	glVertex3fv(vertice[22]);
	glEnd();

	glBegin(GL_POLYGON);	//M4 -Z
	glVertex3fv(vertice[22]);
	glVertex3fv(vertice[23]);
	glVertex3fv(vertice[25]);
	glVertex3fv(vertice[24]);
	glEnd();

	glBegin(GL_POLYGON);	//M5 -Z
	glVertex3fv(vertice[24]);
	glVertex3fv(vertice[25]);
	glVertex3fv(vertice[27]);
	glVertex3fv(vertice[26]);
	glEnd();

	glBegin(GL_POLYGON);	//M6 -Z
	glVertex3fv(vertice[26]);
	glVertex3fv(vertice[27]);
	glVertex3fv(vertice[29]);
	glVertex3fv(vertice[28]);
	glEnd();

	glBegin(GL_POLYGON);	//M7 -Z
	glVertex3fv(vertice[29]);
	glVertex3fv(vertice[31]);
	glVertex3fv(vertice[30]);
	glVertex3fv(vertice[28]);
	glEnd();

	//Caras Lateras
	glBegin(GL_POLYGON);	//1Lateral
	glColor3f(0.0, 0.0, 1.0);
	glVertex3fv(vertice[18]);
	glVertex3fv(vertice[16]);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);	//2Lateral
	glVertex3fv(vertice[20]);
	glVertex3fv(vertice[18]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//3Lateral
	glVertex3fv(vertice[20]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[22]);
	glEnd();

	glBegin(GL_POLYGON);	//4Lateral
	glVertex3fv(vertice[22]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[24]);
	glEnd();

	glBegin(GL_POLYGON);	//5Lateral
	glVertex3fv(vertice[26]);
	glVertex3fv(vertice[24]);
	glVertex3fv(vertice[8]);
	glVertex3fv(vertice[10]);
	glEnd();

	glBegin(GL_POLYGON);	//6Lateral
	glVertex3fv(vertice[26]);
	glVertex3fv(vertice[10]);
	glVertex3fv(vertice[12]);
	glVertex3fv(vertice[28]);
	glEnd();

	glBegin(GL_POLYGON);	//7Lateral
	glVertex3fv(vertice[12]);
	glVertex3fv(vertice[14]);
	glVertex3fv(vertice[30]);
	glVertex3fv(vertice[28]);
	glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

		
	//Poner Código Aquí. para visualizarlo
	glTranslatef(transX, transY, transZ); //Todo lo que está debajo de translatef afecta a lo que viene, como glColor. Incluso los siguientes Translatef
	glRotatef(20, 0, 1, 0);
	LetraB();
	LetraM();

	/* Para colocar más prismas uso las mismas funciones:

	//Rotatef para rotar un cierto ángulo y un 1 en la coordenada que se quiere rotar x,y,z
	glRotatef(45, 0, 1, 0);//Puede ir antes o despues de Translatef
	glTranslatef(2, 0, 0);
	prisma();
  											
*/
    glutSwapBuffers ( );
    //glFlush();
    // Swap The Buffers
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.1,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);
	//glFrustum(-0.5, 0.5, -0.5, 0.5, 0.5, 50.0);
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.2f;
			printf("Posicion en Z: %f\n", transZ);
			break;
		case 's':
		case 'S':
			transZ -=0.2f;
			printf("Posicion en Z: %f\n", transZ);
			break;
		case 'a':
		case 'A':
			transX -=0.2f;
			break;
		case 'd':
		case 'D':
			transX +=0.2f;
			break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
      //glutFullScreen ( ); // Full Screen Mode
      //break;
    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
      //glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
      //break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 3"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



