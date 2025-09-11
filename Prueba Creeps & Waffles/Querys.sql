SELECT 
    E.nombre AS empleadonombre,
    E.apellido AS empleadoapellido,
    C.nombrecargo AS cargo,
    A.nombrearea AS area
FROM empleados AS E
JOIN cargos AS C ON E.cargo_id = C.cargo_id
JOIN areas AS A ON E.area_id = A.area_id;


SELECT 
    E.nombre AS empleadonombre,
    E.apellido AS empleadoapellido,
    Co.tipocontrato,
    S.monto AS salario
FROM empleados AS E
JOIN contratos AS Co ON E.contrato_id = Co.contrato_id
JOIN salarios AS S ON E.salario_id = S.salario_id;
