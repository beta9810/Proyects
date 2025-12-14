#Listas de elementos llaves: valor
#Arreglos asociativos

persona = {'nombre': 'Jose', 
           'Edad': 24,
           'Apellido': 'Benitez'}

persona['Apellido']='Taborda'
persona['Apodo']='Alternaz'

#print(persona)
#print(persona['Apellido'])
#print(persona.keys()) #Esta funcion me trae las llaves de mi diccionario
#print(persona.values()) #Esta funcion me trae los valores de mi diccionario
#print(persona.items()) #Esta funcion me trae todos los datos en listas de tuplas

for key in persona.keys():
    print(key)
    
for key, value in persona.items():
    print(f'La llave {key} tiene el valor {value}')