// JavaScript para enviar mensagem de forma suave
document.getElementById('contactForm').addEventListener('submit', function(event) {
    event.preventDefault();

    // Obter valores dos campos
    const nome = document.getElementById('nome').value;
    const email = document.getElementById('email').value;
    const mensagem = document.getElementById('mensagem').value;

    // Validar campos
    if (nome === '' || email === '' || mensagem === '') {
        alert('Por favor, preencha todos os campos.');
        return; // Interrompe o envio se algum campo estiver vazio
    }

    // Exibir dados submetidos
    const submittedData = document.getElementById('submittedData');
    submittedData.innerHTML = `<h3>Dados Submetidos:</h3>
                                <p><strong>Nome:</strong> ${nome}</p>
                                <p><strong>E-mail:</strong> ${email}</p>
                                <p><strong>Mensagem:</strong> ${mensagem}</p>`;
    submittedData.style.display = 'block'; // Mostra a seção com os dados

    alert('Mensagem enviada com sucesso!');

    // Limpa os campos do formulário
    this.reset(); // Limpa todos os campos do formulário
    document.getElementById('messageCounter').textContent = '500 caracteres restantes'; // Reinicia o contador
});

// Contador de caracteres para o campo de mensagem
const mensagemInput = document.getElementById('mensagem');
const messageCounter = document.getElementById('messageCounter');
const maxLength = 500;

mensagemInput.addEventListener('input', function() {
    const remaining = maxLength - this.value.length;
    messageCounter.textContent = `${remaining} caracteres restantes`;
});