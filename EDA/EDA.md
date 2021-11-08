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

## correlaciones:

Creemos que existen correlaciones entre:

- Hepatitis B / Polio / Diphtheria
- thinnes 1-19 / thinnes 5-9 / BMI
- under five deaths / infant death / HIV AIDS
- measeales / percentage expenditure
- adult mortality / alcohol / schooling
- GDP / population / income composition / schooling
- total expenditure / percentage expenditure

Vamos a decir que la correcion es significativa cuando su coeficiente de correclacion (en valor absoluto) sea mayor a 0.7. Luego obtuvimos que los pares de muestras que correlacionan son:

- infant deaths - Measles : 0.7110775583491253
- infant deaths - under-five deaths : 0.9969586952904269
- infant deaths - Population : 0.9060955430328702
- percentage expenditure - GDP : 0.9423748013157649
- Hepatitis B - Polio : 0.7908827871783202
- Hepatitis B - Diphtheria : 0.7929991582444058
- Measles - under-five deaths : 0.7196359208503491
- BMI - thinness  1-19 years : -0.714633162766642
- BMI - thinness 5-9 years : -0.7173653301255216
- BMI - Schooling : 0.7212625183827598
- under-five deaths - Population : 0.8910447036998426
- Polio - Diphtheria : 0.9456565342137309
- thinness  1-19 years - thinness 5-9 years : 0.9850978271410601
- Income composition of resources - Schooling : 0.8640546067156053

Luego podemos deducir que hay grupos de features que aportar infomacion semejante como:

- infant deaths, Measles, under-five deaths, Population
- percentage expenditure, GDP
- Hepatitis B, Polio, Diphtheria
- BMI, thinness 1-19 years, thinness 5-9 years, Schooling, income composition of resources

Luego, los features que tienen poca correlacion con todos los demas, es decir, brindan informacion propia son:

- Adult Mortality : HIV/AIDS 0.696998872374393
- Alcohol : Schooling 0.6234719694124654
- Total expenditure : Alcohol 0.4279160655448252
- HIV/AIDS : Adult Mortality 0.696998872374393

Como adult mortality y HIV/AIDS tienen correlacion muy cercana a 0.7, los vamos a tomar en cuenta como otro grupo features de informacion semejante

## Outliers:

Se observa que todos los features tiene outliers a excepcion de Alcohol, BMI e income composition of resources.

Algo para destacar es que existen outliers en under-five deaths e infants deaths que creemos que son a causa de datos erroneos (aclaracion en seccion datos erroneos)

## Datos erroneos:

- India tiene infant death = 1366, pero esta metrica se mide cada 1000 habitantes, por lo que debe ser un dato erroneo o mal interpretado.

- India tiene under-five deaths = 1812.5, pero esta metrica se mide cada 1000 habitantes, por lo que debe ser un dato erroneo o mal interpretado.

## Caracteristicas de paises:

Para analizar las caracteristicas de los paises segun su expectatva de vida, tomamos en cuenta a los paises que estan por encima del 90 percentil (grupo A) y los que estan por debajo del 10 percentil (grupo B).

Lo primero que pudimos notar es que los paises del grupo A en su gran mayoria tiene status de developed. En cambio los paises del grupo B son tienen todos status developing. Tambien pudimos notas que los paises del grupo A son en su mayoria europeos con un alto GDP, y los paises de grupo B son en su mayoria africanos con bajo GDP.

## Datos extras:
- densidad poblacion
- region/continente
- tasa de sucidio