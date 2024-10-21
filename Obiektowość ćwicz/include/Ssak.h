#ifndef SSAK_H
#define SSAK_H
#include <Zwierze.h>

class Ssak:
    public Zwierze
{
    public:
        Ssak(float waga):Zwierze(waga)
        {

        }
        virtual ~Ssak();
        void Bieg(float jak_daleko);

    protected:

    private:
};

#endif // SSAK_H
