#include <iostream>
//biblioteca para facilitar el imprimir en pantalla, permite printf
#include <stdio.h> 
//biblioteca que permite el setConsoleCursorPosition
#include <windows.h>
#include <conio.h>
using namespace std;

/*  9: Azul brillante -> usado
*   10: Verde brillante -> usado
*   11: Cian brillante -> usado
*   13: rosa / magenta -> usado
*   15: Blanco brillante -> usado
*/

//HANDLE: es un identificador de ventana o una especie de puntero avanzado que almacena bloques de memoria
//GetStdHandle: recupera y toma el control del parametro STD_OUTPUT_HANDLE y lo guarda dentro de nuestra variable color
//STD_OUTPUT_HANDLE: permite manipular los caracteres de salida en general
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

void letreroMolino() {
    //aplicar color
    SetConsoleTextAttribute(color, 10);
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t          -----------------------------El juego del-----------------------------" << endl;
    cout << "\t\t            __      __    ________   __       _______   ____    __    ________     " << endl;
    cout << "\t\t           |   \\  /   |  |   __   | |  |     |__   __| |    \\  |  |  |   __   |  " << endl;
    cout << "\t\t           | |\\ \\/ /| |  |  |  |  | |  |        | |    |     \\ |  |  |  |  |  | " << endl;
    cout << "\t\t           | | \\__/ | |  |  |  |  | |  |        | |    |  |\\  \\|  |  |  |  |  | " << endl;
    cout << "\t\t           | |      | |  |  |__|  | |  |___   __| |__  |  | \\     |  |  |__|  |   " << endl;
    cout << "\t\t           |_|      |_|  |________| |______| |_______| |__|  \\____|  |________|   " << endl;
    cout << "\t\t          ----------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t";
    system("pause");
    system("cls");
}

void logo() {
    //aplicar color
    SetConsoleTextAttribute(color, 7);
    cout << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t" << "Y si... este es nuestro logo... A nada :c " << endl;
    cout << "\t\t\t\t\t" << "           ________________  " << endl;
    cout << "\t\t\t\t\t" << "          /               /| " << endl;
    cout << "\t\t\t\t\t" << "         /______________ / | " << endl;
    cout << "\t\t\t\t\t" << "         |  |   _____|  |  | " << endl;
    cout << "\t\t\t\t\t" << "         |  |  |     |  |  | " << endl;
    cout << "\t\t\t\t\t" << "         |  |  |     |  |  | " << endl;
    cout << "\t\t\t\t\t" << "         |  |__|_____|  |  | " << endl;
    cout << "\t\t\t\t\t" << "         |___________|  | /  " << endl;
    cout << "\t\t\t\t\t" << "         \\______________|/   " << endl;
    cout << "\t\t\t\t\t" << "                             " << endl;
    cout << "\t\t\t\t\t" << "                          " << endl;
    cout << "\t\t\t\t\t\t" << "  Team Lava Jato..." << endl;
    cout << endl;
    cout << "\t\t\t\t\t";
    system("pause");
    system("cls");
}

void creditosJuego() {
    //aplicar color
    SetConsoleTextAttribute(color, 14);
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t" << "    ---------------Creditos del juego-----------------" << endl;
    cout << "\t\t\t" << "    | Ayquipa Ubaldo Abraham Israel - U202218475     |" << endl;
    cout << "\t\t\t" << "    | Carbajal Rojas, Andres Eduardo - U202218811    |" << endl;
    cout << "\t\t\t" << "    | Rojas Cuadros, Fabian Marcelo - U202218498     |" << endl;
    cout << "\t\t\t" << "    | Quintana Noa, Jimena Alexsandra - U20201F576   |" << endl;
    cout << "\t\t\t" << "    | Fernando Fausto, Mora Evangelista - U20221C330 |" << endl;
    cout << "\t\t\t" << "    --------------------------------------------------" << endl;
    cout << "\t\t\t\t";
    system("pause");
    system("cls");
}

