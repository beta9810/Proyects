print('*********************')
print('**    Welcome to   **')
print('**    Shop mascot  **')
print('*********************')

num_perros = 12
num_gatos = 20
num_pajaros = 25

print('Ingresa tu nombre')
name = input()

print('Ingresa tu apellido')
lastname = input()

#Concatenacion
nombre_completo = name + ' ' + lastname

print('Hola',nombre_completo)

print('Actualmente contamos con:')
print('Perros:',num_perros, 'Gatos:',num_gatos, 'Pajaros:',num_pajaros)
print('Animales totales:',num_perros+num_gatos+num_pajaros)