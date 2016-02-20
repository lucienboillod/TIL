# Change author of a commit

~~~sh
git rebase -i -p <commit before the one we want modify>
~~~

Then mark with `e` or `edit` the commit to modify

For each commit to ammend:
~~~sh
 git commit --amend --author "New Author Name <email@address.com>" 
 git rebase --continue
~~~

See: http://stackoverflow.com/questions/750172/change-the-author-of-a-commit-in-git