void mostrarInstrucciones() {
    //aplicar color
    SetConsoleTextAttribute(color, 15);
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "   ---------------------------------------------Instrucciones-------------------------------------------------" << endl;
    cout << "   | Un jugador Ingresa su nombre.                                                                            |" << endl;
    cout << "   | Un jugador escoge el color de su ficha.                                                                  |" << endl;
    cout << "   | El jugador comienza y coloca la primera ficha en una interseccion o punto de esquina.                    |" << endl;
    cout << "   | El jugador contrario coloca su ficha en una interseccion o punto de esquina.                             |" << endl;
    cout << "   | Ambos jugadores se turnan para colocar sus fichas hasta que esten todas distribuidas en el tablero.      |" << endl;
    cout << "   | Cuando todas las fichas estan en su lugar, solo puede arrastrarlas desde una interseccion                |" << endl;
    cout << "   | o cruce a los siguientes espacios libres adyacentes.                                                     |" << endl;
    cout << "   | Si un jugador forma una fila de tres piezas a lo largo de una de las lineas del tablero, tiene un molino |" << endl;
    cout << "   | y puede eliminar una de las fichas de su oponente en el tablero.                                         |" << endl;
    cout << "   | Si a un jugador se queda con 2 fichas, puede saltar con ellas a cualquier punto del tablero.             |" << endl;
    cout << "   ------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t";
    system("pause");
    system("cls");
}

typedef struct {
    string nombre_usuario;
} t_datos_jugador;

void almacenarNombreJugador(t_datos_jugador* VJugadores) {
    //aplicar color
    SetConsoleTextAttribute(color, 11);
    t_datos_jugador jugador;
    cout << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t" << "----------Ingrese el nombre de los jugadores...---------" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "\t\t\t\t" << "Ingrese el nombre de jugador " << i + 1 << ": "; cin >> jugador.nombre_usuario;
        VJugadores[i] = jugador;
    }
    cout << "\t\t\t" << "-----------------------Cargando...----------------------" << endl;
    cout << "\t\t\t\t";
    system("pause");
    system("cls");
}

char* tipoFicha(char* arr_tipo_ficha) {
    //aplicar color
    SetConsoleTextAttribute(color, 15);
    cout << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t        " << " -------Tipo de ficha---------" << endl;
    cout << "\t\t\t\t        " << "| N: seleccionar ficha negra  |" << endl;
    cout << "\t\t\t\t        " << "| B: seleccionar ficha blanca |" << endl;
    cout << "\t\t\t\t        " << " -----------------------------" << endl;
    do {
        cout << "\t\t\t\t\t" << "  Jugador 1 elige tu ficha: ";
        cin >> arr_tipo_ficha[0];
        arr_tipo_ficha[0] = toupper(arr_tipo_ficha[0]);
        if (!(arr_tipo_ficha[0] == 'N' || arr_tipo_ficha[0] == 'B')) {
            cout << "\t\t\t\t        Error: Se debe de ingresar N o B" << endl;
        }
    } while (!(arr_tipo_ficha[0] == 'N' || arr_tipo_ficha[0] == 'B'));

    if (arr_tipo_ficha[0] == 'N') arr_tipo_ficha[1] = 'B';
    else if (arr_tipo_ficha[0] == 'B') arr_tipo_ficha[1] = 'N';

    return arr_tipo_ficha;
}

void resultadoSeleccionFichas(char* arr_tipo_ficha) {
    cout << endl << endl << endl << endl;
    cout << "\t\t\t\t" << "     --------fichas de cada jugador-------" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "\t\t\t\t\t" << "     Ficha del jugador " << i + 1 << ": " << arr_tipo_ficha[i] << endl;
    }
    cout << "\t\t\t\t" << "     -------------------------------------" << endl;
    cout << endl;
    cout << "\t\t\t\t       ";
    system("pause");
    system("cls");
}

