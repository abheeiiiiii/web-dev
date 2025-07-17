function submitForm(event) {
  event.preventDefault();

  const name = document.querySelector("input[name='name']").value;
  const email = document.querySelector("input[name='email']").value;
  const message = document.querySelector("textarea[name='message']").value;

  const form = event.target;

  // WhatsApp message
  const whatsappMessage = `Hello Abhinav,\n\nYou received a new contact form submission:\n\nName: ${name}\nEmail: ${email}\nMessage: ${message}`;
  const encodedMsg = encodeURIComponent(whatsappMessage);
  const whatsappURL = `https://wa.me/917439022306?text=${encodedMsg}`;

  // Submit form to email (FormSubmit)
  form.submit();

  // Also open WhatsApp
  setTimeout(() => {
    window.open(whatsappURL, "_blank");
  }, 500);
}

const themeIcon = document.getElementById("themeIcon");

function setTheme(isDark) {
  if (isDark) {
    document.body.classList.add("dark");
    themeIcon.textContent = "🌞";
    localStorage.setItem("theme", "dark");
  } else {
    document.body.classList.remove("dark");
    themeIcon.textContent = "🌙";
    localStorage.setItem("theme", "light");
  }
}

if (localStorage.getItem("theme") === "dark") {
  setTheme(true);
} else {
  setTheme(false);
}

themeIcon.addEventListener("click", () => {
  const isDark = document.body.classList.contains("dark");
  setTheme(!isDark);
});

const text = "Abhinav Tiwari";
const typedText = document.getElementById("typedText");
let index = 0;

function typeWriter() {
  if (index < text.length) {
    typedText.textContent += text.charAt(index);
    index++;
    setTimeout(typeWriter, 100);
  }
}

window.onload = () => {
  typeWriter();
};
