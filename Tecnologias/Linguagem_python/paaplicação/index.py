from tkinter import * # Importação da bilioteca tinker
import banco # Importação do codigo do banco de dados
from tkinter import messagebox # Importação de uma função esppeifica da biblioteca tinker

#Formatação da janela
jan = Tk() #Atribuição da variavel a janela
jan.geometry("600x300") # Definine o tamano da janela
jan.title("Login...") # Defnfine o nome do titulo da janela 
jan.resizable(width=False, height=False) # Limita o dimencionamento da janela 
jan.configure(background="black") # Aplica a cor ao fundo da janela
jan.iconbitmap(default="skull-icon-default.ico") # Configura a imagem a ser exibida no icone da jalena

#lado esquerdo:
lframe = Frame(jan, width=300, height=300, bg="black") # Atribui a variavel tamanho e cor 
lframe.pack(side="left") # Indica a posição na janela

logo = PhotoImage(file="caveira_01.gif") # Atribui uma imagem a uma variavel
logol = Label(lframe, image=logo, bg="black") # Insere a variavel(imagem) na janela
logol.place(x=40, y=50) # Exibe a imagem na posição determinada

titulo = Label(lframe, text="HELO-WORD", fg="white", bg="black", font=("monospace", 15,  "bold")) # Insre um título na janela 
titulo.place(x=100, y=20) # Exibe o título na posição determinada

#Lado direito
rframe = Frame(jan, width=395, height=300, bg="black") # Atribui a variavel tamanho e cor 
rframe.pack(side="right") # Indica a posição na janela

#Input login
loginl = Label(rframe, text="login", fg="white", bg="black") # insere uma label 
loginl.place(x=10, y=140) # Exibe a label na posição determinada 
logini = Entry(rframe, width=35) # Insere uma caixa de texto 
logini.place(x=50, y=140) # Exibe a caixa de texto na posição determinada

#Input senha
senhal = Label(rframe, text="Sanha", fg="white", bg="black") # insere uma label
senhal.place(x=7, y=170) # Exibe a label na posição determinada
senhai = Entry(rframe, width=35) # Insere uma caixa de texto
senhai.place(x=50, y=170) # Exibe a caixa de texto na posição determinada

#Caixa com as listas de cadastros
listbox = Listbox(rframe, width=45, height=7) # Insere uma caixa de listas
listbox.place(x=5, y=6) # Exibe na posição determinada 

# Função login
def Login():
    # Atribuição das variaveis 
    login = logini.get() 
    senha = senhai.get() 

    # Verificação de login
    banco.sql.execute("""
    SELECT * FROM login WHERE (login = ? and senha = ?)
    """, (login, senha))
    dados = banco.sql.fetchone() # Seeciona apenas uma linha no banco de dados

    # Condições para login
    try:
        if(login in dados and senha in dados):
            messagebox.showinfo(title='Login', message='Seja bem vindo: '+login) # Exibe uma mensagem de boas vindas com o nome do login

            # Limpa os campos antes preenchidos
            logini.delete(0,END)
            senhai.delete(0,END)
    except:
        messagebox.showinfo(title='Login', message='Usuário inexistente! ') # Exibe uma mesagem de erro

        # Limpa os campos antes preenchidos
        logini.delete(0,END)
        senhai.delete(0,END)

#Botão de login
loginbt = Button(rframe, text="Logar", width=10, command=Login) # Cria o botão para logar no sistema
loginbt.place(x=40, y=220) # Exibe na posição determinada

