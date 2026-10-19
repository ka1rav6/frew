# Frew Roadmap


## Phase 0.0.0 - 0.0.1
- [x] Deciding the name of this project 
- [x] Establishing the goals and non-goals
- [x] Creating this Roadmap
- [x] Creating the github repo, and having a `.gitignore` and an `MIT LICENSE`
- [x] Creating a basic folder structure and Makefile 
- [x] Setting up `.clangtidy` and `.clangformat`
- [x] Setting up the Google Test Framework `#done through the makefile`
- [x] Creating a very (veryyyy) simple logger 
- [x] Making you understand how playing with macros makes the logger appear/disappear
- [ ] Dev Blog in the `docs` section


## Phase 0.0.1 - 1.0.0 : The Tensor Library
- [ ] The generic Tensor class with constructors/destructors/members
- [ ] Metadata abstraction, and different types of static constructors (`zeroes`, `ones`, `fill`, `linspace` etc)
- [ ] Stride computation and indexing
- [ ] A proper debugging printing method for Tensors and its Metadata
- [ ] Operator overloading of `[]` and difference between `.at()` and `[]`
- [ ] Reshaping, Transposing, Slicing and Flattening
- [ ] Broadcasting
- [ ] Element-wise arithmetics on Tensors and operator overloading
- [ ] Comparison and logical Operations
- [ ] `sum`, `mean`, `median`, `mode` `min\max`, `argmin/argmax`, `var/std_dev`
- [ ] Matrix multiplication
- [ ] LA vector operations:  `dot`, `cross`, `det`, `eigenval`
- [ ] Random number generation and seeding

---
**Followed by rigorous testing in after each step**

## Phase 1.0.0 - 1.1.0 : The Pandas Part
- [ ] Using an existing MIT Licensed CSV parser and creating a wrapper around it
- [ ] Being able to convert the parsed `CSV` to the Tensors
- [ ] Additions of Rows and Columns easily
- [ ] Standard Scaling with the right metrics
- [ ] Data Cleaning options

---
**Followed by rigorous testing in after each step**

## Phase 1.1.0 - 2.0.0 : The Machine Learning part
- [ ] Linear BDG Regression
- [ ] Linear SDG Regression
- [ ] Logistic Regression (BDG and SDG)
- [ ] Multivariate Linear and Logistic Regression
- [ ] Metric calculation (`Accuracy`, `Precision`, `Recall`, `F1 Score`, `ROC AUC`)
- [ ] KNN Classification Algorithm
- [ ] Naive Bayes Classification
- [ ] Decision Trees 






