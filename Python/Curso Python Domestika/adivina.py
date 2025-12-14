import random

def tirar_dado():
    return random.randint(2,12)

def respuesta():
    print('Ingresa tu predicción')
    print('1. Par')
    print('2. Impar')
    print('3. Salir del Juego')

    return int(input())

def resultado(numero, prediccion):
    #not, %
    #Saber si un número es par o impar
    #Divir entre 2 y si el remanente es 0, es par. Si es 1, es impar
    #resultado = 5/2: resultado seria 2 con remante 1= este es el resultado que devuelve el %
    es_par = numero % 2 == 0
    #es_par, prediccion = 1: Gane
    #no es_par, prediccion = 2, Gane
    #Perdí
    if es_par and prediccion == 1:
        print('Ganaste, el número de los dados es:', numero)
    elif not es_par and prediccion == 2:
        print('Ganaste, el número de los dados es:', numero)
    else:
        print('Perdiste, el número de los dados es:', numero)

while True:
    numero = tirar_dado()
    prediccion = respuesta()
    if prediccion == 3:
        break
    resultado (numero,prediccion)
    
print('Gracias por jugar')