#include <sanskrit.h>
purnaAnka vidhiSamaPariksha(purnaAnka sankhya) {
    yadi (sankhya % 2 == 0) {
        parinam 1;
    }
    parinam 0;
}

purnaAnka mukhya(shunya) {
    purnaAnka anka;
    kuru{
        vaach("Anka uvaachah\n");
        shrun("%d", &anka);
    }yavad(anka < 1);
    parinam 0;
}
