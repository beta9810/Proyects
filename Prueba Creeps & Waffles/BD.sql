-- Crear la tabla Cargos
CREATE TABLE cargos (
    cargo_id INT PRIMARY KEY,
    nombrecargo VARCHAR(255)
);

-- Crear la tabla Contratos
CREATE TABLE contratos (
    contrato_id INT PRIMARY KEY,
    tipocontrato VARCHAR(255),
    fechainicio DATE,
    fechafin DATE
);

-- Crear la tabla País
CREATE TABLE pais (
    pais_id INT PRIMARY KEY,
    nombrepais VARCHAR(255)
);

-- Crear la tabla Departamento
CREATE TABLE departamento (
    departamento_id INT PRIMARY KEY,
    nombredepartamento VARCHAR(255),
    pais_id INT,
    FOREIGN KEY (pais_id) REFERENCES pais(pais_id)
);

-- Crear la tabla Municipio
CREATE TABLE municipio (
    municipio_id INT PRIMARY KEY,
    nombremunicipio VARCHAR(255),
    departamento_id INT,
    FOREIGN KEY (departamento_id) REFERENCES departamento(departamento_id)
);

-- Crear la tabla Áreas
CREATE TABLE areas (
    area_id INT PRIMARY KEY,
    nombrearea VARCHAR(255),
    departamento_id INT,
    FOREIGN KEY (departamento_id) REFERENCES departamento(departamento_id)
);

-- Crear la tabla Salarios
CREATE TABLE salarios (
    salario_id INT PRIMARY KEY,
    monto DECIMAL(10, 2)
);

-- Crear la tabla Empleados
CREATE TABLE empleados (
    empleado_id INT PRIMARY KEY,
    nombre VARCHAR(255),
    apellido VARCHAR(255),
    fechanacimiento DATE,
    sexo VARCHAR(1),
    dirección VARCHAR(255),
    teléfono VARCHAR(15),
    email VARCHAR(255),
    cargo_id INT,
    contrato_id INT,
    area_id INT,
    salario_id INT,
    FOREIGN KEY (cargo_id) REFERENCES cargos(cargo_id),
    FOREIGN KEY (contrato_id) REFERENCES contratos(contrato_id),
    FOREIGN KEY (area_id) REFERENCES areas(area_id),
    FOREIGN KEY (salario_id) REFERENCES salarios(salario_id)
);




-- Datos para la tabla Cargos
INSERT INTO cargos (cargo_id, nombrecargo) VALUES
(1, 'Gerente'),
(2, 'Desarrollador'),
(3, 'Contador');

-- Datos para la tabla Contratos
INSERT INTO contratos (contrato_id, tipocontrato, fechainicio, fechafin) VALUES
(1, 'Indefinido', '2022-01-01', NULL),
(2, 'Temporal', '2022-02-01', '2023-02-01');

-- Datos para la tabla País
INSERT INTO pais (pais_id, nombrepais) VALUES
(1, 'México'),
(2, 'Estados Unidos');

-- Datos para la tabla Departamento
INSERT INTO departamento (departamento_id, nombredepartamento, pais_id) VALUES
(1, 'Desarrollo', 1),
(2, 'Contabilidad', 1),
(3, 'Recursos Humanos', 2);

-- Datos para la tabla Municipio
INSERT INTO municipio (municipio_id, nombremunicipio, departamento_id) VALUES
(1, 'Ciudad de México', 1),
(2, 'Guadalajara', 1),
(3, 'Monterrey', 1),
(4, 'Los Angeles', 3),
(5, 'Nueva York', 3);

-- Datos para la tabla Áreas
INSERT INTO areas (area_id, nombrearea, departamento_id) VALUES
(1, 'Desarrollo de Software', 1),
(2, 'Contabilidad General', 2),
(3, 'Recursos Humanos', 3);

-- Datos para la tabla Salarios
INSERT INTO salarios (salario_id, monto) VALUES
(1, 50000),
(2, 60000),
(3, 70000);

-- Datos para la tabla Empleados
INSERT INTO empleados (empleado_id, nombre, apellido, fechanacimiento, sexo, dirección, teléfono, email, cargo_id, contrato_id, area_id, salario_id) VALUES
(1, 'Juan', 'Pérez', '1990-05-15', 'M', 'Av. Principal 123', '555-1234', 'juan@email.com', 1, 1, 1, 1),
(2, 'María', 'Gómez', '1985-08-20', 'F', 'Calle Secundaria 456', '555-5678', 'maria@email.com', 2, 2, 1, 2),
(3, 'Pedro', 'López', '1995-02-10', 'M', 'Av. Central 789', '555-9876', 'pedro@email.com', 3, 1, 2, 3);
