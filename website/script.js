var activeButton = document.querySelector('.fadeText');
var activeSectionSecond = document.querySelector('#second');
var activeSectionNorm = document.querySelector('#title');
var activeExplore = document.querySelector('.explore');
setTimeout( function () {
    activeButton.classList.remove("blur-in");
    activeButton.classList.add("blur-out");
    setTimeout( function () {
    activeButton.classList.remove("blur-out");
    activeButton.classList.add("blur-in");
    activeButton.textContent = "Welcome To Our CTF"
    setTimeout( function () {
        activeButton.classList.remove("blur-in");
        activeButton.classList.add("blur-out");
        setTimeout( function () {
            activeButton.classList.remove("blur-out");
            activeButton.classList.add("blur-in");
            activeButton.textContent = "Have Fun";
            activeExplore.classList.remove("hidden");
            activeExplore.classList.add("blur-in");
            activeSectionSecond.classList.remove("hidden");
        }, 1000);
    }, 3000);
    }, 1000);
}, 3000);

function checkVal () {
    var downloadSection = document.querySelector('#download');
    var answer = document.querySelector(".answer").value;
    var login = document.querySelector('.login');
    var title = document.querySelector('.answer-title');
    var check = document.querySelector('.explore2');
    var scroll = document.querySelector('.scroll');

    if (answer === "letmein") {
        downloadSection.classList.remove("hidden");
        login.classList.add("hidden");
        check.classList.add("hidden");
        scroll.classList.remove("hidden");
        title.textContent = "Correct!";
    } else {
        title.textContent = "Incorrect!";
        document.querySelector(".answer").value = "";
    }
}