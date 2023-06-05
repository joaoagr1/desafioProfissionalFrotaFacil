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
var contErro = 0;
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
      // console.log("Errou");
      // erro.push("Matrícula e/ou senha inválidas");
      // erro.push(`Tentativas restantes ${contErro}`);
      // console.log(erro);
      // exibeErro(erro);
      // contErro++;
      let lis = document.querySelectorAll("li");
      lis.classList.remove("test");
      
    }

    if (contErro == 3) {
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

//*CAPTURA ERROS
// function validaCampos() {

//   erro.push("Matrícula e/ou senha inválidas")
//   erro.push(`Tentativas restantes ${contErro}`)

//   return erro;
// }

function exibeErro() {
  ul.innerHTML = "";
  // erros.forEach((el) => {
  let li = document.createElement("li");
  li.textContent = erro[0];
  ul.appendChild(li);
  let li2 = document.createElement("li");
  li2.textContent = erro[1];
  ul.appendChild(li2);
    // });
  // }
}

function showMessage(message) {
  document.getElementById("message").innerHTML = message;
}

function reloadPage() {
  location.reload();
}
