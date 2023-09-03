#ifndef MATRIZ2D_H_INCLUDED
#define MATRIZ2D_H_INCLUDED

template <typename T>
class Matrix2D
{
    protected:
        T** ptrMatrixElementos;
        unsigned int nLin, nCol;

    private:
        void init(unsigned nLin=1, unsigned nCol=1, T defaultValue = NULL)
        {
            unsigned int idxLin, idxCol;

            this->nLin = nLin;
            this->nCol = nCol;

            // aloca referencias para as linhas
            this->ptrMatrixElementos = new T*[this->nLin];

            // aloca referencias para os elementos
            for(idxLin=0; idxLin<this->nLin; idxLin++)
                this->ptrMatrixElementos[idxLin] = new T[this->nCol];

            // seta NULL para as referencias para os elementos
            for(idxLin=0; idxLin<this->nLin; idxLin++)
                for(idxCol=0; idxCol<this->nCol; idxCol++)
                    this->ptrMatrixElementos[idxLin][idxCol] = NULL;
        }
    public:
        //-----------------------------------------------------------------
        Matrix2D()
        {
            init(5, 5);
        }
        //-----------------------------------------------------------------
        Matrix2D(unsigned int _nLin, unsigned int _nCol)
        {
            this->init(_nLin, _nCol);
        }
        //-----------------------------------------------------------------
        ~Matrix2D()
        {
            unsigned int idxLin, idxCol;

            // libera as linhas
            for(idxLin=0; idxLin<this->nLin; idxLin++)
                delete []this->ptrMatrixElementos[idxLin];

            // libera o array de linhas
            delete []this->ptrMatrixElementos;

            this->nLin = 0;
            this->nCol = 0;

            this->ptrMatrixElementos = NULL;
        }

        //-----------------------------------------------------------------
        T getElemento(unsigned int idxLin, unsigned int idxCol)
        {
            if (idxLin >= this->nLin || idxCol >= this->nCol)
                return NULL;

            return this->ptrMatrixElementos[idxLin][idxCol];
        }

        //-----------------------------------------------------------------
        unsigned int setElemento(unsigned int idxLin, unsigned int idxCol, T ptrElemento)
        {
            if (idxLin >= this->nLin || idxCol >= this->nCol)
                return 0;

            this->ptrMatrixElementos[idxLin][idxCol] = ptrElemento;

            return +1;
        }

        //-----------------------------------------------------------------
        unsigned int getNLin()
        {
            return this->nLin;
        }

        //-----------------------------------------------------------------
        unsigned int getNCol()
        {
            return this->nCol;
        }
        //-----------------------------------------------------------------
         //Retornar a soma dos elementos armazenados
        T SomaElementos() {
            // Inicializa uma variável "soma" com o valor padrão do tipo T
            T soma = T();
            // Loop para percorrer todas as linhas
            for (unsigned int i = 0; i < this->nLin; ++i) {
                // Loop para percorrer todas as colunas
                for (unsigned int j = 0; j < this->nCol; ++j) {
                    // Adiciona o valor do elemento atual à soma
                    soma += this->ptrMatrixElementos[i][j];
                }
            }
            return soma;
        }
        //-----------------------------------------------------------------
        //Retornar o produto dos elementos armazenados
        T ProdutoElementos() {
            T produto = T(1);
            for (unsigned int i = 0; i < this->nLin; ++i) {
                for (unsigned int j = 0; j < this->nCol; ++j) {
                    produto *= this->ptrMatrixElementos[i][j];
                }
            }
            return produto;
        }
        //-----------------------------------------------------------------
        //Multiplicar todos os elementos por uma constante K
        void MultiplicarPorConstante(const T& k) {
            for (unsigned int i = 0; i < this->nLin; ++i) {
                for (unsigned int j = 0; j < this->nCol; ++j) {
                    this->ptrMatrixElementos[i][j] *= k;
                }
            }
        }
        //-----------------------------------------------------------------
        //Verificar se a matriz armazenada é nula
        bool MatrizNula() {
            for (unsigned int i = 0; i < this->nLin; ++i) {
                for (unsigned int j = 0; j < this->nCol; ++j) {
                    if (this->ptrMatrixElementos[i][j] != T())
                        return false;
                }
            }
            return true;
        }
        //-----------------------------------------------------------------
        //Verificar se a matriz armazenada é diagonal
        bool MatrizDiagonal() {
            if (this->nLin != this->nCol)
                return false;

            for (unsigned int i = 0; i < this->nLin; ++i) {
                for (unsigned int j = 0; j < this->nCol; ++j) {
                    if (i != j && this->ptrMatrixElementos[i][j] != T())
                        return false;
                }
            }
            return true;
        }
        //-----------------------------------------------------------------
        //Verificar se a matriz armazenada é identidade
        bool MatrizIdentidade() {
            if (!MatrizDiagonal())
                return false;

            for (unsigned int i = 0; i < this->nLin; ++i) {
                if (this->ptrMatrixElementos[i][i] != T(1))
                    return false;
            }
            return true;
        }
        //-----------------------------------------------------------------
        //Verificar se a matriz armazenada é escalar
        bool MatrizEscalar() {
            if (!MatrizDiagonal())
                return false;

            T diagonalValue = this->ptrMatrixElementos[0][0];
            for (unsigned int i = 0; i < this->nLin; ++i) {
                if (this->ptrMatrixElementos[i][i] != diagonalValue)
                    return false;
            }
            return true;
        }
        //-----------------------------------------------------------------
        //Verificar se a matriz armazenada é simétrica
        bool MatrizSimetrica() {
            if (this->nLin != this->nCol)
                return false;

            for (unsigned int i = 0; i < this->nLin; ++i) {
                for (unsigned int j = i + 1; j < this->nCol; ++j) {
                    if (this->ptrMatrixElementos[i][j] != this->ptrMatrixElementos[j][i])
                        return false;
                }
            }
            return true;
        }
        //-----------------------------------------------------------------
        //Verificar se a matriz armazenada é anti-simétrica
        bool MatrizAntiSimetrica() {
            if (!MatrizSimetrica())
                return false;

            for (unsigned int i = 0; i < this->nLin; ++i) {
                if (this->ptrMatrixElementos[i][i] != T())
                    return false;
            }
            return true;
        }
        //-----------------------------------------------------------------
        //Verificar se a matriz armazenada é triangular superior
        bool MatrizTriangularSuperior() {
            for (unsigned int i = 0; i < this->nLin; ++i) {
                for (unsigned int j = 0; j < i; ++j) {
                    if (this->ptrMatrixElementos[i][j] != T())
                        return false;
                }
            }
            return true;
        }
        //-----------------------------------------------------------------
        //Verificar se a matriz armazenada é triangular inferior
        bool MatrizTriangularInferior() {
            for (unsigned int i = 0; i < this->nLin; ++i) {
                for (unsigned int j = i + 1; j < this->nCol; ++j) {
                    if (this->ptrMatrixElementos[i][j] != T())
                        return false;
                }
            }
            return true;
        }
};

#endif // MATRIZ2D_H_INCLUDED
