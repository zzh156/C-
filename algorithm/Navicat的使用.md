# 使用navicat连接mysql数据库创建数据库、表、转储sql文件，导入sql数据

在使用的时候，我们先进行连接

![image-20230607152049521](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607152049521.png)

连接名 : mysql

主机: localhost

端口 3306

用户名 root

密码 111111

# 在连接上右击新建数据库

![image-20230607152503143](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607152503143.png)



![image-20230607152423127](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607152423127.png)

双击某个数据库，会变成绿色，表示在连接状态。

![image-20230607152637374](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607152637374.png)

点击数据库下面列表中的表后，可以点击右键"新建表"或者上面列表中的新建表

![image-20230607152708423](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607152708423.png)

打开得到一个表格

![image-20230607152836825](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607152836825.png)

填写表格

![image-20230607162645508](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607162645508.png)

当你开始填写一个新表的时候，填完一行，就会自动增长一行，被设置好了的

![image-20230607162900845](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607162900845.png)

光标离开这一行，这个数据就被确定了，这个是一个伤害性的操作，这个数据要是修改了就很难恢复了，如果是真的可用数据要小心再小心，一旦写错了就不可恢复了。

![image-20230607163146039](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607163146039.png)

也可以自己不创建，从写好的表里复制进来

做好了之后可以把表存储起来

![image-20230607163347206](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607163347206.png)

![image-20230607163411088](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607163411088.png)

把这个数据库存储到外边

删库(省略)

看看我们刚才存储到外边的数据库

![image-20230607163536221](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607163536221.png)

它的数据格式是这样的

![image-20230607163622963](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607163622963.png)

创建了一些表，插入了一些数据

注意！！！用的时候不能直接在 连接 处 运行SQL文件

![image-20230607163752887](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607163752887.png)

因为你没有创建，他会默认创建到系统表里面去

添加这类SQL文件 注意 先建一个数据库

![image-20230607163908090](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607163908090.png)

![image-20230607163934651](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607163934651.png)

一定要在数据库上运行SQL文件

![image-20230607164017464](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607164017464.png)

点击找到这个文件（你自己做的或者老师给你的表）

![image-20230607164053354](C:\Users\12779\AppData\Roaming\Typora\typora-user-images\image-20230607164053354.png)

这就是Navicat上使用数据库的方法，可以自己创建数据库，表，也可以从自己以前的内容，老师同事给的表导进来

end