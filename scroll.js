document.addEventListener('scroll', () => {
    const header = document.querySelector("#scrolled");
    if(window.scrollY > 0) {
        header.classList.add('scrolled');
    } else {
        header.classList.remove('scrolled');
    }

})