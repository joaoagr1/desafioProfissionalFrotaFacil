document
  .getElementById("loginForm")
  .addEventListener("submit", function (event) {
    event.preventDefault();
    Swal.fire(
        'Nova senha enviada!',
        'You clicked the button!',
        'success'
      )
  });