说明：
Y430
Demo/ 文件主要用于初学的 item,
对应 GitHub.com 中的 Demo 仓库 ！



1. GitHub.com 中创建远程仓库 [Demo]，对应的协议地址如下：
	SSH 协议地址：		git@github.com:zhq3211/Demo.git
	HTTPS 协议地址：	https://github.com/zhq3211/Demo.git

2. 克隆到本地
	$ git clone https://github.com/zhq3211/Demo.git
	
3. 本地修改后提交到远程仓库
	git add <File>
	git commit -m "first commit"
	git push origin master

4. GitHub端修改后，本地同步
	git pull

PS: 本地克隆到 GitHub（GitHub.com 需新建远程仓库[name]）
	git remote add origin https://github.com/zhq3211/[name].git
	git push -u origin master