#Função de cadastro
def cadastro():

    # Reposicionando elementos na tela 
    #Campo login
    logini.place(x=50, y=100)
    loginl.place(x=10, y=100) 
    #Campo list box
    listbox.place(x=3000)
    #Campo senha
    senhai.place(x=50, y=140)
    senhal.place(x=10, y=140)   
    #Botão login
    loginbt.place(x=3000)
    #Botão cadastro
    cadbt.place(x=3000)
    #Botão listar
    listbt.place(x=3000)
    
    # Imput nome 
    nomel = Label(rframe, text="Nome", bg="black", fg="white") # insere uma labe
    nomel.place(x=5, y=20) # Exibe a label na posição determinada
    nomei = Entry(rframe, width=35) # Insere uma caixa de texto
    nomei.place(x=50, y=20) # Exibe a caixa de texto na posição determinada

    # Imput email
    emaill = Label(rframe, text="Email", bg="black", fg="white") # insere uma labe
    emaill.place(x=5, y=60) # Exibe a label na posição determinada
    emaili = Entry(rframe, width=35) # Insere uma caixa de texto
    emaili.place(x=50, y=60) # Exibe a caixa de texto na posição determinada

    # Função para inserir um cadastro no banco de dados
    def inserir():

        # Atribuuição das variaveis
        nome = nomei.get()
        email = emaili.get()
        login = logini.get()
        sneha = senhai.get()

        # Verificação dos imputs
        if(nome == '' or email == '' or login == '' or sneha == ''):
            #Exibição da mensagem de erro
            messagebox.showerror("erro ao inserir", message="Preencha todos os dados") # Exibe mensagem de aviso
        else:
            # Adiciona as variaveis ao banco de dados 
            banco.sql.execute("""
            insert into login (nome,email,login,senha) values (?,?,?,?)
            """,(nome,email,login,sneha))

            # Limpa os campos antes preenchidos
            nomei.delete(0, END)
            emaili.delete(0, END)
            logini.delete(0, END)
            senhai.delete(0, END)

            banco.conn.commit() # Salva alterações no banco de dados
            
            messagebox.showinfo(title='Cadasro', message='Cadastro realizado com sucesso') # Exibição da mensagem de confirmação

    # Botão de inserir
    inserirbt = Button(rframe, text="Adicionar", width=10, command=inserir) # Cria o botão para inserir cadastros 
    inserirbt.place(x=40, y=220) # Exibe na posição determinada

    # Função para voltar
    def voltar():
        # Reposicionando elementos na tela
        #Campo nome
        nomei.place(x=3000)
        nomel.place(x=3000)
        #Campo email
        emaill.place(x=3000)
        emaili.place(x=3000)
        #Campo list box
        listbox.place(x=5)
        #Campo login
        loginl.place(x=10, y=130)
        logini.place(x=50, y=130)
        #Campo senha
        senhal.place(x=7, y=160)
        senhai.place(x=50, y=160)
        #Botão inserir
        inserirbt.place(x=3000)
        #Botão voltar
        voltarbt.place(x=3000)
        #Botão login
        loginbt.place(x=40)
        #Botão cadartro
        cadbt.place(x=110)
        #Botão listar
        listbt.place(x=180)

    #Botão para voltar
    voltarbt = Button(rframe, text="Voltar", width=10, command=voltar) # Cria o botão para retornar a pagina tela inicial
    voltarbt.place(x=180, y=220) # Exibe na posição determinada

# Botaõ de cadastro
cadbt = Button(rframe, text="Cadastrar", width=10, command=cadastro) # Cria o botão para acessar o formulário de cadarstros
cadbt.place(x=110, y=220) # Exibe na posição determinada

# Função para listar os usuários/cadastros na box list
def listar():
    # Limpa o campo da list box
    listbox.delete(0, END)

    # Selecionando as variaveis na lista do banco de dados 
    banco.sql.execute("Select nome,email,login from login")
    usuarios = banco.sql.fetchall() # Seleciona cada linha do bamco de dados

    # Verifica se há usuários cadastrados 
    if usuarios:
        # Printa ususário por usuário na list box
        for usuario in usuarios:
            nome,email,login = usuario
            listbox.insert(END, f"Nome: {nome} | Email: {email} | Login: {login}") # Exíbe a mensagem na list box formatado
    else:
        listbox.insert(END, "Nenhum usuário cadastrado!") # Exibe uma mensagem de aviso na list box

# Botão para listar cadstros/usuários
listbt = Button(rframe, text="Listar", width=10, command=listar)# Cria o botão para listar usuários/cadastros na list box
listbt.place(x=180, y=220)# Exibe na posição determinada

jan.mainloop() # Mantem a janela aberta