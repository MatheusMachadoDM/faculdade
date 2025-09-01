package com.example.aula08

import android.os.Bundle
import android.widget.Toast
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.ExperimentalFoundationApi
import androidx.compose.foundation.combinedClickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material3.Button
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.style.TextDecoration
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.example.aula08.ui.theme.Aula08Theme

data class CompraItem(
    val id: Long,
    val nome: String,
    val marcado: Boolean = false
)


class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            ListaDeCompras()
        }
    }
}

@Preview(showBackground = true)
@Composable
fun PreviewLayout() {
    ListaDeCompras()
}

@OptIn(ExperimentalMaterial3Api::class)
@Composable
fun ListaDeCompras() {

    // texto = variável associada ao text field
    var texto by remember { mutableStateOf("") }
    val context = LocalContext.current // captura o contexto (tela em que se encontra)

    // itens: lista mutável de objetos do tipo CompraItem
    // esta lista servirá para popularmos a lazzy column
    var itens = remember { mutableStateListOf<CompraItem>() }

    Column (modifier = Modifier
        .fillMaxSize()
        .padding(15.dp),
        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.spacedBy(10.dp)) {

        Text(text = "Lista de Compras", fontSize = 30.sp)

        Row (verticalAlignment = Alignment.CenterVertically){

           OutlinedTextField(value = texto , 
               onValueChange = { texto = it },
               singleLine = true,
               label = { Text(text = "Novo Item") },
               modifier = Modifier.weight(1f))

            Spacer(modifier = Modifier.width(8.dp))

            Button( onClick = {

                val nome = texto.trim()

                if (nome.isNotEmpty()){

                    for (produto in itens) {
                        if (produto.nome.lowercase() == nome.lowercase()) {
                            Toast.makeText(context, "Produto já adicionado!", Toast.LENGTH_SHORT).show()
                            return@Button // finalizar a ação do botão
                        }
                    }

                    // gerar um id unico o produto que digitei
                    // com base no tempo atual do sistema
                    val id = System.currentTimeMillis()

                    // cria data objet do tipo CompraItem usando o id gerado
                    // e o nome do produto digitado e já livre de espaços em branco adicionais
                    val produto = CompraItem(id, nome)

                    // adiciona o produto na lista
                    itens.add(produto)

                    // limpar a variavel texto
                    texto = ""
                }


            }) {
                Text(text = "Adicionar")
            }

        }// fim da row

        LazyColumn(modifier = Modifier
            .fillMaxWidth()
            .weight(1f),
            verticalArrangement = Arrangement.spacedBy(5.dp)) {

            // abaixo, setamos nossa lsita de itens de compra como
            // o dataset da nossa lazy column
                items(itens) {

                    // itemAtual: objeto do tipo CompraItem que
                    // irá iterar a lista de itens e desenhar os
                    // elementos da lista na tela
                    itemAtual ->

                    // agora, vamos informar como queremos desenhar
                    // os itens desta lista na tela.
                    // para isso, vamos chamar, nosso layout da lista
                    ItemDaLista(
                        item = itemAtual,
                        onDelete = {
                            itens.remove(itemAtual)
                        },
                        onToggle = {

                            val index = itens.indexOfFirst { it.id == itemAtual.id }

                            if (index != -1) {
                                val produtoAtual = itens[index]
                                itens[index] = produtoAtual.copy(marcado = !produtoAtual.marcado)
                            }

                        }
                    )

                }

        } // fim lazy column

        Button(modifier = Modifier.fillMaxWidth(),
            enabled = itens.isNotEmpty(),
            onClick = {

                itens.clear() // limpando a lista de itens de compra, a lazy colum
                // será atualziada automaticamente
                texto = ""

            },) {

                Text(text = "Apagar Tudo", fontSize = 25.sp)

        }

    }

}

@OptIn(ExperimentalFoundationApi::class)
@Composable
fun ItemDaLista(
    item : CompraItem,
    onDelete : () -> Unit,
    onToggle: () -> Unit
){

    Row (modifier = Modifier
        .fillMaxWidth()
        .padding(5.dp)
        .combinedClickable(
            onClick = onToggle,
            onLongClick = onDelete
        )){

        // define s eo texto estará riscado ou não
        val textoRiscado = if (item.marcado) TextDecoration.LineThrough else TextDecoration.None
        // define a cor do texto: riscado = cinza; normal = preto
        val corTexto = if(item.marcado) Color.Gray else Color.Black

        Text(text = item.nome, fontSize = 18.sp, textDecoration = textoRiscado, color = corTexto )

    }

}

