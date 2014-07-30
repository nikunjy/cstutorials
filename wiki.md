### Git Basics
* https://github.com/nikunjy/cstutorials is the repository we are going to be working in. 
* You will be needed to add as contributors. Kindly mail at nikunjyadav89@gmail.com
* Follow the steps in your command line
`git clone https://github.com/nikunjy/cstutorials.git`

Go to the directory cstutorials and do the following things
* Change the file Members.txt by adding your name
* Then do the following on cmd

```
	git add Members.txt
	git commit -m "<Whatever commit message you wish to write>"
	git config --global user.email "<Your email id>"
	git push
```

* Using `git clone` you initialize a repository of type git and download the contents into local directory from a remote repository
* When you change/add/remove files inside this repository, git keeps track of those files. 
* `git status` will show you the status of the files in the repository
* There will be modified files, the files you added and removed when you use the `git status` command
* When you do `git add <filename>` it tells the git that your <filename> file is ready to be added to the repository
* `git add .` adds all the files in the repository that have been modified as the files that are ready to be added to the remote repository.
* `git commit -m "<your message>"` commits your sets of files locally and prepares it as a set of commit and gives this set a <commit id> 
* `git push` pushes this set of files identified with the <commit id> to the remote repository (https://github.com/nikunjy/cstutorials)

### Introduction to C++ templates
* Templates are used to make generic data structures and algorithms.  If you write the following code

```
template<typename T> 
struct Node { 
	T val;
	Node<T>* next;
};
```

You are making a generic node, this node can be made with T type as int, float, double or any other datatypes including the ones that you make.  Lets say you use this Node in your code like this 

``` 
int main() { 
	Node <int> inode; 
	Node <float> fnode;
}
```

Compiler makes two versions of Node namely Node<int> and Node<float> essentially compiler transforms your code to this 

```
struct Node<int> { 
	int val;
	Node<int> *next; 
}

struct Node<float> { 
	float val;
	Node<float> *next;
}
```