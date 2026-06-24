#include <iostream>
using namespace std;

struct Produto{
    string nome;
    float preco;
    int qtd;
};

int main() {

    Produto p[10];
    int total = 0, op, i, num, venda;

    do{
        cout << "\n=== DOCES E SALGADOS ===\n";
        cout << "1. Cadastrar\n";
        cout << "2. Listar\n";
        cout << "3. Vender\n";
        cout << "4. Sair\n";
        cout << "Opcao: ";
        cin >> op;

        if(op == 1){

            cout << "Nome: ";
            cin >> p[total].nome;

            cout << "Preco: ";
            cin >> p[total].preco;

            cout << "Quantidade: ";
            cin >> p[total].qtd;

            total++;

        }else if(op == 2){

            cout << "\nPRODUTOS\n";

            for(i = 0; i < total; i++){
                cout << i + 1 << " - "
                     << p[i].nome << " | "
                     << p[i].preco << " MT | "
                     << p[i].qtd << " unidades\n";
            }

        }else if(op == 3){

            cout << "Numero do produto: ";
            cin >> num;

            cout << "Quantidade vendida: ";
            cin >> venda;

            if(venda <= p[num-1].qtd){
                p[num-1].qtd -= venda;
                cout << "Venda realizada!\n";
            }else{
                cout << "Stock insuficiente!\n";
            }
        }

    }while(op != 4);

    cout << "Programa encerrado!\n";

    return 0;
}