print('Bienvenido al conversor de milla a kilometros')
print('Escribe un número en millas')

millas = input()#Siempre devuelve datos de tipo Strings
#Convertir e String a número
#int
#float

millas = float(millas)#Convertido a float

# 1 milla = 1.609 km
kilometros = millas * 1.609

print('Tu valor ingreso en millas fue:',millas)
print('Tu valor convertido a kilometros es:',kilometros,'km')