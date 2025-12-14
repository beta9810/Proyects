nombres = ['Jose', 'Sebas', 'Yilberth', 'Natalia', 'LuisMi', 'Clara']
#0=Jose, 1=Sebas, 2=Yilberth
print(nombres)

#print('Jose' in nombres) #Este dato busca dentro de la lista si es dato que le estoy dando existe o no
#f-strings para incluir dentro el texto las variables por medio de {}
for i, nombre in enumerate(nombres):
    #print('Se inscribio en la lista', i, nombre)
    print(f'Se incribio {nombre} en la lista con el indice {i}')
           
print('Bienvenidos', nombres[:3])
print('Lo sentimos', nombres[3:])


'''
print(nombres[1])
nombres[1] = 'LuisMi'   #Puedo con el indice cambiarle el dato en la lista
print(nombres[1])
print(nombres)
nombres.append('Natalia') #la funcion luego de llamar la variable en este caso nombres lo que hace es agregarme un dato al final de la lista como en el ejemplo .append('Dato')
print(nombres)
nombres.remove('Sebas') #La funcion .remove elimina cualquier dato de la lista
del nombres[0] #Esta funcion elimina a un indice en particular
print(nombres)

'''
