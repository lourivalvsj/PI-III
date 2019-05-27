create database pi3;
USE pi3;
CREATE TABLE empresa(
id integer not null primary key,
cnpj  varchar (20) not null,
nomefantasia varchar (50) not null,
razaosocial varchar (50) not null,
insmunicipal integer not null);

CREATE TABLE departamento(
id integer not null primary key,
nome varchar (50) not null,
cidade varchar (50) not null,
uf varchar (2) not null,
id_empresa integer not null,
constraint fk_departamento_empresa foreign key (id_empresa) references empresa(id));

CREATE TABLE centrocusto(
id integer not null primary key,
nome varchar (50) not null);

CREATE TABLE usuario(
id integer not null primary key,
nome varchar(50) not null,
login varchar(20) not null,
senha varchar (20) not null,
nivel integer not null,
id_tab_empresa integer not null,
constraint fk_usuario_empresa foreign key (id_tab_empresa) references empresa(id));

CREATE TABLE periodo(
id integer not null primary key,
tipodia varchar (1) not null,
datainicial date not null,
datafinal date not null);

CREATE TABLE funcionario(
id integer not null primary key,
nome varchar (50) not null,
descontos numeric (7,2) not null,
telefone integer not null,
endereco varchar (20) not null,
bairro varchar (20) not null,
cidade varchar (15) not null,
uf varchar (2) not null);

CREATE TABLE controlehoras(
hrsentrada1 time not null,
hrssaida1 time not null,
hrsentrada2 time not null,
hrssaida2 time not null,
hrs100 time not null,
hrs50 time not null,
adcnoturno time not null,
id_tab_periodo integer not null,
id_tab_funcionario integer not null,
constraint fk_controlehoras_periodo foreign key (id_tab_periodo) references periodo(id),
constraint fk_controlehoras_funcionario foreign key (id_tab_funcionario) references funcionario(id),
primary key (id_tab_periodo, id_tab_funcionario));

select * from empresa;
select * from departamento;
select * from centrocusto;
select * from periodo;
select * from funcionario;
select * from controlehoras;

INSERT INTO empresa VALUES (01,'111111111','VIA RADIO', 'STATUS EQUIPAMENTO DE TELECOM LTDA',11112222);
INSERT INTO empresa VALUES (02,'222222222','BRASILAGRO', 'COMPANHIA DE SERVICO E RURAL LTDA',22223333);
INSERT INTO empresa VALUES (03,'333333333','MUNDO INFORMATICA', 'PRESTAÇAO DE SERVIÇO E VENDA TECNOLOGIA',33334444);

INSERT INTO departamento VALUES (01,'FINANCEIRO','JATAI', 'GO',01);
INSERT INTO departamento VALUES (02,'VENDA','JATAI', 'GO',01);
INSERT INTO departamento VALUES (03,'ALMOXARIFADO','RIO VERDE', 'GO',01);

INSERT INTO departamento VALUES (04,'COMPRAS','JATAI', 'GO',02);
INSERT INTO departamento VALUES (05,'AGRICOLA','MINEIRO', 'GO',02);
INSERT INTO departamento VALUES (06,'FABRICA','URUACU', 'MT',02);

INSERT INTO departamento VALUES (07,'GESTAO','JATAI', 'GO',03);
INSERT INTO departamento VALUES (08,'RH','GOIANIA', 'GO',03);
INSERT INTO departamento VALUES (09,'VENDA','APARECIDA', 'GO',03);

INSERT INTO centrocusto VALUES (01,'111-EPI');
INSERT INTO centrocusto VALUES (02,'222-LAVANDARIA');
INSERT INTO centrocusto VALUES (03,'333-MARCAÇAO');
INSERT INTO centrocusto VALUES (05,'444-MAQUINAS');
INSERT INTO centrocusto VALUES (06,'555-ADUBO');
INSERT INTO centrocusto VALUES (07,'666-DOENÇA');
INSERT INTO centrocusto VALUES (08,'777-FINANCEIRO');

INSERT INTO usuario VALUES (01,'LOURIVAL VICENTE DA SILVA JUNIOR','LOURIVAL','123456789',1,1);
INSERT INTO usuario VALUES (02,'ROMILDO ALVES DE SOUZA JUNIOR','ROMILDO','123456789',2,2);
INSERT INTO usuario VALUES (03,'MAIDSON MATEUS SILVA SOUZA','MAIDSON','123456789',3,3);

INSERT INTO periodo VALUES (01,'F',20190506,20190531);
INSERT INTO periodo VALUES (02,'N',20190606,20190606);
INSERT INTO periodo VALUES (03,'N',20190706,20190731);

INSERT INTO funcionario VALUES (01,'LOURIVAL VICENTE',555.00, 36368239,'RUA ANGICO 88','FLORESTA','JATAI','GO');





