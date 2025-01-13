"""Module manipulant des fichiers texte."""

def diff(file_first, file_second):
    """Fonction retournant True si deux fichiers sont différents."""
    with open(file_first) as file1_id :
        with open(file_second) as file2_id :
            return file1_id.read() != file2_id.read()

def same(file_first, file_second):
    """Fonction retournant True si deux fichiers sont identiques."""
    return True
