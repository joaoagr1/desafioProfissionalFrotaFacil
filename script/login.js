// Objeto para armazenar os usuários registrados
var registeredUsers = {
  2223: {
    username: "2223",
    password: "123",
  },
  511712: {
    username: "511712",
    password: "vini123",
  },
};
var contErro = 3;
let erro = [];
let ul = document.querySelector("#campo-erros");

console.log(registeredUsers);

document
  .getElementById("loginForm")
  .addEventListener("submit", function (event) {
    event.preventDefault(); // Impede o envio do formulário

    var username = document.getElementById("matricula").value;
    var password = document.getElementById("senha").value;

    // Verifica se o login e a senha correspondem a um usuário válido

    if (checkCredentials(username, password)) {
      showMessage("Login realizado com sucesso.");
      window.open("./logado.html");
    } else if (!checkCredentials(username, password)) {
      contErro--;
      mensagemErro();
    }

    if (contErro == 0) {
      alert("teste");
      contErro == 0;
      reloadPage();
    }
  });

function checkCredentials(username, password) {
  // Verifica se o login e a senha correspon dem a um usuário válido
  var user = registeredUsers[username];
  return user && user.password === password;
}

function showMessage(message) {
  document.getElementById("message").innerHTML = message;
}

function reloadPage() {
  location.reload();
}

function mensagemErro() {
  Swal.fire(
    "Credenciais Inválidas",
    `Tentativas restantes ${contErro}`,
    "error"
  );
}
