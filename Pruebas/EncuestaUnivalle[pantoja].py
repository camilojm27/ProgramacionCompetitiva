# Python 3.7.2 (tags/v3.7.2:9a3ffc0492, Dec 23 2018, 22:20:52) [MSC v.1916 32 bit (Intel)] on win32
# Type "help", "copyright", "credits" or "license()" for more information.

casos = int(input("Ingrese el número de casos "))
estudiante, profesores, pAdministrativo, tipo, edades = 0, 0, 0, 0, 0
piscina, Medico, cFutbol, Egym, gym, dMedico = 0, 0, 0, 0, 0, 0
for i in range(casos):
    tipo = int(input("Digite un número correspondiente al rol cumple dentro de la Universidad del Valle \n1 : Estudiante \n2 : Docente \n3 : Personal Administrativo \n"))
    if tipo == 1:

        servicio = int(input(
            "Cuál de los siguientes servicios prefiere \n1 : Piscina\n2 : Servicio Médico\n3 : Cancha de futbol\n4 : Gimnasio\n "))
        if servicio == 1:
            piscina = piscina + 1
        elif servicio == 2:
            Medico = Medico + 1
        elif servicio == 3:
            cFutbol = cFutbol + 1
        elif servicio == 4:
            gym = gym + 1
            Egym = Egym + 1
    elif tipo == 2:
        servicio = int(input(
            "Cuál de los siguientes servicios prefiere \n1 : Piscina\n2 : Servicio Médico\n3 : Cancha de futbol\n4 : Gimnasio\n "))
        if servicio == 1:
            piscina = piscina + 1
        elif servicio == 2:
            Medico = Medico + 1
            dMedico = dMedico + 1

        elif servicio == 3:
            cFutbol = cFutbol + 1
        elif servicio == 4:
            gym = gym + 1

    elif tipo == 3:
        servicio = int(input(
            "Cuál de los siguientes servicios prefiere \n1 : Piscina\n2 : Servicio Médico\n3 : Cancha de futbol\n4 : Gimnasio\n "))
        if servicio == 1:
            piscina = piscina + 1
        elif servicio == 2:
            Medico = Medico + 1

        elif servicio == 3:
            cFutbol = cFutbol + 1
        elif servicio == 4:
            gym = gym + 1

    else:
        print("Ingrese un valor valido!!")
        break

    edades = edades + int(input("Digite su edad : "))


print("La cantidad de docentes que prefieren el servicio medico es de", dMedico)
print("La catidad de estudiantes que prefieren el gimnacio es de ", Egym)
print("La edad promedio de las personas encuestadas en de ",
      int(edades/casos), " años")
