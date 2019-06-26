from sys import stdin

remplazo = '"'

for line in stdin:

    entrada = str(line)
    salida = entrada.replace(remplazo, "``")


    print(salida)
