// Objeto para armazenar os usuários registrados
var registeredUsers = {
  2223: {
    username: "2223",
    password: "123",
    tipoColaborador : 2
  },
  511712: {
    username: "511712",
    password: "vini123",
    tipoColaborador : 1
  },
};
var contErro = 3;
let erro = [];
let ul = document.querySelector("#campo-erros");
let tipoUser = 0;

console.log(registeredUsers);

document
  .getElementById("loginForm")
  .addEventListener("submit", function (event) {
    event.preventDefault(); // Impede o envio do formulário

    var username = document.getElementById("matricula").value;
    var password = document.getElementById("senha").value;

    // Verifica se o login e a senha correspondem a um usuário válido

    if (checkCredentials(username, password,tipoUser)) {
      showMessage("Login realizado com sucesso.");
      console.log(username);
      if(registeredUsers[username].tipoColaborador > 1) {
        window.open("./user/logado.html");
      }
      else {
        window.open("./adm/inicialAdm.html");
      }
      // if(tipo > 1) {
      //   window.open("./logado.html");
      // } else {
      //   window.open("./admlogado.html")
      // }
     
      //console.log(`Tipo de usuário ${tipoUser}`);
    } else if (!checkCredentials(username, password)) {
      contErro--;
      mensagemErro();

    }

    if (contErro == 0) {
      mensagemLimiteTentativas();
      contErro = 3;
    }
  });

function checkCredentials(username, password, tipoUser) {
  // Verifica se o login e a senha correspon dem a um usuário válido
  var user = registeredUsers[username];
  var tipo = user.tipoColaborador;
  tipoUser = tipo;
  // console.log(`Tipo de usuário ${tipo}`);
  return user && tipoUser &&  user.password === password;
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

function mensagemLimiteTentativas() {
  let timerInterval;
      
      Swal.fire({
        icon: "warning",
        title: "Número de tentativas atingido!",
        html: "Aguarde <strong></strong> segundos para tentar novamente.",
        timer: 100000,
        didOpen: () => {
          const content = Swal.getHtmlContainer();
          const $ = content.querySelector.bind(content);

          Swal.showLoading();

          timerInterval = setInterval(() => {
            Swal.getHtmlContainer().querySelector("strong").textContent = (
              Swal.getTimerLeft() / 1000
            ).toFixed(0);
          }, 100);
        },
        willClose: () => {
          clearInterval(timerInterval);
        },
      });
}