#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32

	#include <windows.h> // Requerido para Sleep() y ClearScreen en Windows. 

#endif

void DelTempFiles();
void DelRecycleBin();
void KillTempFolder();
void UpdateWinget();
void CleanChrome();
void CleanStreamio();
void FlushDNS();
void ClearScreen();
void ShowMenu();
void WaitKey();

int input;

int main() {
	
	ProgramIni:
	
	ClearScreen();
	
	printf("\nAntes de usar este programa es necesario que se cierren todas las aplicaciones abiertas...");
	WaitKey();
	
	ShowMenu();
	KillTempFolder();
	DelTempFiles();
	DelRecycleBin();
	CleanChrome();
	CleanStreamio();
	UpdateWinget();
	FlushDNS();
			
	return 0;

}

// Función para limpiar la papelera de reciclaje...

void DelRecycleBin() {
	
	printf("\nLimpiando la papelera de reciclaje...\n");
    system("rd /s /q C:\\$Recycle.Bin");
    printf("\nPapelera de reciclaje vacía.\n");
    return;
	
}

// Función para limpiar archivos temporales...

void DelTempFiles() {
	
	printf("\nBorrando archivos temporales...");
	system("del /f /s /q %TEMP%\\*");
	printf("\nArchivos temporales eliminados!");
	return;
	
}

// Función para eliminar y recrear la carpeta temporal

void KillTempFolder() {
    
    printf("\nEliminando y recreando la carpeta temporal...\n");
    system("rd /s /q %temp%");
    system("md %temp%");
    printf("\nCarpeta temporal recreada.\n");
}

// Función para actualizar paquetes y programas con winget...

void UpdateWinget() {
	
    printf("\nActualizando paquetes con winget...\n");
    system("winget upgrade --all");
    printf("\nActualización completada.\n");
    
}

// Función para liberar la caché de DNS

void FlushDNS () {
	
    printf("Liberando la caché de DNS...\n");
    system("ipconfig /flushdns");
    printf("Caché de DNS liberada.\n");
    
}

// Función para limpiar la caché de Google Chrome

void CleanChrome() {
    
    printf("Limpiando la caché de Google Chrome...\n");
    system("rd /s /q \"%LOCALAPPDATA%\\Google\\Chrome\\User Data\\Default\\Cache\"");
    printf("Caché de Google Chrome limpiada.\n");

}

void CleanStreamio() {
    
    printf("Limpiando la caché de Streamio...\n");
    system("rd /s /q \"C:\\Users\\ferna\\AppData\\Roaming\\stremio\\stremio-server\\stremio-cache\"");
    printf("Caché de Streamio limpio.\n");

}

//CLS Function
void ClearScreen() {

	#ifdef _WIN32
    
		// Windows
		system("cls");

	#else
    
		// Unix-like systems
		system("clear");

	#endif

}

void ShowMenu() {
    
    printf("=============================================\n");
    printf(" Limpia C 0.1 - Herramienta de mantenimiento \n");
    printf("=============================================\n");
    
    printf("\n1. Actualizar paquetes con winget\n");
    printf("2. Limpiar archivos temporales\n");
    printf("3. Eliminar y recrear la carpeta temporal\n");
    printf("4. Vaciar la papelera de reciclaje\n");
    printf("5. Mostrar servicios innecesarios\n");
    printf("6. Liberar la caché de DNS\n");
    printf("7. Limpiar la caché de Google Chrome\n");
    printf("8. Limpiar la caché de Streamio\n");
    printf("9. Salir\n");
    
    printf("\n=============================================\n");

}


void WaitKey() {
	
	// Loop until a key is pressed
			
	do {
			
		input = getchar();
		
	} while (input == '\n'); // Ignore newline characters

	//printf("\n Key '%c' pressed. Program continues...\n", input);

	return;
		
}

