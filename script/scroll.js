document.addEventListener("scroll", () => {
  const header = document.querySelector(".container");
  const hamburguer = document.querySelector(".nav-menu");
  if (window.scrollY > 0) {
    header.classList.add("scrolled");
  } else {
    header.classList.remove("scrolled");
  }
});