void letreroVs(t_datos_jugador* VJugadores) {
    //aplicar color
    SetConsoleTextAttribute(color, 14);
    cout << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t" << "     ---------------------------------------------" << endl;
    cout << "\t\t\t\t\t\t      " << VJugadores[0].nombre_usuario << " Vs. " << VJugadores[1].nombre_usuario << endl;
    cout << "\t\t\t\t" << "     ---------------------------------------------" << endl;
}

int tablero[13][25] = {
    79,45,45,45,45,45,45,45,45,45,45,45,79,45,45,45,45,45,45,45,45,45,45,45,79,
    124,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',124,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',124,
    124,' ',' ',' ',79,45,45,45,45,45,45,45,79,45,45,45,45,45,45,45,79,' ',' ',' ',124,
    124,' ',' ',' ',124,' ',' ',' ',' ',' ',' ',' ',124,' ',' ',' ',' ',' ',' ',' ',124,' ',' ',' ',124,
    124,' ',' ',' ',124,' ',' ',' ',79,45,45,45,79,45,45,45,79,' ',' ',' ',124,' ',' ',' ',124,
    124,' ',' ',' ',124,' ',' ',' ',124,' ',' ',' ',' ',' ',' ',' ',124,' ',' ',' ',124,' ',' ',' ',124,
    79,45,45,45,79,45,45,45,79,' ',' ',' ',' ',' ',' ',' ',79,45,45,45,79,45,45,45,79,
    124,' ',' ',' ',124,' ',' ',' ',124,' ',' ',' ',' ',' ',' ',' ',124,' ',' ',' ',124,' ',' ',' ',124,
    124,' ',' ',' ',124,' ',' ',' ',79,45,45,45,79,45,45,45,79,' ',' ',' ',124,' ',' ',' ',124,
    124,' ',' ',' ',124,' ',' ',' ',' ',' ',' ',' ',124,' ',' ',' ',' ',' ',' ',' ',124,' ',' ',' ',124,
    124,' ',' ',' ',79,45,45,45,45,45,45,45,79,45,45,45,45,45,45,45,79,' ',' ',' ',124,
    124,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',124,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',124,
    79,45,45,45,45,45,45,45,45,45,45,45,79,45,45,45,45,45,45,45,45,45,45,45,79,
};

