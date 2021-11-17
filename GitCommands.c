D:
	git init
	git add
	git commit -ma "Message"
	git status
	git log
	
	git diff
	git diff HEAD	-->	Stage vs. HEAD??
	git	diff --staged
	
	git restore --staged page3.html
	git reset page3.html
	
	git checkout -- page3.html
EF: Branchs
	
	git branch
	git branch newMaster
	git merge branchName
	git branch -d branchName
G:		
	git clone https://github.com/mostafa110/Latika_Kiosk_PushBut
	git push origin master
	git pull origin master
H:
	echo "# GITTest" >> README.md
	git init
	git add README.md
	git commit -m "first commit"
	git branch -M main
	git remote add origin https://github.com/mostafa110/GITTest.git
	git push -u origin main
	
	…or push an existing repository from the command line
	git remote add origin https://github.com/mostafa110/GITTest.git
	git branch -M main
	git push -u origin main