#ciclo, iteracion, bucle

#while: mientras la expresion evalue a verdadero se va a ejecutar el código indentado/  while  <expr>:
#i = 0
#while i < 5:
#    print('Hola')
#    # i = i + 1 #Esta es una forma de sumarle 1 al indice
#    i += 1

"""
i = 0
while i < 10:
    if i < 5:
        print('El número', i, 'es menor a 5')
    else:
        print('El número', i, 'es mayor o igual a 5')
    i += 1
    
print('Termino la iteracion')
"""

#for x in range(5):
    #print(x)
    
while True: #Esto es una iteracion infinita
        print('Escribe lo que deseas hacer')
        print('1: Saludar')
        print('2: Salir')
        
        respuesta = int(input())
        
        if respuesta == 1:
            print('Hola hermoso')
        elif respuesta == 2:
            break
        
print('Saliendo del ciclo')