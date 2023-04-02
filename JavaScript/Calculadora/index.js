const txtOp1 = document.getElementById("op1")
const txtOperador = document.getElementById("operador")
const txtOp2 = document.getElementById("op2")
const btnCalcular = document.getElementById("calcular") 
const pResultado =document.getElementById("Resultado")

btnCalcular.addEventListener('click', calcular)

function calcular(){
    const operador = txtOperador.value
    const op1 = parseFloat(txtOp1.value)
    const op2 = parseFloat(txtOp2.value)


    if (operador== "+" || operador== "-" || operador== "*" || operador== "/"){
        let respuesta;
        switch (operador){
            case "+":
                respuesta = op1+op2
                break
                case "-":
                    respuesta = op1-op2
                    break
                    case "*":
                        respuesta = op1*op2
                        break
                        case "/":
                            respuesta = op1/op2
                            break
        }
        pResultado.innerText="=" + respuesta
    }else{
        pResultado.innerText="No es Posible calcular"
    }
}