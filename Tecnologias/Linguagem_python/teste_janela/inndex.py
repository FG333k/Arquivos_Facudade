from tkinter import *

def reinicializar():
    #janela.destroy()  # Fecha a janela atual
    criar_nova_janela()  # Abre uma nova idêntica

def criar_nova_janela():
    global janela  # Permite reutilizar a variável 'janela'

    # Cria uma nova janela com as mesmas configurações
    janela = Tk()
    janela.geometry("200x100")
    janela.title("3Rя0")
    janela.resizable(width=False, height=False)
    janela.configure(background="red")
    janela.iconbitmap(default="skull-icon-default.ico")  # Descomente se o ícone existir

    # Botão "SAIR" que reinicia a janela
    botao_sair = Button(
        janela,
        text="SAIR",
        bg="white",
        fg="black",
        width=15,
        command=reinicializar
    )
    botao_sair.place(x=45, y=40)

    janela.mainloop()

# Inicia a primeira janela
criar_nova_janela()