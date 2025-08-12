class Nodo {
    int valor;
    Nodo izquierdo;
    Nodo derecho;

    Nodo(int valor) {
        this.valor = valor;
        izquierdo = null;
        derecho = null;
    }
}

class ArbolBinario {
    Nodo raiz;

    public void insertar(int valor) {
        raiz = insertarRec(raiz, valor);
    }

    private Nodo insertarRec(Nodo actual, int valor) {
        if (actual == null) {
            return new Nodo(valor);
        }
        if (valor < actual.valor) {
            actual.izquierdo = insertarRec(actual.izquierdo, valor);
        } else if (valor > actual.valor) {
            actual.derecho = insertarRec(actual.derecho, valor);
        }
        return actual;
    }

    public void imprimir() {
        imprimirRec(raiz, 0);
    }

    private void imprimirRec(Nodo nodo, int nivel) {
        if (nodo != null) {
            imprimirRec(nodo.derecho, nivel + 1);
            System.out.println("    ".repeat(nivel) + nodo.valor);
            imprimirRec(nodo.izquierdo, nivel + 1);
        }
    }
}

public class Main {
    public static void main(String[] args) {
        ArbolBinario arbol = new ArbolBinario();

        // Inserta los valores del árbol que pusiste en la imagen
        int[] valores = {8, 3, 10, 1, 6, 14, 4, 7};
        for (int v : valores) {
            arbol.insertar(v);
        }

        // Imprimir el árbol
        arbol.imprimir();
    }
}
