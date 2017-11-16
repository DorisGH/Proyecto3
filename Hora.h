class Hora{
public:
    //constructor default
    Hora();
    //constructor con parametros
    Hora(int h, int m);
    //metodos de acceso
    int getHora();
    int getMinuto();
    //metodos de modificacion
    void setHora(int h);
    void setMinuto(int m);
    //sobrecarga del operador suma
    Hora operator +(int);
    //sobrecarga del operador >>
    friend istream& operator >> (istream&, Hora &uno);
    //sobrecarga del operador <<
    friend ostream& operator << (ostream&, Hora);
private:
    //atributos
    int hora,minuto;
};

Hora :: Hora ()
{
    hora=0;
    minuto=0;
}
//constructor con parametros
Hora :: Hora(int h, int m)
{
    hora = h;
    minuto = m;
}
//metodos de acceso
int Hora :: getHora()
{
    return hora;
}
int Hora :: getMinuto()
{
    return minuto;
}
//metodos de modificacion
void Hora :: setHora(int h)
{
    hora = h;
}
void Hora :: setMinuto(int m)
{
    minuto = m;
}
Hora Hora::operator +(int horas){
    int nHora=hora+horas;
    Hora nueva(nHora,minuto);
    return nueva;
}
ostream& operator << (ostream &os, Hora uno){
    os << uno.hora << ":" << uno.minuto;
    
    return os;
}
istream& operator >> (istream &is, Hora &uno){
    is >> uno.hora;
    is >> uno.minuto;
    return is;
}


#endif /* Hora_h */
