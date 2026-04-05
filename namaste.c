#include <sanskrit.h>

purnaAnka vidhiSamaPariksha(purnaAnka sankhya) {
    yadi (sankhya % 2 == 0) {
        parinam 1;
    }
    parinam 0;
}

purnaAnka mukhya(shunya) {
    purnaAnka anka;

    vaach("Anka uvaachah: ");
    shrun("%d", &anka);

    yadi (vidhiSamaPariksha(anka)) {
        vaach("%d sama anka asti.\n", anka);
    } anyatha {
        vaach("%d vishama anka asti.\n", anka);
    }

    parinam 0;
}