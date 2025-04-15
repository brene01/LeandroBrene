-- Tabela de Usuários
CREATE TABLE usuarios (
    usuario_id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    telefone VARCHAR(20),
    endereco VARCHAR(200),
    data_cadastro DATE NOT NULL,
    status ENUM('ativo', 'inativo', 'suspenso') DEFAULT 'ativo'
);

-- Tabela de Autores
CREATE TABLE autores (
    autor_id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    nacionalidade VARCHAR(50),
    data_nascimento DATE,
    biografia TEXT
);

-- Tabela de Livros
CREATE TABLE livros (
    livro_id INT AUTO_INCREMENT PRIMARY KEY,
    titulo VARCHAR(200) NOT NULL,
    autor_id INT NOT NULL,
    isbn VARCHAR(20) UNIQUE NOT NULL,
    ano_publicacao INT,
    editora VARCHAR(100),
    categoria VARCHAR(50),
    quantidade_disponivel INT DEFAULT 0,
    FOREIGN KEY (autor_id) REFERENCES autores(autor_id)
);

-- Tabela de Empréstimos
CREATE TABLE emprestimos (
    emprestimo_id INT AUTO_INCREMENT PRIMARY KEY,
    livro_id INT NOT NULL,
    usuario_id INT NOT NULL,
    data_emprestimo DATE NOT NULL,
    data_devolucao_prevista DATE NOT NULL,
    data_devolucao_real DATE,
    multa DECIMAL(10,2) DEFAULT 0.00,
    status ENUM('ativo', 'devolvido', 'atrasado') DEFAULT 'ativo',
    FOREIGN KEY (livro_id) REFERENCES livros(livro_id),
    FOREIGN KEY (usuario_id) REFERENCES usuarios(usuario_id)
);

-- Tabela de Reservas
CREATE TABLE reservas (
    reserva_id INT AUTO_INCREMENT PRIMARY KEY,
    livro_id INT NOT NULL,
    usuario_id INT NOT NULL,
    data_reserva DATE NOT NULL,
    data_expiracao DATE NOT NULL,
    status ENUM('ativa', 'cancelada', 'concluida') DEFAULT 'ativa',
    FOREIGN KEY (livro_id) REFERENCES livros(livro_id),
    FOREIGN KEY (usuario_id) REFERENCES usuarios(usuario_id)
);

-- População da tabela de Usuários
INSERT INTO usuarios (nome, email, telefone, endereco, data_cadastro, status) VALUES
('João Silva', 'joao.silva@email.com', '(11) 9999-8888', 'Rua A, 123 - São Paulo', '2023-01-15', 'ativo'),
('Maria Oliveira', 'maria.oliveira@email.com', '(21) 7777-6666', 'Av. B, 456 - Rio de Janeiro', '2023-02-20', 'ativo'),
('Carlos Souza', 'carlos.souza@email.com', '(31) 5555-4444', 'Rua C, 789 - Belo Horizonte', '2023-03-10', 'ativo'),
('Ana Pereira', 'ana.pereira@email.com', '(41) 3333-2222', 'Av. D, 101 - Curitiba', '2023-01-25', 'inativo'),
('Pedro Costa', 'pedro.costa@email.com', '(51) 1111-0000', 'Rua E, 202 - Porto Alegre', '2023-04-05', 'ativo');

-- População da tabela de Autores
INSERT INTO autores (nome, nacionalidade, data_nascimento, biografia) VALUES
('Machado de Assis', 'Brasileira', '1839-06-21', 'Joaquim Maria Machado de Assis foi um escritor brasileiro, considerado o maior nome da literatura nacional.'),
('Clarice Lispector', 'Brasileira', '1920-12-10', 'Escritora e jornalista brasileira nascida na Ucrânia, conhecida por seus romances e contos.'),
('George Orwell', 'Britânica', '1903-06-25', 'Eric Arthur Blair, conhecido pelo pseudônimo George Orwell, foi um escritor e jornalista inglês.'),
('J.K. Rowling', 'Britânica', '1965-07-31', 'Joanne Rowling, mais conhecida como J.K. Rowling, é uma escritora britânica, autora da série Harry Potter.'),
('Gabriel García Márquez', 'Colombiana', '1927-03-06', 'Escritor, jornalista e ativista político colombiano, laureado com o Nobel de Literatura em 1982.');

-- População da tabela de Livros
INSERT INTO livros (titulo, autor_id, isbn, ano_publicacao, editora, categoria, quantidade_disponivel) VALUES
('Dom Casmurro', 1, '978-85-7232-144-9', 1899, 'Livraria Garnier', 'Literatura Brasileira', 5),
('A Hora da Estrela', 2, '978-85-209-2320-1', 1977, 'Rocco', 'Ficção Brasileira', 3),
('1984', 3, '978-85-359-0497-8', 1949, 'Companhia das Letras', 'Ficção Científica', 7),
('Harry Potter e a Pedra Filosofal', 4, '978-85-325-1198-9', 1997, 'Rocco', 'Fantasia', 10),
('Cem Anos de Solidão', 5, '978-85-254-1714-5', 1967, 'Record', 'Realismo Mágico', 4),
('Memórias Póstumas de Brás Cubas', 1, '978-85-7232-143-2', 1881, 'Livraria Garnier', 'Literatura Brasileira', 2),
('A Revolução dos Bichos', 3, '978-85-359-0273-8', 1945, 'Companhia das Letras', 'Sátira Política', 6);

-- População da tabela de Empréstimos
INSERT INTO emprestimos (livro_id, usuario_id, data_emprestimo, data_devolucao_prevista, data_devolucao_real, multa, status) VALUES
(1, 1, '2023-05-10', '2023-05-24', '2023-05-22', 0.00, 'devolvido'),
(3, 2, '2023-05-15', '2023-05-29', NULL, 5.50, 'atrasado'),
(5, 3, '2023-06-01', '2023-06-15', NULL, 0.00, 'ativo'),
(2, 1, '2023-06-05', '2023-06-19', NULL, 0.00, 'ativo'),
(4, 5, '2023-05-20', '2023-06-03', '2023-06-05', 2.00, 'devolvido');

-- População da tabela de Reservas
INSERT INTO reservas (livro_id, usuario_id, data_reserva, data_expiracao, status) VALUES
(1, 4, '2023-06-10', '2023-06-17', 'concluida'),
(3, 5, '2023-06-12', '2023-06-19', 'ativa'),
(6, 2, '2023-06-01', '2023-06-08', 'cancelada'),
(7, 3, '2023-06-15', '2023-06-22', 'ativa');