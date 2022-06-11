/*4.	Para el departamento de iluminación:
Tomando en cuenta que todas las lámparas están en oferta al mismo precio de $35 pesos final.
A.	Si compra 6 o más  lamparitas bajo consumo tiene un descuento del 50%. 
B.	Si compra 5  lamparitas bajo consumo marca "ArgentinaLuz" se hace un descuento del 40 % y si es de otra marca el descuento es del 30%.
C.	Si compra 4  lamparitas bajo consumo marca "ArgentinaLuz" o “FelipeLamparas” se hace un descuento del 25 % y si es de otra marca el descuento es del 20%.
D.	Si compra 3  lamparitas bajo consumo marca "ArgentinaLuz"  el descuento es del 15%, si es  “FelipeLamparas” se hace un descuento del 10 % y si es de otra marca un 5%.
E.	Si el importe final con descuento suma más de $120  se debe sumar un 10% de ingresos brutos en informar del impuesto con el siguiente mensaje:
 ”Usted pago X de IIBB.”, siendo X el impuesto que se pagó. 

 */
function CalcularPrecio () 
{
    let precio;
    let lamparasCompradas;
    let marca;
    let descuento;
    let precioFinal;
    let porcentaje;
    let impuesto;

    lamparasCompradas=document.getElementById('txtIdCantidad').value;
    marca=document.getElementById('Marca').value;

    lamparasCompradas = parseInt(lamparasCompradas);

    precio = lamparasCompradas * 35;
    porcentaje = 0;
    descuento = 0;

    switch(lamparasCompradas)
    {
        case 1:
        case 2:

            porcentaje = 0
        break;

        case 3:

            switch(marca)
            {
                case "ArgentinaLuz":

                    porcentaje = 15/100;
                break;

                case "FelipeLamparas":

                    porcentaje = 10/100;
                break;

                default:

                    porcentaje = 5/100;
                break;
            }
        break;

        case 4:

            switch(marca)
            {
                case "ArgentinaLuz":
                case "FelipeLamparas":

                    porcentaje = 25/100;
                break;

                default:

                    porcentaje = 20/100;
                break;
            }
        break;

        case 5:

            switch(marca)
            {
                case "ArgentinaLuz":

                    porcentaje = 40/100;
                break;

                default:

                    porcentaje = 30/100;
                break;
            }
        break;

        default:

            porcentaje = 50/100;
        break;
    }

    descuento = precio * porcentaje;
    precioFinal = precio - descuento;

    if (precioFinal > 120) 
    {
        impuesto = precioFinal * 10/100;

        precioFinal = precioFinal + impuesto;

        alert("IIBB Usted pago " + impuesto);
    }

    document.getElementById('txtIdprecioDescuento').value=precioFinal;

}

        /*
            let precio;
            let lamparasCompradas;
            let marca;
            let descuento;
            let precioFinal;
            let porcentaje;
            let impuesto;

            lamparasCompradas=document.getElementById('txtIdCantidad').value;
            marca=document.getElementById('Marca').value;

            lamparasCompradas = parseInt(lamparasCompradas);

            precio = lamparasCompradas * 35;
            porcentaje = 0;
            descuento = 0;

            if (lamparasCompradas > 5) 
            {
                porcentaje = 50/100;
            }

            else
            {
                if (lamparasCompradas == 5) 
                {
                    if (marca == "ArgentinaLuz") 
                    {
                        porcentaje = 40/100;
                    }

                    else
                    {
                        porcentaje = 30/100;
                    }
                }

                if (lamparasCompradas == 4) 
                {
                    if (marca == "ArgentinaLuz" || marca == "FalipeLamparas") 
                    {
                        porcentaje = 25/100;
                    }

                    else
                    {
                        porcentaje = 20/100;
                    }
                }

                if (lamparasCompradas == 3) 
                {
                    if (marca == "ArgentinaLuz") 
                    {
                        porcentaje = 15/100;
                    }

                    else
                    {
                        if (marca == "FalipeLamparas") 
                        {
                            porcentaje = 10/100;
                        }

                        else
                        {
                            porcentaje = 5/100;
                        }
                    }
                }

            }

            descuento = precio * porcentaje;
            precioFinal = precio - descuento;

            if (precioFinal > 120) 
            {
                impuesto = precioFinal * 10/100;

                precioFinal = precioFinal + impuesto;

                alert("IIBB Usted pago " + impuesto);
            }

            document.getElementById('txtIdprecioDescuento').value=precioFinal;
        */
    