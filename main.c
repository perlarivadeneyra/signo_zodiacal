/*
Instrucciones: A partir del estudio de la unidad, elabora un programa que cumpla el siguiente objetivo:
El programa deberá solicitar al usuario su fecha de nacimiento, con base a los datos del
usuario el programa deberá indicar el signo zodiacal del usuario.
 */
#include <stdio.h>

// El programa está estructurado con una serie de situaciones condicionales, que ponen límites a los rangos entre fechas
// para que controle fechas inexistentes, números negativos y devuelva los signos zodiacales correspondientes.

const char* signo_zodiacal(int dia, int mes) {
    if(mes <= 0 || dia <= 0)
        return "Los meses y días deben ser positivos";
    else if ((mes == 1 && dia >= 20 && dia <= 31) || (mes == 2 && dia <= 18))
        return "Tu signo es: Acuario";
    else if ((mes == 2 && dia >= 19 && dia <= 29) || (mes == 3 && dia <= 20))
        return "Tu signo es: Piscis";
    else if ((mes == 3 && dia >= 21 && dia <= 31) || (mes == 4 && dia <= 19))
        return "Tu signo es: Aries";
    else if ((mes == 4 && dia >= 20 && dia <= 30) || (mes == 5 && dia <= 20))
        return "Tu signo es: Tauro";
    else if ((mes == 5 && dia >= 21 && dia <= 31) || (mes == 6 && dia <= 20))
        return "Tu signo es: Géminis";
    else if ((mes == 6 && dia >= 21 && dia <= 31) || (mes == 7 && dia <= 22))
        return "Tu signo es: Cáncer";
    else if ((mes == 7 && dia >= 23 && dia <= 30) || (mes == 8 && dia <= 22))
        return "Tu signo es: Leo";
    else if ((mes == 8 && dia >= 23 && dia <= 31) || (mes == 9 && dia <= 22))
        return "Tu signo es: Virgo";
    else if ((mes == 9 && dia >= 23 && dia <= 30) || (mes == 10 && dia <= 22))
        return "Tu signo es: Libra";
    else if ((mes == 10 && dia >= 23 && dia <= 31) || (mes == 11 && dia <= 21))
        return "Tu signo es: Escorpión";
    else if ((mes == 11 && dia >= 22 && dia <= 30) || (mes == 12 && dia <= 21))
        return "Tu signo es: Sagitario";
    else if ((mes == 12 && dia >= 22 && dia <= 31) || (mes == 1 && dia <= 19))
        return "Tu signo es: Capricornio";
    else
        return "Fecha no válida"; // Mensaje de error
}

int main() {
    int dia, mes;

    printf("Introduzca su fecha de nacimiento (dd mm): ");
    scanf("%d %d", &dia, &mes);

    const char* signo = signo_zodiacal(dia, mes);
    printf("%s\n", signo);

    return 0;
}