int desplazamiento(int i, int j, char asdw) {
    int ndesplazamientos = 0;
    //Primera fila
    if (i == 0 && j == 0 && asdw == 's') ndesplazamientos += 6;
    if (i == 0 && j == 0 && asdw == 'd') ndesplazamientos += 12;
    if (i == 12 && j == 0 && asdw == 'a') ndesplazamientos += 12;
    if (i == 12 && j == 0 && asdw == 'd') ndesplazamientos += 12;
    if (i == 12 && j == 0 && asdw == 's') ndesplazamientos += 2;
    if (i == 24 && j == 0 && asdw == 's') ndesplazamientos += 6;
    if (i == 24 && j == 0 && asdw == 'a') ndesplazamientos += 12;
    //Segunda fila
    if (i == 12 && j == 2 && asdw == 's') ndesplazamientos += 2;
    if (i == 12 && j == 2 && asdw == 'w') ndesplazamientos += 2;
    if (i == 12 && j == 2 && asdw == 'a') ndesplazamientos += 8;
    if (i == 12 && j == 2 && asdw == 'd') ndesplazamientos += 8;
    if (i == 4 && j == 2 && asdw == 'd') ndesplazamientos += 8;
    if (i == 4 && j == 2 && asdw == 's') ndesplazamientos += 4;
    if (i == 20 && j == 2 && asdw == 'a') ndesplazamientos += 8;
    if (i == 20 && j == 2 && asdw == 's') ndesplazamientos += 4;
    //tercera fila
    if (i == 12 && j == 4 && asdw == 'a') ndesplazamientos += 4;
    if (i == 12 && j == 4 && asdw == 'w') ndesplazamientos += 2;
    if (i == 12 && j == 4 && asdw == 'd') ndesplazamientos += 4;
    if (i == 8 && j == 4 && asdw == 's') ndesplazamientos += 2;
    if (i == 8 && j == 4 && asdw == 'd') ndesplazamientos += 4;
    if (i == 16 && j == 4 && asdw == 'a') ndesplazamientos += 4;
    if (i == 16 && j == 4 && asdw == 's') ndesplazamientos += 2;
    //cuarta fila
    if (i == 8 && j == 6 && asdw == 'a') ndesplazamientos += 4;
    if (i == 8 && j == 6 && asdw == 'w') ndesplazamientos += 2;
    if (i == 8 && j == 6 && asdw == 's') ndesplazamientos += 2;
    if (i == 4 && j == 6 && asdw == 'a') ndesplazamientos += 4;
    if (i == 4 && j == 6 && asdw == 's') ndesplazamientos += 4;
    if (i == 4 && j == 6 && asdw == 'd') ndesplazamientos += 4;
    if (i == 4 && j == 6 && asdw == 'w') ndesplazamientos += 4;
    if (i == 0 && j == 6 && asdw == 's') ndesplazamientos += 6;
    if (i == 0 && j == 6 && asdw == 'd') ndesplazamientos += 4;
    if (i == 0 && j == 6 && asdw == 'w') ndesplazamientos += 6;
    if (i == 16 && j == 6 && asdw == 'd') ndesplazamientos += 4;
    if (i == 16 && j == 6 && asdw == 'w') ndesplazamientos += 2;
    if (i == 16 && j == 6 && asdw == 's') ndesplazamientos += 2;
    if (i == 20 && j == 6 && asdw == 'a') ndesplazamientos += 4;
    if (i == 20 && j == 6 && asdw == 's') ndesplazamientos += 4;
    if (i == 20 && j == 6 && asdw == 'd') ndesplazamientos += 4;
    if (i == 20 && j == 6 && asdw == 'w') ndesplazamientos += 4;
    if (i == 24 && j == 6 && asdw == 's') ndesplazamientos += 6;
    if (i == 24 && j == 6 && asdw == 'a') ndesplazamientos += 4;
    if (i == 24 && j == 6 && asdw == 'w') ndesplazamientos += 6;
    // quinta fila
    if (i == 12 && j == 8 && asdw == 'a') ndesplazamientos += 4;
    if (i == 12 && j == 8 && asdw == 's') ndesplazamientos += 2;
    if (i == 12 && j == 8 && asdw == 'd') ndesplazamientos += 4;
    if (i == 8 && j == 8 && asdw == 'w') ndesplazamientos += 2;
    if (i == 8 && j == 8 && asdw == 'd') ndesplazamientos += 4;
    if (i == 16 && j == 8 && asdw == 'a') ndesplazamientos += 4;
    if (i == 16 && j == 8 && asdw == 'w') ndesplazamientos += 2;
    //sexta fila
    if (i == 12 && j == 10 && asdw == 's') ndesplazamientos += 2;
    if (i == 12 && j == 10 && asdw == 'w') ndesplazamientos += 2;
    if (i == 12 && j == 10 && asdw == 'a') ndesplazamientos += 8;
    if (i == 12 && j == 10 && asdw == 'd') ndesplazamientos += 8;
    if (i == 4 && j == 10 && asdw == 'd') ndesplazamientos += 8;
    if (i == 4 && j == 10 && asdw == 'w') ndesplazamientos += 4;
    if (i == 20 && j == 10 && asdw == 'a') ndesplazamientos += 8;
    if (i == 20 && j == 10 && asdw == 'w') ndesplazamientos += 4;
    //septima fila
    if (i == 0 && j == 12 && asdw == 'w') ndesplazamientos += 6;
    if (i == 0 && j == 12 && asdw == 'd') ndesplazamientos += 12;
    if (i == 12 && j == 12 && asdw == 'a') ndesplazamientos += 12;
    if (i == 12 && j == 12 && asdw == 'd') ndesplazamientos += 12;
    if (i == 12 && j == 12 && asdw == 'w') ndesplazamientos += 2;
    if (i == 24 && j == 12 && asdw == 'w') ndesplazamientos += 6;
    if (i == 24 && j == 12 && asdw == 'a') ndesplazamientos += 12;
    return ndesplazamientos;
}

