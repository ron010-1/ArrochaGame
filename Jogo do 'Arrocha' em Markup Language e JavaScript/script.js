let numMin = document.getElementById("min");
        let numMax = document.getElementById("max");
        let pRes = document.getElementById("res");
        let botao = document.getElementById("botao");
        let div1 = document.getElementById("caixaPrimaria");
        let div2 = document.getElementById("caixaSecundaria");
        let div3 = document.getElementById("caixaTerciaria");
        let divGanhador = document.getElementById("caixaGanhador");
        //Variáveis de Controle
        let valor, contadorJogadas = 0;

        function iniciar() {
            valor = numeroAleatorio();
            //AO clicar no botão a div do Jogo aparece.
            if (div2.style.display === 'block' && div3.style.display === 'block') {
                div1.style.display = 'block';
                div2.style.display = 'none';
                div3.style.display = 'none';
            } else {
                div1.style.display = 'none';
                div2.style.display = 'block';
                div3.style.display = 'block';
            }
            console.log("Esse é o valor: ", valor);
        }
        function reiniciar() {
            //Trocando para a div aparecer e as outras duas sumirem.
            div1.style.display = 'block';
            div2.style.display = 'none';
            div3.style.display = 'none';
            div4.style.display = 'none';
        }

        function numeroAleatorio() {
            return Math.floor(Math.random() * 101);
        }

        function verificar() {
            let numUser = Number(document.getElementById("num").value);
            contadorJogadas++; //Atualizando variável de jogadas.
            console.log(valor);
            if (numUser < valor) {
                numMin.innerHTML = numUser.toString();
                if ((Number(numMax.innerHTML) - Number(numMin.innerHTML)) == 2) {
                    divGanhador.style.display = 'block';
                    pRes.innerHTML = `O valor era ${valor}, e você precisou de ${contadorJogadas} jogadas para descobrir!<br> <h2>Você é um arrochado!</h2>`;
                }
            } else if (numUser > valor) {
                numMax.innerHTML = numUser.toString();
                if ((Number(numMax.innerHTML) - Number(numMin.innerHTML)) == 2) {
                    divGanhador.style.display = 'block';
                    pRes.innerHTML = `O valor era ${valor}, e você precisou de ${contadorJogadas} jogadas para descobrir!<br> <h2>Você é um arrochado!</h2>`;
                }
            } else {
                window.alert("Você perdeu!");
                numMin.innerHTML = `0`;
                numMax.innerHTML = `0`;
            }
            
        }