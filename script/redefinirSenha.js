document
  .getElementById("loginForm")
  .addEventListener("submit", function (event) {
    event.preventDefault();
    
    Swal.fire({
      icon : 'success',
      title: 'Senha Enviada!',
      text: 'Nova senha enviada por email',
      footer: '<a href="../pages/login.html">Retornar a tela de login</a>'
    })
  });