void actualizarPosiciones(int* Vposiciones) {
    Vposiciones[0] = tablero[0][0];
    Vposiciones[1] = tablero[0][12];
    Vposiciones[2] = tablero[0][24];
    Vposiciones[3] = tablero[2][4];
    Vposiciones[4] = tablero[2][12];
    Vposiciones[5] = tablero[2][20];
    Vposiciones[6] = tablero[4][8];
    Vposiciones[7] = tablero[4][12];
    Vposiciones[8] = tablero[4][16];
    Vposiciones[9] = tablero[6][0];
    Vposiciones[10] = tablero[6][4];
    Vposiciones[11] = tablero[6][8];
    Vposiciones[12] = tablero[6][16];
    Vposiciones[13] = tablero[6][20];
    Vposiciones[14] = tablero[6][24];
    Vposiciones[15] = tablero[8][8];
    Vposiciones[16] = tablero[8][12];
    Vposiciones[17] = tablero[8][16];
    Vposiciones[18] = tablero[10][4];
    Vposiciones[19] = tablero[10][12];
    Vposiciones[20] = tablero[10][20];
    Vposiciones[21] = tablero[12][0];
    Vposiciones[22] = tablero[12][12];
    Vposiciones[23] = tablero[12][24];
}

bool VerCombinacionesMolinos(bool* Vmolinos, int* Vposiciones, int  turnoJugador) {
    bool x = false;
    if (Vposiciones[0] == turnoJugador && Vposiciones[1] == turnoJugador && Vposiciones[2] == turnoJugador && Vmolinos[0] == false) { Vmolinos[0] = true; x = true; };
    if (Vposiciones[3] == turnoJugador && Vposiciones[4] == turnoJugador && Vposiciones[5] == turnoJugador && Vmolinos[1] == false) { Vmolinos[1] = true; x = true; };
    if (Vposiciones[6] == turnoJugador && Vposiciones[7] == turnoJugador && Vposiciones[8] == turnoJugador && Vmolinos[2] == false) { Vmolinos[2] = true; x = true; };
    if (Vposiciones[9] == turnoJugador && Vposiciones[10] == turnoJugador && Vposiciones[11] == turnoJugador && Vmolinos[3] == false) { Vmolinos[3] = true; x = true; };
    if (Vposiciones[12] == turnoJugador && Vposiciones[13] == turnoJugador && Vposiciones[14] == turnoJugador && Vmolinos[4] == false) { Vmolinos[4] = true; x = true; };
    if (Vposiciones[15] == turnoJugador && Vposiciones[16] == turnoJugador && Vposiciones[17] == turnoJugador && Vmolinos[5] == false) { Vmolinos[5] = true; x = true; };
    if (Vposiciones[18] == turnoJugador && Vposiciones[19] == turnoJugador && Vposiciones[20] == turnoJugador && Vmolinos[6] == false) { Vmolinos[6] = true; x = true; };
    if (Vposiciones[21] == turnoJugador && Vposiciones[22] == turnoJugador && Vposiciones[23] == turnoJugador && Vmolinos[7] == false) { Vmolinos[7] = true; x = true; };
    if (Vposiciones[0] == turnoJugador && Vposiciones[9] == turnoJugador && Vposiciones[21] == turnoJugador && Vmolinos[8] == false) { Vmolinos[8] = true; x = true; };
    if (Vposiciones[3] == turnoJugador && Vposiciones[10] == turnoJugador && Vposiciones[18] == turnoJugador && Vmolinos[9] == false) { Vmolinos[9] = true; x = true; };
    if (Vposiciones[6] == turnoJugador && Vposiciones[11] == turnoJugador && Vposiciones[15] == turnoJugador && Vmolinos[10] == false) { Vmolinos[10] = true; x = true; };
    if (Vposiciones[1] == turnoJugador && Vposiciones[4] == turnoJugador && Vposiciones[7] == turnoJugador && Vmolinos[11] == false) { Vmolinos[11] = true; x = true; };
    if (Vposiciones[16] == turnoJugador && Vposiciones[19] == turnoJugador && Vposiciones[22] == turnoJugador && Vmolinos[12] == false) { Vmolinos[12] = true; x = true; };
    if (Vposiciones[8] == turnoJugador && Vposiciones[12] == turnoJugador && Vposiciones[17] == turnoJugador && Vmolinos[13] == false) { Vmolinos[13] = true; x = true; };
    if (Vposiciones[5] == turnoJugador && Vposiciones[13] == turnoJugador && Vposiciones[20] == turnoJugador && Vmolinos[14] == false) { Vmolinos[14] = true; x = true; };
    if (Vposiciones[2] == turnoJugador && Vposiciones[14] == turnoJugador && Vposiciones[23] == turnoJugador && Vmolinos[15] == false) { Vmolinos[15] = true; x = true; };
    return x;
}

