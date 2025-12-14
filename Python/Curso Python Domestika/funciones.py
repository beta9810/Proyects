#funciones predefinidas por Python print, type, range(), input()
#un parametro es una variable que la funcion puede utilizar para trabajar
def saludar(nombre): #esta funcion no regresa valores
    print('Hola hermoso', nombre)
#Celsius a Fahrenheit: (C * 1.8) + 32

#4: Luego el dato viene a la funcion conversor y retorna el dato convertido
def conversor(dato):#esta funcion retorna valores
    return (dato * 1.8) + 32
   
#1: Pedir al usuario el dato    
print('Ingrese el dato que desea convertir')

#El dato se almacena en la variable dato
dato = float(input())

#3: con esta funcion convertir estoy llamando a la funcion conversor y dandole el dato almacenado
convertir = conversor(dato)

#5:Llamo a la funcion convertir con los datos ya calculados
print('El resultado es:', convertir)
#saludar('Jose')
#saludar('David')
#saludar('Andres')20
