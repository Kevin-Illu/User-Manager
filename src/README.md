# DISEÑO DE LA APLICACION
para esta aplicacion quise saber un poco mas del
patron REDUX, me base en la logica de este para
estructurar esta aplicacion, a continuacion se
presenta la estructura.

### VIEW
la vista en mi aplicacion esta formada por.

- la representacion de los datos (screen).
- la entrada del usuario (custom input).

### ACTION
las acciones seran las que el usuario ingrese por
el input estas pueden ser las siguientes.

- DATABASE
  - create
  - read
  - update
  - delete
- APP OPTIONS
  - change theme
  - change user data

### DISPACHER
este se encarga de despachar la acccion que genere
el input y se la pasara al REDUCER correspondiente.

### REDUCER
cada modulo tendra su propio REDUCER el cual se encargara
de realizar la accion solicitada.
