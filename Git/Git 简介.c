Note: *.c 比 *.txt 看着舒服！

=== Git 初学 ===
Git 是一款免费、开源的分布式版本控制系统，Distributed Version Control System，简称 DVCS。

=== 参考资料 ===
Git网站：	https://www.git-scm.com
蒋鑫-《Git 权威指南》：	 http://www.worldhello.net/gotgit/
廖雪峰-Git 教程：	http://www.liaoxuefeng.com -> Git 教程

=== 随笔 ===
1. 下载、安装 Git 
	https://www.git-scm.com/

2. 创建、使用版本库
	git init 
	git config --global user.name "<name>"		//配置用户和邮箱
	git config --global user.email "<mail@xx.com>"
	git add <file>		//将需要加入版本库的文件放入暂存区
	git status		
	git commit -m "<提交说明>"		//提交到版本库
	git log --oneline		//简约式，查看提交历史
	git reflog		//查看
	git reset --hard <哈希值；HEAD@{#}>		//悔棋，返回到没处提交
	gtik		//图形界面
	git gui		//图形界面操作
	git tag <TagName>	//打标签
	git tag -d <TagName>	//删除标签
	git diff		//比较工作区和暂存区。当然，可以加参数比较其他
	git difftool	//可以设置后，使用第三方工具比较
	git blame <file>	//追溯文件的更改历史
	git branch <BranchName>		//创建分支
	git branch -d <BrachName>		//删除分支
	git checkout <BranchName>	//切换到某分支
	git checkout -b <BranchName>	//创建分支，且立即切换到此分支
	git merge		//合并分支，解决冲突

3. 本地与远程仓库的克隆&推送，见 GitHub


