=== GitHub ��ѧ ===
GitHub �ǻ��� Git �ģ��������汾���й���վ��
������ SourceForge��Google Code �ȡ�

=== �ο����� ===
GitHub ��վ��	https://github.com/
Wiki��	https://en.wikipedia.org/wiki/GitHub
ά����	https://zh.wikipedia.org/zh-ch/GitHub
����-��Got GitHub��:	http://www.worldhello.net/gotgithub/index.html
��ѩ��- Git �̳̣�	http://www.liaoxuefeng.com 


=== GitHub ��� === 

һ�� Զ�ֿ̲��¡������
1. �½� GitHub �ֿ⣻�� GitHub.com �����вֿ�
2. ���� SSH Key�������������û�Ŀ¼�Ĺ�Կ [id_rsa.pub] ���� GitHub.com
	ssh-keygen -t rsa -C "<����@xx.com>"
3. �鿴 SSH Key �Ƿ���Ч
	ssh -T git@GitHub.com
4. git clone git@github.com:<�û���>/<�ֿ���>.git
5. ���±��غ����͸�Զ��
	git push origin master
6. ����ʱ�����ܻᷢ����ͻ�ȣ���Ҫ��ȡ�ϲ����ֶν���������ͣ�
7. ���û�Э��ʱ����������
	git pull


�������زֿ��¡��Զ�ֿ̲�
1. ����Ҫ��¡��Զ�̵��ļ��У�Git ��ʼ���� git �ֿ�
2. GitHub.com �½�һ���ղֿ⣬�磺 <NewRepository>
3. ���� SSH Key
4. ��¡
	git remote add origin git@github.com:<�û���>/<NewRepository>.git
	git remote rm origin		//ɾ��Զ�ֿ̲�
5. ���ظ��º�����
	git push -u origin master		//��������
	git push origin master			//֮������ͣ����Բ��ò��� -u
6. ����ʱ�����ܻᷢ����ͻ�ȣ���Ҫ��ȡ�ϲ����ֶν���������ͣ�
7. ���û�Э��ʱ����������
	git pull


