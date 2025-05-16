import  sqlite3

conn = sqlite3.connect('usuarios.db')

sql = conn.cursor()

sql.execute("""
create table if not exists login(
    id integer primary key autoincrement,
    nome vachar(40),
    email vachar(40),
    login vachar(40),
    senha vachar(40)
);
""")