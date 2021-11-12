# Linea de experimentacion 1:

## Introduccion:

Para comenzar con esta linea de experimentacion lo primero que hicimos fue sanear los datos:

- los valores que habiamos detectado como erroneos los reemplazamos por la media de su feature
- los valores nulos tambien los reempllazamos por la media de su feature

Luego agregamos una columna adicional con la tasa de suicidios por pais. Dicha informacion la calculamos desde un dataset proveniente de la functe dada en el enunciado. Al igual que antes, los datos faltantes (los cuales no eran muchos) los reemplazamos por la media.

Finalmente hicimos un EDA entre la feature agregada y las demas, y concluimos que la misma no se correclacion fuertemente con ninguna otra, por que pareciese que aporta nueva informacion a nuestro dataset.

## Desarrollo del modelo