void posicionarCursor(int i, int j) {
    //HANDLE: es un identificador de ventana o una especie de puntero avanzado que almacena bloques de memoria
    //GetStdHandle: recupera y toma el control del parametro STD_OUTPUT_HANDLE y lo guarda dentro de nuestra variable parametro
    //STD_OUTPUT_HANDLE: permite manipular los caracteres de salida en general
    HANDLE parametro = GetStdHandle(STD_OUTPUT_HANDLE);
    //se declara COORD
    //COORD es una estructura definida en la libreria windows.h y esta posiciona el cursor en las coordenadas (0;0) por defecto
    COORD coordenadas;
    //creamos 2 mienbros, uno que será las cordenadas en x y el otro, las coordenadas en y
    coordenadas.X = i;
    coordenadas.Y = j;
    //SetConsoleCursorPosition: función que mueve el cursor a la posicion que se desee
    SetConsoleCursorPosition(parametro, coordenadas);
}

void dibujarTablero() {
    //aplicar color
    SetConsoleTextAttribute(color, 11);
    cout << endl << endl << endl << endl << endl << endl << endl;
    //pintar desde la fila 0 hasta la fila 12
    for (int i = 0; i < 13; i++) {
        cout << "\t\t\t\t\t\t";
        //pintar desde la columna 0 hasta la columna 24
        for (int j = 0; j < 25; j++) {
            char dibujar_caracteres = tablero[i][j];
            switch (dibujar_caracteres) {
                //codigos ASCII
                // 124: dibujar barras verticales |
                case 124: cout << char(124); break;
                // 79: dibijar un circulo O
                case 79: cout << char(79); break;
                // 45: dibujar guion -
                case 45: cout << char(45); break;
                // 1: dibujar una ficha blanca
                case 1: cout << char(1); break;
                // 2: dibujar una ficha negra
                case 2: cout << char(2); break;
                // en cualquier otro caso: dibujar un espacio
            default: cout << " "; break;
            }
        }
        cout << endl;
    }
}

void letreroFin() {
    //aplicar color
    SetConsoleTextAttribute(color, 14);
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t------------------------------" << endl;
    cout << "\t\t\t\t\t\t  ______   _____  ___   ___   " << endl;
    cout << "\t\t\t\t\t\t |   ___| |__ __| |  \\  |  | " << endl;
    cout << "\t\t\t\t\t\t |  |___    | |   |   \\ |  | " << endl;
    cout << "\t\t\t\t\t\t |  ____|   | |   |    \\|  | " << endl;
    cout << "\t\t\t\t\t\t | |      __| |__ |  |\\    | " << endl;
    cout << "\t\t\t\t\t\t |_|      |_____| |__| \\___| " << endl << endl;
    cout << "\t\t\t\t\t\t------------------------------" << endl << endl;
    cout << "\t\t\t\t           ";
    system("pause");
}

