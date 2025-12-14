from datetime import datetime
print('*********************')
print('**    Welcome to   **')
print('**    Shop mascot  **')
print('*********************')

inventario ={
    'Perro': 10,
    'Gato': 20,
    'Pajaros': 58,
    'Iguanas': 5
}

animales_totales = 0
for val in inventario.values():
    animales_totales += val

print('Ingresa tu nombre')
name = input()
print('Ingresa tu apellido')
lastname = input()

#Concatenacion
nombre_completo = name + ' ' + lastname

print('Hola',nombre_completo)

compras = []

def mostrar_menu():
    print('Selecciona la opcion que deseas:')
    print('1: Conocer cuantos animales tiene la tienda')
    print('2: Comprar un animal')
    print('3: Mostrar comprar')
    print('4: Salir')
    
def mostrar_inv():
    print('***** INVENTARIO *****')
    for llave, valor in inventario.items():
        print(f'  {llave}: {valor}')
    print('Animales totales:',animales_totales) 
    
def comprar_animal():
    carrito = []
    
    while True:
        print('¿Qué animal deseas comprar?')
        print('Escribe F para terminar la lista o V para ver tu carrito')
        animal = input()
        
        if animal == 'F': break
        
        if animal == 'V':
            print(f'tu carrito contiene {carrito}')
            continue
        
        if animal not in inventario:
            print(f'Lo sentimos no contamos con el animal {animal}')
        elif inventario[animal] == 0:
            print(f'Lo sentimos, no tenemos en existencia el animal {animal}')
        elif animal not in carrito:
            carrito.append(animal)
        else:
            print('Ese animal ya se encuentra en su lista')
        #print('Has comprado un', animal)
        
    print('Tus animales a comprar son:')
    for animal in carrito:
        print(' ',animal)
        inventario[animal] -= 1
        
    #Agregar esta compra al carrito de compras
    fecha = datetime.now()
    compras.append( (name, carrito, fecha) )
        
def mostrar_compras():
    print('')
    print('***** Compras realizadas *****')
    for compra in compras: #compra = tupla que tiene nombre, carrito, fecha
        print(f'    {compra[0]} compró {compra[1]} en {compra[2]}')

while True: 
    mostrar_menu()
    respuesta = int(input())

    if respuesta == 1:
            mostrar_inv()
    elif respuesta == 2:
            comprar_animal()
    elif respuesta == 3:
            mostrar_compras()
    elif respuesta == 4:
            break
    print('Gracias vuelva pront')