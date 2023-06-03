// Objeto para armazenar os usuários registrados
var registeredUsers = {
    2223 : {
      username :'2223',
      password: '123'
    },
    511712 : {
    username : '511712',
    password : 'vini123'
    }
  };
  var contErro = 0;
  
  console.log(registeredUsers)
  
  document.getElementById("loginForm").addEventListener("submit", function(event) {
    event.preventDefault(); // Impede o envio do formulário
  
    var username = document.getElementById("matricula").value;
    var password = document.getElementById("senha").value;
  
    // Verifica se o login e a senha correspondem a um usuário válido
    
    if (checkCredentials(username, password)) {
      showMessage("Login realizado com sucesso.")
  window.open("./logado.html");
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
  
  // document.getElementById("registerForm").addEventListener("submit", function(event) {
  //   event.preventDefault(); // Impede o envio do formulário
  //                           // Impede que a página seja atualizada com o envio do formulário
  
  //   var username = document.getElementById("registerUsername").value;
  //   var password = document.getElementById("registerPassword").value;
  
  //   // Registra um novo usuário
  //   registerUser(username, password);
  // });
  
  function checkCredentials(username, password) {
    // Verifica se o login e a senha correspon dem a um usuário válido
    var user = registeredUsers[username];
    return user && user.password === password;
  }
  
  // function registerUser(username, password) {
  //   // Verifica se o usuário já está registrado
  //   if (registeredUsers[username]) {
  //     showMessage("Usuário já registrado. Tente outro nome de usuário.");
  //   } else {
  //     // Registra o novo usuário
  //     registeredUsers[username] = {
  //       username: username,
  //       password: password
  //     };
  //     showMessage("Novo usuário registrado com sucesso.");
  //   }
  //   console.log(registeredUsers)
  // }
  
  function showMessage(message) {
    document.getElementById("message").innerHTML = message;
  }
    
  
  function reloadPage() {
    location.reload();
  }