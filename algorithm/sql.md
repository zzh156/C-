# SQL入门教程

# 前言

SQL语言有40多年的历史，从它被应用至今几乎无处不在。我们消费的每一笔支付记录，收集的每一条用户信息，发出去的每一条消息，都会使用数据库或与其相关的产品来存储，而操纵数据库的语言正是 SQL ！

![img](https://img-blog.csdnimg.cn/a5afef7109c1415992a071a97b190364.png)

SQL 对于现在的互联网公司生产研发等岗位几乎是一个必备技能，如果不会 SQL 的话，可能什么都做不了。你可以把 SQL 当做是一种工具，利用它可以帮助你完成你的工作，创造价值。

SQL是用于访问和处理数据库的标准计算机语言。

SQL指结构化查询语言

SQL使我们有能力访问数据库

SQL是一种ANSI的标准计算机语言

![img](https://img-blog.csdnimg.cn/72e2475eee7047e1a867f61dd2ca8808.png)

SQL 可与数据库程序协同工作，比如 MS Access、DB2、Informix、MS SQL Server、Oracle、Sybase 以及其他数据库系统。但是由于各种各样的数据库出现，导致很多不同版本的 SQL 语言，为了与 ANSI 标准相兼容，它们必须以相似的方式共同地来支持一些主要的关键词（比如 SELECT、UPDATE、DELETE、INSERT、WHERE 等等），这些就是我们要学习的SQL基础。
# SQL的类型

可以把SQL分为两个部分，数据操作语言（DML），和数据定义语言(DDL)

数据查询语言（DQL : Data Query language）

数据操作语言(DML: Data Manipulation Language)

# 学习SQL的作用

SQL是一门ANSI的标准计算机语言，用来访问和操作数据库系统。SQL语句用来取回和更新数据库中的数据。

SQL面向数据库执行查询

SQL可从数据库取回数据

SQL可在数据库中插入新的记录

SQL可更新数据库中的数据

SQL可在数据库删除数据

SQL可创建新数据库

SQL可在数据库中创建新表

SQL可在数据库中创建存储过程

SQL可在数据库中创建视图

SQL可以设置表，存储过程和视图的权限

# 数据库是什么

顾名思义，你可以理解为数据库是用来存放数据的一个容器。

打个比方，每个人家里都会有冰箱，冰箱是用来干什么的？冰箱是用来存放食物的地方。

![img](https://img-blog.csdnimg.cn/196294d8250d4e85982204e59447dff7.png)

同样的，数据库是存放数据的地方。正是因为有了数据库后，我们可以直接查找数据。例如你每天使用余额宝查看自己的账户收益，就是从数据库读取数据后给你的。

最常见的数据库类型是**关系型数据库管理系统**（RDBMS）

RDBMS是SQL的基础，同样也是所有现代数据库系统的基础，比如MS SQL Server,IBM DB2,Oracle,Mysql,以及Microsoft Access等等

![img](https://img-blog.csdnimg.cn/5d3752cad1c241e2a624ca1e41bc7c20.png)

RDBMS中的存储在称为表(tables)的数据库对象中。表是相关数据项的集合，它由列和行组成。

由于本文主要讲解 SQL 基础，因此对数据库不做过多解释，只需要大概了解即可。**咱们直接开始学习SQL！**

# SQL基础语言学习

在了解SQL基础语句使用之前，我们先来了解一下表是什么?

一个数据库通常包含一个或多个表，每个表由一个名字标识(例如"客户"或者"订单")。表包含带有数据的记录（行）。

**下面的例子是一个名为 “Persons” 的表：**

| Id   | LastName | FirstName | Address        | City     |
| ---- | -------- | --------- | -------------- | -------- |
| 1    | Adams    | John      | Oxford Street  | London   |
| 2    | Bush     | George    | Fifth Avenue   | New York |
| 3    | Carter   | Thomas    | Changan Street | Beijing  |

上面的表包含三条记录（每一条对应一个人）和五个列（Id、姓、名、地址和城市）。

**有表才能查询，那么如何创建这样一个表？**

# CREATE TABLE——创建表

语法：

```sql
CREATE TABLE 表名称{
列名称1 数据类型1;
列名称2 数据类型2;
列名称3 数据类型3;
...
};
```

数据类型(data_type规定了列可容纳何种数据类型，下面的表格包含了SQL中最常用的数据类型。

![image-20230607145405384](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607145405384.png)

数据类型 integer(size),int(size),smallint(size),tinyint(size) 仅容纳整数，在括号内规定数字的最大位数

decimal(size,d),numeric(size,d) 容纳带小数的数字，size规定数字的最大位数，d规定小数点右侧的最大位数

char(size) 容纳固定长度的字符串(可容纳字母，数字以及特殊字符),在括号中固定字符串的长度

varchar 容纳可变长度的字符串(可容纳字母，数字和特殊的字符)，在括号中规定字符串的最大长度

data(yyyymmdd)容纳日期

**实例：**

本例演示如何创建名为"persons"的表

该表包含 5 个列，列名分别是：“Id_P”、“LastName”、“FirstName”、“Address” 以及 “City”：

```sql
CREATE TABLE Persons
(
Id_P int,
LastName varchar(255),
FirstName varchar(255),
Address varchar(255),
City varchar(255)
);

```

Id_P 列的数据类型是 int，包含整数。其余 4 列的数据类型是 varchar，最大长度为 255 个字符。

![img](https://img-blog.csdnimg.cn/b60a078e11cc41648d68d138d8ff5255.png)

![img](https://img-blog.csdnimg.cn/23fdf786f1194420a61783f626e10602.png)

可使用 INSERT INTO 语句向空表写入数据。

# INSERT ——插入数据

INSERT INTO 语句用于向表格中插入新的行

语法:

```sql
INSERT INTO 表名称 VALUES(值1,值2,...);
```

我们当然也可以指定要插入数据的列

```sql
INSERT INTO table_name(列1,列2,列3) VALUES（值1,值2,值3...）;
```

**实例：**

本例演示 “Persons” 表插入记录的两种方式：

1.插入新的行

```sql
INSERT INTO Persons VALUES (1,"Gates","Bill","Xuanwumen 10",)
```

2.在指定的列中插入数据

```sql
INSERT INTO Persons(LastName,Address)VALUES("Wilson","Champs-Elysees");
```

![img](https://img-blog.csdnimg.cn/4ac725e7e3324bfe97998a08941a233e.png)

这个数据插入之后，是通过SELECT 语句进行查询出来的，别急马上讲！

SELECT—查询数据

SELECT 语句用于从表中选取数据，结果被存储在一个结果表中(称为结果集)。

语法:

```sql
SELECT *FROM 表名称;
```

我们也可以指定所要查询数据的列:

```sql
SELECT 列名称 FROM 表名称;
```

注意:SQL语言对大小写不敏感，SELECT等效于select

**实例：**

**SQL SELECT \* 实例：**

```sql
SELECT * FROM Persons;
```

![img](https://img-blog.csdnimg.cn/a9d38f90b2f84580b779ab229951b025.png)

**注意：** 星号（*）是选取所有列的快捷方式。

如需获取名为 “LastName” 和 “FirstName” 的列的内容（从名为 “Persons” 的数据库表），请使用类似这样的 SELECT 语句：

```sql
SELECT LastName,FirstName FROM Persons;
```

# DISTINCT – 去除重复值

如果一张表中有多行重复数据，如何去重显示呢？可以了解下 `DISTINCT` 

**语法：**

```sql
SELECT DISTINCT 列名称 FROM 表名称;
```

**实例：**

如果要从 “LASTNAME” 列中选取所有的值，我们需要使用 `SELECT` 语句：

```sql
SELECT LASTNAME FROM Persons;
```

![img](https://img-blog.csdnimg.cn/7e3faf9ee1a345f89b01b46ff4b38d61.png)

可以发现，在结果集中，Wilson 被列出了多次。

如需从 “LASTNAME” 列中仅选取唯一不同的值，我们需要使用 SELECT DISTINCT 语句：

```SQL
SELECT DISTINCT LASTNAME FROM Persons;
```

![img](https://img-blog.csdnimg.cn/6a2227801a354448aeb5124c94df482a.png)

通过上述查询，结果集中只显示了一列 Wilson，显然已经去除了重复列。

## WHERE – 条件过滤

如果需要从表中选取指定的数据，可将 WHERE 子句添加到 SELECT 语句。

**语法：**

```SQL
SELECT 列名称 FROM 表名称 WHERE 列 运算符 值;
```

下面的运算符可在 WHERE 子句中使用：

![image-20230607171114798](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607171114798.png)

 **注意：** 在某些版本的 SQL 中，操作符 <> 可以写为 !=。

**实例：**

如果只希望选取居住在城市 “Beijing” 中的人，我们需要向 SELECT 语句添加 WHERE 子句：

```sql
SELECT* FROM perons WHERE City = "Beijing";
```

![img](https://img-blog.csdnimg.cn/49195c9589be4366b44abc9392995266.png)

**注意：** SQL 使用单引号来环绕文本值（大部分数据库系统也接受双引号）。如果是数值，请不要使用引号。

## AND & OR – 运算符

AND 和 OR 可在 WHERE 子语句中把两个或多个条件结合起来。

- 如果第一个条件和第二个条件都成立，则 AND 运算符显示一条记录。
- 如果第一个条件和第二个条件中只要有一个成立，则 OR 运算符显示一条记录。

语法:

**AND 运算符实例：**

```sql
SELECT* FROM 表名称 WHERE 列 运算符 值 AND 列 运算符 值;
```

**OR 运算符实例：**

```sql
SELECT * FROM 表名称 WHERE 列 运算符 值 OR 列 运算符 值;
```

**实例：**

由于 Persons 表数据太少，因此增加几条记录：

```sql
INSERT INTO Persons VALUES(2,'Adams','John','Oxford Street','London');
INSERT INTO Persons VALUES (3, 'Bush', 'George', 'Fifth Avenue', 'New York');
INSERT INTO Persons VALUES (4, 'Carter', 'Thomas', 'Changan Street', 'Beijing');
INSERT INTO Persons VALUES (5, 'Carter', 'William', 'Xuanwumen 10', 'Beijing');
SELECT * FROM Persons;
```

![img](https://img-blog.csdnimg.cn/44378f501d2149b0afe9f8405e465bfc.png)

**AND 运算符实例：**

使用 AND 来显示所有姓为 “Carter” 并且名为 “Thomas” 的人：

```sql
SELECT * FROM Persons WHERE FirstName='Thomas' AND LastName='Carter';
```

![img](https://img-blog.csdnimg.cn/7a5e293ef07649a8a1d5ce8950f0a744.png)

**OR 运算符实例：**

使用 OR 来显示所有姓为 “Carter” 或者名为 “Thomas” 的人：

```sql
SELECT *FROM Persons WHERE firstname ='Thomas' OR lastname='Carter';
```

![img](https://img-blog.csdnimg.cn/81560c1384fe4dcb9690544e06b77d1c.png)

**结合 AND 和 OR 运算符：**

我们也可以把 AND 和 OR 结合起来（使用圆括号来组成复杂的表达式）:

```sql
SELECT * FROM Persons WHERE (FirstName='Thomas'OR FirstName='William')AND LastName='Carter';
```

![img](https://img-blog.csdnimg.cn/052acfbed08743809653c1aa4057a22c.png)

# ORDER BY – 排序

ORDER BY 语句用于根据指定的列对结果集进行排序，默认按照升序对记录进行排序，如果您希望按照降序对结果进行排序，可以使用DESC关键字

**语法：**

```sql
SELECT*FROM 表名称 ORDER BY 列1,列2 DESC;
```

默认排序为 ASC升序，DESC代表降序。

**实例：**

以字母顺序显示 `LASTNAME` 名称：

```sql
SELECT * FROM Persons ORDER BY LASTNAME;
```

![img](https://img-blog.csdnimg.cn/cdb66209cdbf4f37a3852684f851e508.png)

空值（NULL）默认排序在有值行之后。

以数字顺序显示`ID_P`，并以字母顺序显示 `LASTNAME` 名称：

```sql
SELECT*FROM Perons ORDER BY ID_P,LASTNAME;
```

![img](https://img-blog.csdnimg.cn/26cf3cad53d14c99be9b4dc1975ba600.png)

以数字降序显示`ID_P`：

```sql
SELECT * FROM Persons ORDER BY ID_P DESC;
```

![img](https://img-blog.csdnimg.cn/8552137098e541108eda00d54279cc62.png)

在第一列中有相同的值时，第二列是以升序排列的。如果第一列有些值为null时，情况也是这样的。

# UPDATE – 更新数据

Update 语句用于修改表中的数据。

**语法：**

```sql
UPDATE 表名称 SET 列名称 = 新值 WHERE 列名称 =某值;
```

**实例：**

**更新某一行中的一个列：**

目前 `Persons` 表有很多字段为 `null `的数据，可以通过 `UPDATE` 为 LASTNAME 是 “Wilson” 的人添加FIRSTNAME：

```sql
UPDATE Persons SET FIRSTName = 'Fred' WHERE LastName =
```

![img](https://img-blog.csdnimg.cn/d7f7facd22314ba48c5ceec8bc52adfe.png)

**更新某一行中的若干列：**

```sql
UPDATE Persons SET ID_P =6,city= 'London'WHERE LastName='Wilson';
```

![img](https://img-blog.csdnimg.cn/c58528527ed744d68b32b670bcd21064.png)

# DELETE – 删除数据

DELETE 语句用于删除表中的行。

**语法：**

```sql
DELETE FROM 表名称 WHERE 列名称 =值;
```

**实例：**

**删除某行：**

删除 `Persons` 表中 LastName 为 “Fred Wilson” 的行：

```sql
DELETE FROM Persons WHERE LastName = 'Wilson';
```

**删除所有行：**

可以在不删除表的情况下删除所有的行。这意味着表的结构、属性和索引都是完整的：

```sql
DELETE FROM table_name;
```

# TRUNCATE TABLE – 清除表数据

如果我们仅仅需要除去表内的数据，但并不删除表本身，那么我们该如何做呢？

可以使用 TRUNCATE TABLE 命令（仅仅删除表格中的数据）：

**语法：**

```sql
TRUNCATE TABLE 表名称;
```

**实例：**

本例演示如何删除名为 “Persons” 的表。

```sql
TRUNCATE TABLE persons;
```

# DROP TABLE – 删除表

DROP TABLE 语句用于删除表（表的结构、属性以及索引也会被删除）。

语法:

```sql
DROP TABLE 表名称;
```

**实例：**

本例演示如何删除名为 “Persons” 的表。

```sql
drop table persons;
```

![img](https://img-blog.csdnimg.cn/a3a4b51c18664b438ef201d92704440f.png)

从上图可以看出，第一次执行删除时，成功删除了表 `persons`，第二次执行删除时，报错找不到表 `persons`，说明表已经被删除了。

# SQL 高级言语学习

## LIKE – 查找类似值

**语法：**

```sql
SELECT 列名/(*) FROM 表名称 WHERE 列名称 LIKE 值;
```

**实例:**

`Persons` 表插入数据：

```sql
INSERT INTO Persons VALUES (1, 'Gates', 'Bill', 'Xuanwumen 10', 'Beijing');
INSERT INTO Persons VALUES (2, 'Adams', 'John', 'Oxford Street', 'London');
INSERT INTO Persons VALUES (3, 'Bush', 'George', 'Fifth Avenue', 'New York');
INSERT INTO Persons VALUES (4, 'Carter', 'Thomas', 'Changan Street', 'Beijing');
INSERT INTO Persons VALUES (5, 'Carter', 'William', 'Xuanwumen 10', 'Beijing');
select * from persons;
```

![img](https://img-blog.csdnimg.cn/cba1142393554d3490acdc69efa541be.png)

1、现在，我们希望从上面的 “Persons” 表中选取居住在以 “N” 开头的城市里的人：

```sql
SELECT * FROM Persons WHERE City LIKE '%N';
```

![img](https://img-blog.csdnimg.cn/66498b6c0c884d42b1d299db17a14389.png)

2、接下来，我们希望从 “Persons” 表中选取居住在以 “g” 结尾的城市里的人：

```sql
SELECT * FROM Persons WHERE City Like '%g';
```

![img](https://img-blog.csdnimg.cn/0ef01afee4934a8eacd2d0abd494a8e0.png)

3、接下来，我们希望从 “Persons” 表中选取居住在包含 "on” 的城市里的人：

```sql
SELECT *FROM Persons WHERE City LIKE'%on%';
```

![img](https://img-blog.csdnimg.cn/deccca6bc636468d9f33a218d65834c8.png)

4.通过使用NOT 关键字，我们可以从 “Persons” 表中选取居住在不包含 “on” 的城市里的人：

```sql
SELECT * FROM Persons WHERE City NOT LIKE '%on%';
```

**注意：** “%” 可用于定义通配符（模式中缺少的字母）。

## IN – 锁定多个值

IN 操作符允许我们在 WHERE 子句中规定多个值。

**语法：**

```sql
SELECt *FROM Persons WHERE LastName IN('Adams','Carter');
```

![img](https://img-blog.csdnimg.cn/7e47403959854b02bbe172c422ec4ce5.png)

# BETWEEN – 选取区间数据

操作符 BETWEEN … AND 会选取介于两个值之间的数据范围。这些值可以是数值、文本或者日期。

 **语法：**

```sql
SELECT 列名/(*)FROM 表名称 WHERE 列名称 Between 值1 AND 值2;
```

实例:

1.查询以字母顺序显示介于 “Adams”（包括）和 “Carter”（不包括）之间的人：

```sql
SELECT * FROM Persons WHERE LastName BETWEEN 'Adams' AND 'Carter';
```

![img](https://img-blog.csdnimg.cn/f6704c60c7b440afb699b55840754f4c.png)

2、查询上述结果相反的结果，可以使用 NOT:

```sql
SELECT * FROM Persons WHERE LastName NOT BETWEEN 'Adams' AND 'Carter';
```

![img](https://img-blog.csdnimg.cn/12133eca504c42df8e97126de4d182a9.png)

**注意：** 不同的数据库对 BETWEEN…AND 操作符的处理方式是有差异的。

某些数据库会列出介于 “Adams” 和 “Carter” 之间的人，但不包括 “Adams” 和 “Carter” ；某些数据库会列出介于 “Adams” 和 “Carter” 之间并包括 “Adams” 和 “Carter” 的人；而另一些数据库会列出介于 “Adams” 和 “Carter” 之间的人，包括 “Adams” ，但不包括 “Carter” 。
某些数据库会列出介于 “Adams” 和 “Carter” 之间的人，但不包括 “Adams” 和 “Carter” ；某些数据库会列出介于 “Adams” 和 “Carter” 之间并包括 “Adams” 和 “Carter” 的人；而另一些数据库会列出介于 “Adams” 和 “Carter” 之间的人，包括 “Adams” ，但不包括 “Carter” 。

所以，请检查你的数据库是如何处理BEWTEEN...AND操作符的!

## AS – 别名

通过使用 SQL，可以为列名称和表名称指定别名（Alias），别名使查询程序更易阅读和书写。

**语法：**

**表别名：**

```sql
SELECT 列名称/(*） FROM  表名称 AS 别名;
```

列别名:

```sql
SELECT 列名称 as 别名 FROM 表名称 ;
```

**实例：**

**使用表名称别名：**

```sql
SELECT p.LastName, p.FirstName
FROM Persons p 
WHERE p.LastName='Adams' AND p.FirstName='John';
```

![img](https://img-blog.csdnimg.cn/6b71f64d59f54db893012548217d61d5.png)

**使用列名别名：**

```sql
SELECT LastName "Family",FirstName"Name" FROM Persons;
```

![img](https://img-blog.csdnimg.cn/f4f1fc19cf584151b2b358a5aea07b40.png)

**注意：** 实际应用时，这个 `AS` 可以省略，但是列别名需要加上 `" "`。

## JOIN – 多表关联

JOIN用于根据两个或多个表中的列之间的关系，从这些表中查询数据。

有时为了得到完整的结果，我们需要从两个或更多的表中获取数据。我们就需要执行JOIN。

数据库中的表可通过键将彼此联系起来。主键(Primary Key )是一个列，在这个列中的每一行的值都是唯一的。在表中，每个主键的值都是唯一的。这样做的目的是在不重复每个表中的所有数据的情况下，把表中的数据交叉捆绑在一起

![img](https://img-blog.csdnimg.cn/74fcb74caa284bc1b4ec1a4adc088595.png)

如图，“Id_P” 列是 Persons 表中的的主键。这意味着没有两行能够拥有相同的 Id_P。即使两个人的姓名完全相同，Id_P 也可以区分他们。

**为了下面实验的继续，我们需要再创建一个表：Orders。**

```sql
create table orders(id_o number,orderno number,id_p number);
insert into orders values(1,11111,1);
insert into orders values(2,22222,2);
insert into orders values(3,33333,3);
insert into orders values(4,44444,4);
insert into orders values(6,66666,6);
select* from orders;
```

![img](https://img-blog.csdnimg.cn/03cc7abc58a14fe3b68d0947eede15c4.png)

如图，“Id_O” 列是 Orders 表中的的主键，同时，“Orders” 表中的 “Id_P” 列用于引用 “Persons” 表中的人，而无需使用他们的确切姓名。

select * from persons p,orders o where p.id_p=o .id_p;

![img](https://img-blog.csdnimg.cn/c8c6b28a84b346479500110c56af0bd2.png)

可以看到，“Id_P” 列把上面的两个表联系了起来。

```sql
select 列名 from 表A INNER|LEFT|RIGHT|FULL JOIN 表B
ON 表A主键列 = 表B外键列;
```

不同的SQL JOIN:

面列出了您可以使用的 JOIN 类型，以及它们之间的差异。

JOIN: 如果表中有至少一个匹配，则返回行
INNER JOIN: 内部连接，返回两表中匹配的行
LEFT JOIN: 即使右表中没有匹配，也从左表返回所有的行
RIGHT JOIN: 即使左表中没有匹配，也从右表返回所有的行
FULL JOIN: 只要其中一个表中存在匹配，就返回行
VIEW – 视图
在 SQL 中，视图是基于 SQL 语句的结果集的可视化的表。

视图包含行和列，就像一个真实的表。视图中的字段就是来自一个或多个数据库中的真实的表中的字段。我们可以向视图添加 SQL 函数、WHERE 以及 JOIN 语句，我们也可以提交数据，就像这些来自于某个单一的表。

```SQL
CREATE VIEW 视图名 AS
SELECT 列名
FROM 表名
WHERE 查询条件;
```

视图总是显示最近的数据。每当用户查询视图时，数据库引擎通过使用 SQL 语句来重建数据。

**实例：**

下面，我们将 Persons 表中住在 Beijing 的人筛选出来创建视图：

```SQL
create view persons_beijing as
select * from persons where city='Beijing';
```

![img](https://img-blog.csdnimg.cn/ed8f1036aa77471e94b9924e0e14b14b.png)

![img](https://img-blog.csdnimg.cn/0a16cd59fb9b45789c7c68ddc4416592.png)

如果需要更新视图中的列或者其他信息，无需删除，使用 `CREATE OR REPLACE VIEW` 选项：

```sql
CREATE OR REPLACE VIEW 视图名 AS
SELECT 列名
FROM 表名
WHERE 查询条件;
```

**实例：**

现在需要筛选出，LASTNAME 为 Gates 的记录：

```sql
create or replace view persons_beijing as
select * from persons where lastname='Gates';
```

![img](https://img-blog.csdnimg.cn/e3c1af27e95f4b24b020e245e06a4772.png)

删除视图就比较简单，跟表差不多，使用 `DROP` 即可：

```sql
drop view persons_beijing;
```

![img](https://img-blog.csdnimg.cn/d2bae67146ed45c0879125f6dec3a3f7.png)

that is the end