void letreroGanador() {
    //aplicar color
    SetConsoleTextAttribute(color, 14);
    cout << endl << endl;
    cout << "\t\t         ----------------------------------- El ---------------------------------------" << endl;
    cout << "\t\t           _______    _______   ____    __   _______   _______    ________   _______      " << endl;
    cout << "\t\t          |   ____|  |   _   | |    \\  |  | |   _   | |   __  \\  |   __   | |   __  \\  " << endl;
    cout << "\t\t          |  |  ___  |  | |  | |     \\ |  | |  | |  | |  |  \\  | |  |  |  | |  |__|  |  " << endl;
    cout << "\t\t          |  | |_  | |  |_|  | |  |\\  \\|  | |  |_|  | |  |  |  | |  |  |  | |       /   " << endl;
    cout << "\t\t          |  |___| | |   _   | |  | \\     | |   _   | |  |__/  | |  |__|  | |  | \\  \\  " << endl;
    cout << "\t\t          |________| |__| |__| |__|  \\____| |__| |__| |_______/  |________| |__|  \\__\\ " << endl;
    cout << "\t\t         ---------------------------------- Es... -------------------------------------" << endl;
}

void letreroInstruccionesTeclado() {
    cout << endl << endl;
    cout << "\t\t\t\t\t\t    Instrucciones:" << endl;
    cout << endl;
    cout << "\t\t\t\t\t          mover hacia arriba" << endl;
    cout << "\t\t\t\t\t\t       -------" << endl;
    cout << "\t\t\t\t\t\t      | | W | |" << endl;
    cout << "\t\t\t\t\t\t      | ----- |" << endl;
    cout << "\t\t\t\t\t\t      |/     \\|" << endl;
    cout << "\t\t\t\t\t\t       -------" << endl;
    cout << "\t\t\t" << "                     -------" << "  " << " -------" << "  " << " -------" << endl;
    cout << "\t\t\t" << "                    | | A | |" << " " << "| | S | |" << " " << "| | D | |" << endl;
    cout << "\t\t\t" << "Mover a la izquierda| ----- |" << " " << "| ----- |" << " " << "| ----- | Mover a la derecha" << endl;
    cout << "\t\t\t" << "                    |/     \\|" << " " << "|/     \\|" << " " << "|/     \\| " << endl;
    cout << "\t\t\t" << "                     -------" << "  " << " -------" << "  " << " -------" << endl;
    cout << "\t\t\t\t\t\t  mover hacia abajo.." << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t    Teclas extras:" << endl;
    cout << "\t\t\t\t" << "                  -------" << "  " << " -------" << endl;
    cout << "\t\t\t\t" << "                 | | Z | |" << " " << "| | X | |" << endl;
    cout << "\t\t\t\t" << "    Quitar ficha | ----- |" << " " << "| ----- | Cambiar de ficha" << endl;
    cout << "\t\t\t\t" << "                 |/     \\|" << " " << "|/     \\|" << endl;
    cout << "\t\t\t\t" << "                  -------" << "  " << " -------" << endl;
    cout << endl;
    cout << "\t\t\t\t         Presione E si quieres salir del juego..." << endl;
    cout << endl;
    cout << "\t\t\t\t        ";
    system("pause");
    system("cls");
}

void trueMolino(bool molinooo,  t_datos_jugador* VJugadores) {
    //si hay molino...
    if (molinooo == true) {
        //limpiar tablero
        system("cls");
        //mostrar el letrero del vs
        letreroVs(VJugadores);
        //mostrar el letrero ganador
        letreroGanador();
        cout << "\t\t\t\t\t   ";
        system("pause");
    }
}

