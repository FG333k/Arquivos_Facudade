from tkinter import *

#Formatação da janela
jan = Tk()
jan.geometry("600x300")
jan.title("Login...")
jan.resizable(width=False, height=False)
jan.configure(background="black")
jan.iconbitmap(default="skull-icon-default.ico")

#lado esquerdo:
lframe = Frame(jan, width=300, height=300, bg="black")
lframe.pack(side="left")
#Imagem de logo
logo = PhotoImage(file="caveira_01.gif")
logol = Label(lframe, image=logo, bg="black")
logol.place(x=40, y=50)
#Titulo da janela
titulo = Label(lframe, text="HELO-WORD", fg="white", bg="black", font=("monospace", 15,  "bold"))
titulo.place(x=100, y=20)

#Lado direito
rframe = Frame(jan, width=395, height=300, bg="black")
rframe.pack(side="right")
#Input login
loginl = Label(rframe, text="login", fg="white", bg="black")
loginl.place(x=10, y=100)
logini = Entry(rframe, width=35)
logini.place(x=50, y=100)
#Input senha
senhal = Label(rframe, text="Sanha", fg="white", bg="black")
senhal.place(x=7, y=140)
senhai = Entry(rframe, width=35)
senhai.place(x=50, y=140)

#Botão de login
loginbt = Button(rframe, text="Logar", width=15)
loginbt.place(x=100, y=185)

#Função de cadastro
def cadastro():
    loginbt.place(x=3000)
    cadbt.place(x=3000)
    nomel = Label(rframe, text="Nome", bg="black", fg="white")
    nomel.place(x=5, y=20)
    nomei = Entry(rframe, width=35)
    nomei.place(x=50, y=20)
    
    emaill = Label(rframe, text="Email", bg="black", fg="white")
    emaill.place(x=5, y=60)
    emaili = Entry(rframe, width=35)
    emaili.place(x=50, y=60)

    inserirbt = Button(rframe, text="Adicionar", width=15, )
    inserirbt.place(x=100, y=185)

    def voltar():
        nomei.place(x=3000)
        nomel.place(x=3000)
        emaill.place(x=3000)
        emaili.place(x=3000)
        inserirbt.place(x=3000)
        voltarbt.place(x=3000)
        loginbt.place(x=100)
        cadbt.place(x=100)
    voltarbt = Button(rframe, text="Voltar", width=15, command=voltar)
    voltarbt.place(x=100, y=220)

cadbt = Button(rframe, text="Cadastrar", width=15, command=cadastro)
cadbt.place(x=100, y=220)

jan.mainloop()