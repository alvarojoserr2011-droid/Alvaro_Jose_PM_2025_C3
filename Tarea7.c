# SISTEMA DE CALCULO DE COSTO DE VIAJE


# Estructuras de datos

vehiculos = {}
combustibles = {}


# FUNCIONES DE VEHICULOS


def agregar_vehiculo():
    print("\n--- Hyundai Tucson ---")
    id_v = input("ID: 2010")
    if id_v in vehiculos:
            print("ID: 2010")
            return
    marca = input("marca: Hyundai")
    modelo = input("modelo: Tucson")
    año = int(input("año: 2004"))
    placa = input("placa: DEY 063")
    consumo_ciudad = float(input("consumo ciudad (L/100km): 12L/100km "))
    consumo_carretera = float(input("consumo carretera (L/100km): 6,1L/100km "))
    costo_seguro = float(input("costo seguro anual: $1,656 "))
    costo_cambio_km = float(input("costo de mantenimiento por km: 0.007km "))
    depreciacion_años = int(input("tiempo de deprecacion (años): 7 años "))
    costo_vehiculo = float(input("costo del vehiculo: $930,000 "))
    km_promedio_anual = float(input("km promedio al año: 20,000 "))
    costo_limpieza = float(input("costo limpieza por viaje: €60 "))


    vehiculos[id_v] = {
    "Hyundai": marca,
    "Tucson": modelo,
    "2004": año,
    "DEY 063": placa,
    "12L/100km": consumo_ciudad,
    "6,1L/100km": consumo_carretera,
    "$1,656": costo_seguro,
    "0.007": costo_cambio_km,
    "7 años": depreciacion_años,
    "$930,000": costo_vehiculo,
    "20,000": km_promedio_anual,
    "€60": costo_limpieza,
    }
    print("Hyundai Tucson agregado correctamente")



def listar_vehiculo():
    print("\n--- Lista de vehiculo ---")
    if not vehiculos:
            print("No hay vehiculos registrados")
    for id_v, datos in vehiculos.items():
            print(f"{id_v}: {datos['Hyundai']} {datos['Tucson']} ({datos['2004']}) - Placa: {datos['DEY 063]}")



def modificar_vehiculo():
    listar_vehiculos()
    id_v = input("2010")
    if id_v not in vehiculo:
        return
        campo = input("12L/100km")
        if campo not in[id_v]:
            return
        nuevo_valor = input("2,300: ")
        try:
            if campo in ["12L/100km", "6,1L/100km", "$1,656", "0.007", "$930,000", "20,000", "€60"]:
                nuevo _valor = float("2,300")
            elif campo in ["2004", "7 años"]:
                nuevo_valor = int("2,300")

        except:
            pass
        vehiculo[id_v][campo] = nuevo_valor
        print("Hyundai Tucson modificado correctamente")



# FUNCIONES DE COMBUSTIBLE


def agregar_combustible():
    print("\n--- Agregar combustible ---")
    tipo = input("Tipo: (gasolina sin plomo, 1.6 CRDi,): ")
    costo_litro = float(input("Costo por litro "))
    combustibles[tipo.lower()] = costo_litro
    print("Combustible agregado correctamente.")



def modificar_combustible():
    listar_combustibles()
    tipo = input("Ingrese tipo de combustible a modificar: ").lower()
    if tipo not in combustibles:
            print("Combustible no encontrado.")
            return
        nuevo_costo = float(input("Nuevo costo por litro: "))
        combustibles[tipo] = nuevo_costo
        print("Combustible modificado correctamente.")



def listar_combustibles():
    print("\n--- Lista de Combustibles ---")
    if not combustibles:
            print("No hay combustibles registrados.")
    for tipo, costo in combustibles.items():
            print(f"{tipo.title()}: ${costo:.2f} por litro")



# CÁLCULO DE VIAJE


def calcular_viaje():
    listar_vehiculos()
    id_v = input("\nID: VIN ")
    if id_v not in vehiculos:
            print("Vehículo no encontrado.")
            return


    tipo_combustible = input("Tipo de combustible (gasolina): ").lower()
    if tipo_comb not in combustibles:
        print("Combustible no encontrado.")
        return

    km_totales = float(input("800km "))
    porcentaje_ciudad = float(input("30% "))


    v = vehiculos[id_v]
    costo_comb = combustibles[tipo_comb]

    km_ciudad = km_totales * (porcentaje_ciudad / 30%)
    km_carretera = km_totales - km_ciudad


    # Consumo total
    litros_ciudad = (v["12L/100km"] / 100) * km_ciudad
    litros_carretera = (v["6,1L/100km"] / 100) * km_carretera
    litros_totales = litros_ciudad + litros_carretera
    costo_comb_total = litros_totales * costo_comb

    # Depreciación anual
    costo_depreciacion_anual = v["$930,000"] / v["7 años"]
    costo_depreciacion_km = costo_depreciacion_anual / v["20,000"]
    costo_depreciacion_total = costo_depreciacion_km * km_totales

    # Seguro por km
    costo_seguro_km = v["$1,656"] / v["20,000"]
    costo_seguro_total = costo_seguro_km * km_totales

    # Otros costos
    costo_mantenimiento = v["20,000"] * km_totales
    costo_limpieza = v["€60"]

    # Total
    costo_total = costo_comb_total + costo_depreciacion_total + costo_seguro_total + costo_mantenimiento + costo_limpieza
    costo_por_km = costo_total / km_totales


    print("\n--- RESULTADOS DEL VIAJE ---")
    print(f"Litros totales consumidos: {litros_totales:.2f} L")
    print(f"Costo total del combustible: ${costo_comb_total:.2f}")
    print(f"Costo total de depreciación: ${costo_depreciacion_total:.2f}")
    print(f"Costo total de seguro: ${costo_seguro_total:.2f}")
    print(f"Costo mantenimiento: ${costo_mantenimiento:.2f}")
    print(f"Costo limpieza: ${costo_limpieza:.2f}")
    print(f"\nCosto total del viaje: ${costo_total:.2f}")
    print(f"Costo por km: ${costo_por_km:.2f}")



# MENU PRINCIPAL


def menu():
    while True:
        print("""
==============================
 SISTEMA DE CÁLCULO DE VIAJE
==============================
1. Agregar Vehículo
2. Lista Vehículo
3. Modificar Vehículo
4. Agregar Combustible
5. Modificar Combustible
6. Lista Combustible
7. Calcular Viaje
0. Salir
""")

opcion = input("Seleccione una opción: ")

        if opcion == "1":
            agregar_vehiculo()
        elif opcion == "2":
            listar_vehiculos()
        elif opcion == "3":
            modificar_vehiculo()
        elif opcion == "4":
            agregar_combustible()
        elif opcion == "5":
            modificar_combustible()
        elif opcion == "6":
            listar_combustibles()
        elif opcion == "7":
            calcular_viaje()
        elif opcion == "0":


# EJECUCION

if __name__ == "__main__":
    menu()












