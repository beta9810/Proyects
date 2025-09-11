#creando una lista (Se pueden modificar)
lista = ["Jose Benitez", "Beta", True, 1.80]

#creando una tupla (no se puede modificar)
tupla = ("Jose Benitez", "Beta", True, 1.80)


lista[3]="Hermosisimo"


#creando un conjunto (set) (no se accede a los elementos por su indice, no almancena datos duplicados)

conjunto = {"Jose Benitez", "Beta", True, 1.80}

#creando un diccionario (dict) (la estructura es key : value y separamos con comas)

diccionario = {
    'nombre' : "Jose",
    'canal' : "Hermoso",
    'esta_emocionado' : True,
    'altura' : 1.84,
    'dato_duplicado' : "Hermoso"
}

print (diccionario["nombre"])