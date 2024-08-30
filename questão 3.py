import json

def processar_dados(dados):
    valores = [item['valor'] for item in dados]
    
    if not valores:
        print("Nenhum dado disponível.")
        return
    
    maior = max(valores)
    valores_positivos = [valor for valor in valores if valor > 0]
    menor = min(valores_positivos) if valores_positivos else 0
    soma = sum(valores)
    media = soma / len(valores) if valores else 0
    maior_que_media = [valor for valor in valores if valor > media]

    # Formatando números com duas casas decimais
    formatador = lambda x: f"{x:.2f}"

    maior_formatado = formatador(maior)
    menor_formatado = formatador(menor)
    soma_formatada = formatador(soma)
    media_formatada = formatador(media)
    maior_que_media_formatado = [formatador(valor) for valor in maior_que_media]

    print(f"Total: {soma_formatada}")
    print(f"Maior valor: {maior_formatado}")
    print(f"Menor valor: {menor_formatado}")
    print(f"Média mensal: {media_formatada}")
    print(f"Quantidade de valores maiores que a média: {len(maior_que_media_formatado)}")

def ler_dados_arquivo(caminho_arquivo):
    with open(caminho_arquivo, 'r') as arquivo:
        dados = json.load(arquivo)
    return dados

def main():
    caminho_arquivo = 'dados.json'
    dados = ler_dados_arquivo(caminho_arquivo)
    processar_dados(dados)

if __name__ == "__main__":
    main()


