# C++ - Module 05
## Répétition et exceptions

---

## Notions

1. Gestion des exceptions avec `try`, `catch` et `throw`
2. Exceptions personnalisées héritant de `std::exception` et redéfinition de `what()`
3. Validation des grades : de `1` (le plus élevé) à `150` (le plus bas)
4. Interaction entre classes (`Bureaucrat` et `Form`) et contrôle des autorisations
5. Classes abstraites et polymorphisme via `AForm` et ses classes dérivées
6. Signature et exécution de formulaires avec vérification des conditions
7. Création dynamique d'objets via une fabrique (`Intern::makeForm()`)

---

## Exercices

| Exercice | Sujet | Notions |
|----------|-------|---------|
| ex00 | Mommy, when I grow up, I want to be a bureaucrat! | Classe `Bureaucrat`, validation et modification du grade, exceptions `GradeTooHighException`/`GradeTooLowException`, surcharge de `operator<<` |
| ex01 | Form up, maggots! | Ajout de `Form`, grades requis pour signer et exécuter, signature via `beSigned()` et `Bureaucrat::signForm()`, gestion des exceptions |
| ex02 | No, you need form 28B, not 28C... | `Form` devient la classe abstraite `AForm`, formulaires concrets (`ShrubberyCreationForm`, `RobotomyRequestForm`, `PresidentialPardonForm`), exécution polymorphique et contrôle des autorisations |
| ex03 | At least this beats coffee-making | Classe `Intern`, création dynamique de formulaires via `makeForm()`, sélection du type à partir de son nom et gestion des noms inconnus |
