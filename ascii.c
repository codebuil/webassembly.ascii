int iiiiii=0;
unsigned char *ccccc=".Hello world.............................................................................";
unsigned char ascii(){
    iiiiii++;
    if(iiiiii>30)iiiiii=0;
    return ccccc[iiiiii];
}