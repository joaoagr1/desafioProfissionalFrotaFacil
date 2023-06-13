let campoInput = document.querySelector("#filtrar-tabela");
campoInput.addEventListener("input", function () {
  //evento input -> //* escuta evento de digitação
  this.value; //estamos capturando o que é digitado no campo input
  let trPacientes = document.querySelectorAll(".paciente");
  if (this.value.length > 0) {
    for (let i = 0; i < trPacientes.length; i++) {
      let pacientes = trPacientes[i];
      let tdNome = pacientes.querySelector(".info-nome");
      let nome = tdNome.textContent;
      let expressaoRegular = new RegExp(this.value, "i"); // declara uma expressão regular e passa o que ela vai buscar e de que forma com case sentive ou case insensitive

      if (!expressaoRegular.test(nome)) {
        //testa se a expressão regular não pertence a nome, ai adiciona a classe invisivel
        pacientes.classList.add("invisivel");
      } else {
        pacientes.classList.remove("invisivel");
      }
    }
  } else {
    for (let i = 0; i < trPacientes.length; i++) {
      let pacientes = trPacientes[i];
      pacientes.classList.remove("invisivel");
    }
  }
});