void goteo(int* posiciones, bool* molinos, t_datos_jugador* VJugadores, char* resultados_arr_tipo_ficha) {
    //iniciamos con el molino en false
    bool molinooo = false;
    //Verificar que no se pase de poner 18 fichas
    int turnos_totales = 18;
    //emepezamos en la esquina superior derecha del tablero
    int i = 48, j = 7;
    //declaramos e inicializamos turnos en 1
    int turnos = 1;
    actualizarPosiciones(posiciones);
    system("cls");
    dibujarTablero();
    posicionarCursor(i, j);
    while (turnos_totales != 0) {
        //kbhit: captura la tecla presionada
        if (_kbhit()) {
            //captura la tecla presionada y almacenarla en la variabla tecla
            char tecla = _getch();
            //en el caso de que se haya presionado una tecla mayuscula convertirla a minuscula
            tecla = tolower(tecla);
            if (tecla == 'a') i -= desplazamiento(i - 48, j - 7, tecla);
            if (tecla == 'd') i += desplazamiento(i - 48, j - 7, tecla);
            if (tecla == 's') j += desplazamiento(i - 48, j - 7, tecla);
            if (tecla == 'w') j -= desplazamiento(i - 48, j - 7, tecla);
            //pintar fichas, si el jugador 1 es negro asignarle 2 y
            //al jugador 2 asignarle 1
            if (resultados_arr_tipo_ficha[0] == 'N') {
                resultados_arr_tipo_ficha[0] = 2;
                resultados_arr_tipo_ficha[1] = 1;
            }
            //pintar fichas, si el jugador 1 es negro asignarle 1 y
            //al jugador 2 asignarle 2
            else if (resultados_arr_tipo_ficha[0] == 'B') {
                resultados_arr_tipo_ficha[0] = 1;
                resultados_arr_tipo_ficha[1] = 2;
            }
            if (tecla == 'x') {
                    //disminuir el numero para que no pase de 18
                    turnos_totales--;
                    if (turnos == 1) {
                        tablero[j - 7][i - 48] = resultados_arr_tipo_ficha[0];
                        system("cls");
                        dibujarTablero();
                        actualizarPosiciones(posiciones);
                        molinooo = VerCombinacionesMolinos(molinos, posiciones, turnos);
                        turnos = 2;
                        trueMolino( molinooo, VJugadores);
                    }
                    else {
                        tablero[j - 7][i - 48] = resultados_arr_tipo_ficha[1];
                        system("cls");
                        dibujarTablero();
                        actualizarPosiciones(posiciones);
                        molinooo = VerCombinacionesMolinos(molinos, posiciones, turnos);
                        turnos = 1;
                        trueMolino(molinooo,VJugadores);
                    }

            }
            if (tecla == 'z') {
                tablero[j - 7][i - 48] = 79;
                actualizarPosiciones(posiciones);
                system("cls");
                dibujarTablero();
                molinooo = false;
            };
            if (tecla == 'e') {
                system("cls");
                letreroFin();
            }
            posicionarCursor(i, j);
        }
    }
    system("cls");
}

int main() {
    int** matriz = new int* [7];
    t_datos_jugador* VJugadores = new t_datos_jugador[2];
    char* arr_tipo_ficha = new char[2];
    //Mostrar letrero: El juego del molino
    letreroMolino();
    //Mostar logo
    logo();
    //Creditos del juego
    creditosJuego();
    //Mostrar Instrucciones
    mostrarInstrucciones();
    //Ingresar y alamcenar el nombre de los jugadores
    almacenarNombreJugador(VJugadores);
    //Elegir el tipo de ficha
    char* resultados_arr_tipo_ficha = tipoFicha(arr_tipo_ficha);
    //Mostrar el resultado de la seleccion de fichas
    resultadoSeleccionFichas(arr_tipo_ficha);
    //Mostar instrucciones
    letreroInstruccionesTeclado();
    //Se crea un vector de 24 espacios que son cada uno las posiciones por las que nos podemos mover
    int* Vposiciones = new int[24];
    //se crea un vector con las 16 posibles formas de hacer molino
    bool* Vhabilitar_molinos = new bool[16];
    //Inicializamos todo el vector Vhabilitar_molinos en false
    for (int i = 0; i < 16; i++) Vhabilitar_molinos[i] = false;
    //Llamamos a la función goteo
    goteo(Vposiciones, Vhabilitar_molinos, VJugadores, resultados_arr_tipo_ficha);
    //Limpiar pantalla
    system("cls");
    //Liberar memoria
    delete[] VJugadores, arr_tipo_ficha, matriz, Vposiciones, Vhabilitar_molinos;
    return 0;
}
