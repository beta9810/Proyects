print('Escribe tu nombre')
nombre = input()
print('Escribe tu edad')
#edad = input()
#edad = int(edad) esta es un opcion para comvertir la variable edad que entra como String o usar la otra
edad = int(input())

#elif
#Operadores lógicos
#And en español sería (y) or (o)
#and: requiere que todas las expresiones sean True
#or: Con que una de las expresiones sea True

if nombre == 'Jose' and edad >= 20:
    print('Hola Jose eres mayor de edad')
elif nombre == 'Jose' and edad < 20:
    print('Hola Jose, eres menor de edad')
else:
    print('Saludos')