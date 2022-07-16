# PROGRAMA CALCULO DE FINAÇAS FAMÍLIA MARGRAF
import tkinter as tk
from tkinter import ttk, StringVar, messagebox


#Constantes
FONTE_12 = ("Arial negrito", 12)  #tupla de valores
FONTE_10 = ("Arial negrito", 10)
MESES = ["Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"] 



def comando_enviar():
    a = var_ano.get()
    m = var_mes.get()
    c = var_credito.get()
    d1 = var_divida_1.get()
    d2 = var_divida_2.get()
    d3 = var_divida_3.get()
    d4 = var_divida_4.get()
    t = d1 + d2 + d3 + d4
    r = saldo_restante.set()
    var_total.set(t)
    tk.messagebox.showinfo("Mensagem", f'Ano: {a}\nMês: {m}\nCrédito: {c}'#showwarning()showerror()askquestion()askokcancel()askyesno()askretrycancel()
                                       f'\n1º divida: {d1}\n2º divida: {d2}'
                                       f'\n3º divida: {d3}\n4º divida: {d4}'
                                       f'\nTotal divida: {t}\nSaldo: {r}')
janela = tk.Tk()
janela.geometry('600x400')
janela.resizable(0,0)
janela.title("CALCULO FINANCEIRO DOMESTICO")

#Objetos para armazenar os valores dos campos
var_ano = tk.IntVar()
var_mes = tk.StringVar()

var_divida_1 = tk.DoubleVar()
var_divida_2 = tk.DoubleVar()
var_divida_3 = tk.DoubleVar()
var_divida_4 = tk.DoubleVar()
var_total = tk.DoubleVar()
var_saldo_restante = tk.DoubleVar()
var_credito = tk.DoubleVar()



#Desenha os labels (textos) da janela
tk.Label(janela, text = "SELECIONE O MÊS", font = FONTE_12).place(x=220, y=50)

tk.Label(janela, text = "1º divida:", font = FONTE_10).place(x=150, y=100)
tk.Label(janela, text = "2º divida:", font = FONTE_10).place(x=150, y=120)
tk.Label(janela, text = "3º divida:", font = FONTE_10).place(x=150, y=140)
tk.Label(janela, text = "4º divida:", font = FONTE_10).place(x=150, y=160)
tk.Label(janela, text = "Total:", font = FONTE_10).place(x=150, y=180)

tk.Label(janela, text = "Crédito:", font = FONTE_10).place(x=160, y=260)

#Campos de entradas
tk.Entry(janela, textvariable = var_divida_1).place(x=220, y=100)
tk.Entry(janela, textvariable = var_divida_2).place(x=220, y=120)
tk.Entry(janela, textvariable = var_divida_3).place(x=220, y=140)
tk.Entry(janela, textvariable = var_divida_4).place(x=220, y=160)
tk.Entry(janela, textvariable = var_total, state= "disabled").place(x=220, y=180)

tk.Entry(janela, textvariable = var_credito).place(x=220, y=260)

#Radios buttons dos Anos
radio1 = tk.Radiobutton(janela, text = "Ano de 2022", value = 2022, variable = var_ano)
radio1.place(x=450, y=240)
radio1.select()

radio2 = tk.Radiobutton(janela, text = "Ano de 2023", value = 2023, variable = var_ano).place(x=450, y=260)
radio3 = tk.Radiobutton(janela, text = "Ano de 2024", value = 2024, variable = var_ano).place(x=450, y=280)


#Combobox dos meses
combobox = ttk.Combobox(janela, state= "readonly", textvariable = var_mes, values = MESES)
combobox.place(x=380, y=50)
combobox.current(0)

#Botão Enviar
botao = tk.Button(janela, text ='Enviar',command = comando_enviar).place(x=350, y=256)


#Botão Sair
botao = tk.Button(janela, text ='Sair', height = 1, width = 5, command = janela.destroy).place(x=272, y=350)

#loop principal da janela
janela.mainloop()

