# EDA

## Definiciones de datos:

- country: pais
- life expectancy: media de años de la poblacion
- Adult mortality: probabilidad de morir entre los 15 y 60 años cada 100 habitantes
- Infants Deaths: probabilidad de morir en el primer año de vida cada mil habitantes
- Alcohol: consumo de alcohol mayores de 15 años por litro de alcohol puro
- percentage expenditure: gasto en salud relativo al GDP (%)
- Hepatitis b: inmunizacion entre los ñines de un año (%)
- Measles: casos zarapion reportados cada mil habitantes
- BMI: promedio de indice de masa corporal
- under-five death: numero de muerte de menores 5 años cada mil habitantes
- Polio: inmunizacion entre los ñines de un año (%)
- Total expenditure: gasto en salud del gobierno sobre los gastos totales del gobierno
- Diphtheria: immunization coverage among 1-year-olds (%)
- HIV/AIDS: muertes por HIV/AIDS en personas de 0 a 4 años
- GDP: producto bruto interno: el valor monetario de la producción de bienes y servicios de demanda final.
- Population: poblacion
- thinness 1-19 years: porcentage de personas entre 1 y 19 años con IMC menor a 2 desviaciones estandar de la media
- thinness 5-9 years: porcentage de personas entre 5 y 9 años con IMC menor a 2 desviaciones estandar de la media
- Income composition of resources: como se utilizan los recursos productivos
- schooling: años de escuela
- Status: desarrollado o en vias de desarrollo

## Datos:

- Tamaño de dataset: 183 paises con 20 features
- datos faltantes:
	- Alcohol: 1
	- Hepatitis B: 9
	- BMI: 2
	- total expenditure: 2
	- GDP: 25
	- population: 40
	- thinness  1-19 years: 2
	- thinness 5-9 years: 2
	- Income composition of resources: 10
	- schooling: 10

### observaciones:

- como mucho hay 5 datos perdidos por pais => todos los paises tiene informacion
- percentage expenditure tien valores por encima de 100. Creemos que esto se debe a que varios paises reciben financiamiento externo para la salud, por lo que el gasto final es mayor a su GDP. Un ejemplo de esto podria ser Argentina
- Measles: creemos que se da que la cantidad de enfermos reportados cada mil habitantes es mayor a mil por el hecho de que una persona se puede enfermar mas de una vez en un determinado rango de tiempo.
- BMI: se observa una distribucion bimodal, donde el pico menor indica un BMI sano, y el pico mayor indica obsidad.



## Datos erroneos:

- India tiene infant death = 1366, pero esta metrica se mide cada 1000 habitantes, por lo que debe ser un dato erroneo o mal interpretado.

- India tiene under-five deaths = 1812.5, pero esta metrica se mide cada 1000 habitantes, por lo que debe ser un dato erroneo o mal interpretado.


## Datos extras:
- densidad poblacion