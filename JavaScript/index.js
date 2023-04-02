//console.log("Hola mundo");

//var miVariable: Esto se llama camelcase, que es cuando inicio mi variable en minuscula y al cambiar la palabra se cambia a mayuscula

//var numero=5;
//var texto ="Esto es un texto";
//var boolean1 = true;
//var boolean2 = false;
//var edad=24;

//console.log(numero);
//console.log(texto);
//console.log(boolean1);
//console.log(boolean2);
//console.log("Mi edad es: "+edad);

//let miVariable; seria lo mismo que var

//const miConstante =3;

//console.log("El valor de mi constante es: "+ miConstante);

//CONDICIONALES
//let miNumero = 6;
//let miNombre = "Jose";

//if (miNumero == 6 && miNombre == "Jose"){

    //console.log("Si.");
//}else{
    //console.log("No.");
//}

/* let miNumero = 0;

if (miNumero > 0){
console.log("Mi numero es mayor a 0");
}else if (miNumero === 0){
console.log("Mi numero es 0");
}else{
console.log("Mi numero es negativo");
} */

//BUCLES

/* let contador = 0;
while(contador < 5){
    console.log("Hola todos");
    console.log(contador);

    contador=contador + 1;
} */


/* for(let i = 0; i < 10; i++){
    console.log(i);
} */

/* function saludar(){
    console.log("Hola mundo")
}

saludar();

function saludar2(nombre){
    console.log("Hola mi nombre es: "+ nombre)
}

saludar2("Jose");

function saludar3(nombre,edad){
    console.log("Hola mi nombre es: "+ nombre)
    console.log("Hola edad es: "+ edad)
}

saludar3("Jose",22); */



/* function multiplicar(n1,n2){
    let result = n1*n2;
    return result;
}

let recibir = multiplicar(2,5);
console.log(recibir);

function multiplicar(n1,n2){
    let result = n1*n2;
    return result;
}

console.log(multiplicar(2,8)); */


//ARREGLOS

/* let miArreglo =["Jose","David","Benitez","Taborda"];
console.log(miArreglo);

for (let i=0; i<4; i++){
    console.log("Accediendo al indice: "+i);
    let mostrar=miArreglo[i];
    console.log(mostrar);
} */

//OBJETOS

/* let persona1 = {
    nombre : "Jose",
    edad : 22,
    masculino: true,
}

let persona2 = {
    nombre : "David",
    edad : 25,
    masculino: false,
}

console.log(persona1);
console.log(persona2);

let arregloDeObjetos = [persona1,persona2]

console.log(arregloDeObjetos); */

let persona1 = {
    nombre : "Jose",
    edad : 22,
    masculino: true,
}

console.log(persona1);

persona1.comidaFavorita = "Hamburguesa";
console.log(persona1);