def saludar_y_sumar(name, num1, num2):
    print('Hola hermoso',name, 'La suma de tu numero es:',num1+num2)
       
saludar_y_sumar('Jose',20,20)


'''
#Python tiene bibliotecas de funciones que bien ya viene instalas o las poedmos instalar, una ya instalada es random
import random

#randint(min, max): te da números aleatorios enteros

resultado = random.randint(1,20)

print(resultado)
'''






'''
def aleatorio(num1, num2):
    return random.randint(num1,num2)

print('Ingresa 2 numeros para buscar un aleatorio entre ellos')
print('Dato 1')
num1 = input()

print('Ingresa 2 numeros para buscar un aleatorio entre ellos')
print('Dato 2')
num2 = input()

datos = aleatorio(int(num1), int(num2))

print('Tú número aleatorio es:',datos)
'''