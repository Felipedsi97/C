#include <iostream>

// pilha baseada em vetor;


   /* In the first alternative (delete object), the value of the operand of delete shall be a pointer to a non-array object or a pointer to a sub-object (1.8) representing a base class of such an object (clause 10). If not, the behavior is undefined.

    In the second alternative (delete array), the value of the operand of delete shall be the pointer value which resulted from a previous array new-expression. If not, the behavior is undefined.
	*/
	
	// Não consegui utilizar templates com funções friend de operadores sobrecarregados

using namespace std;

template <typename t>
class CPilha 
{
	private:
	t *m_dados;		// ponteiro para dados da pilha
	int m_topo;	// apontador do topo da pilha
	int m_tamanho;		// espaço de memória reservado para o objeto

	public:
	CPilha (int);	// construtor
	CPilha ();			// construtor sem parâmetros
	CPilha (const CPilha&); // construtor de copia
	~CPilha ();		// destrutor

	t pop ();	// puxar dados da pilha
	void push (t);	// empurrar dados para a pilha
	bool full_stack();
	bool empty_stack();
	//friend istream& operator>>(istream&, CPilha&);
	//friend ostream& operator<<(ostream&, const CPilha&);
};
/*
istream& operator>>(istream& in, CPilha& pilha)
{
	for(int i=0; i<pilha.m_tamanho;i++)
	{
		pilha.m_topo++;
		in >> pilha.m_dados[pilha.m_topo];
	}
	return in;
}

ostream& operator<<(ostream& out, const CPilha& pilha)
{
	for(int i=pilha.m_tamanho -1; i>=0; i--)
	{
		out << pilha.m_dados[i] << endl;
	}
	return out;
}
*/

template <typename t>
CPilha<t>::CPilha (int tam)
{
	m_tamanho = tam;
	m_dados = new t[m_tamanho];
	m_topo = -1;
}
template <typename t>
CPilha<t>::CPilha()
{
	m_tamanho = 1;
	m_dados = new t[m_tamanho];
	m_topo = -1;
}

template <typename t>
CPilha<t>::~CPilha()
{
	delete[] m_dados;
}

template <typename t>
CPilha<t>::CPilha (const CPilha& outra)
{
	m_tamanho = outra.m_tamanho;
	m_topo = outra.m_topo;
	m_dados = new t[m_tamanho];
	for (int i=0;i<m_tamanho;i++)
	{
		m_dados[i] = outra.m_dados[i];
	}
	
	
}

template <typename t>
bool CPilha<t>::empty_stack()
{
	if(m_topo == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

template <typename t>
bool CPilha<t>::full_stack()
{
	if(m_topo == m_tamanho - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

template <typename t>
void CPilha<t>::push(t dado)
{
	if(!full_stack())
	{
		m_topo++;
		m_dados[m_topo] = dado;
		
		
	}
}

template <typename t>
t CPilha<t>::pop()
{
	if(!empty_stack())
	{
		int topo = m_topo;
		m_topo--;
		return m_dados[topo];		
	}
	else
    {	
    	throw out_of_range("A pilha esta vazia");
    }
		
}




int main()
{
	/*
	CPilha<int> pilha(2);
	pilha.push(2.3);
	pilha.push(4.2);
	cout << pilha.pop() << endl;
	cout << pilha.pop() << endl;

	
	CPilha<float> pilha(2);
	pilha.push(2.3);
	pilha.push(4.2);
	cout << pilha.pop() << endl;
	cout << pilha.pop() << endl;

	CPilha<char> pilha(2);
	pilha.push('e');
	pilha.push('f');
	cout << pilha.pop() << endl;
	cout << pilha.pop() << endl;
	*/
	
	
	
	
	
	
	return 0;
}
