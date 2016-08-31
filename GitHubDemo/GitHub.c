=== GitHub 初学 ===
GitHub 是基于 Git 的（公开）版本库托管网站。
类似于 SourceForge、Google Code 等。

=== 参考资料 ===
GitHub 网站：	https://github.com/
Wiki：	https://en.wikipedia.org/wiki/GitHub
维基：	https://zh.wikipedia.org/zh-ch/GitHub
蒋鑫-《Got GitHub》:	http://www.worldhello.net/gotgithub/index.html
廖雪峰- Git 教程：	http://www.liaoxuefeng.com 


=== GitHub 随笔 === 

一、 远程仓库克隆到本地
1. 新建 GitHub 仓库；或 GitHub.com 上已有仓库
2. 创建 SSH Key，并将生成在用户目录的公钥 [id_rsa.pub] 导入 GitHub.com
	ssh-keygen -t rsa -C "<邮箱@xx.com>"
3. 查看 SSH Key 是否生效
	ssh -T git@GitHub.com
4. git clone git@github.com:<用户名>/<仓库名>.git
5. 更新本地后，推送给远程
	git push origin master
6. 推送时，可能会发生冲突等，需要采取合并等手段解决后，在推送！
7. 多用户协作时，需先下载
	git pull


二、本地仓库克隆到远程仓库
1. 对需要克隆到远程的文件夹，Git 初始化成 git 仓库
2. GitHub.com 新建一个空仓库，如： <NewRepository>
3. 导入 SSH Key
4. 克隆
	git remote add origin git@github.com:<用户名>/<NewRepository>.git
	git remote rm origin		//删除远程仓库
5. 本地更新后，推送
	git push -u origin master		//建立关联
	git push origin master			//之后的推送，可以不用参数 -u
6. 推送时，可能会发生冲突等，需要采取合并等手段解决后，在推送！
7. 多用户协作时，需先下载
	git pull


