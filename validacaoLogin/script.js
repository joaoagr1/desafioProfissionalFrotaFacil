// Objeto para armazenar os usuários registrados
var registeredUsers = {};
var contErro = 0;

document.getElementById("loginForm").addEventListener("submit", function(event) {
  event.preventDefault(); // Impede o envio do formulário

  var username = document.getElementById("loginUsername").value;
  var password = document.getElementById("loginPassword").value;

  // Verifica se o login e a senha correspondem a um usuário válido
  
  if (checkCredentials(username, password)) {
    showMessage("Login realizado com sucesso.")
window.open("/home/joaoagr1/Repositórios/Javascript/frotaFacilEU/logado.html");
;
  } else {
    showMessage("Credenciais inválidas. Tente novamente.");
  contErro++;}

  if (contErro==3) {
    alert('teste');
    contErro==0;
    reloadPage();
  }

});

document.getElementById("registerForm").addEventListener("submit", function(event) {
  event.preventDefault(); // Impede o envio do formulário
                          // Impede que a página seja atualizada com o envio do formulário

  var username = document.getElementById("registerUsername").value;
  var password = document.getElementById("registerPassword").value;

  // Registra um novo usuário
  registerUser(username, password);
});

function checkCredentials(username, password) {
  // Verifica se o login e a senha correspondem a um usuário válido
  var user = registeredUsers[username];
  return user && user.password === password;
}

function registerUser(username, password) {
  // Verifica se o usuário já está registrado
  if (registeredUsers[username]) {
    showMessage("Usuário já registrado. Tente outro nome de usuário.");
  } else {
    // Registra o novo usuário
    registeredUsers[username] = {
      username: username,
      password: password
    };
    showMessage("Novo usuário registrado com sucesso.");
  }
}

function showMessage(message) {
  document.getElementById("message").innerHTML = message;
}
  

function reloadPage() {
  location.reload();
}